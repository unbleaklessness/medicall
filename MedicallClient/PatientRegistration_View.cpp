#include "PatientRegistration_View.h"

PatientRegistration_View::PatientRegistration_View(QWidget* parent) : QWidget(parent)
{
    // #####
    // ## Setup:
    // #####

    QVBoxLayout* base_Layout = new QVBoxLayout(this);
    base_Layout->setAlignment(Qt::AlignCenter);

    QHBoxLayout* middle_Layout = new QHBoxLayout(this);
    middle_Layout->setAlignment(Qt::AlignCenter);

    QFormLayout* form_Layout  = new QFormLayout(this);
    form_Layout->setHorizontalSpacing(30);
    form_Layout->setVerticalSpacing(10);

    register_NetworkManager = new QNetworkAccessManager;
    connect(register_NetworkManager,
            &QNetworkAccessManager::finished,
            this,
            &PatientRegistration_View::register_Finished);

    base_Layout->addStretch(3);

    // #####
    // ## Widgets:
    // #####

    middle_Layout->addStretch(1);

    // # Title
    QLabel* title_Label = new QLabel("Регистрация пациента:");
    title_Label->setAlignment(Qt::AlignCenter);
    title_Label->setFont(QFont("Arial", 30));
    base_Layout->addWidget(title_Label);

    base_Layout->addLayout(middle_Layout);
    middle_Layout->addLayout(form_Layout);

    // # Full name:
    QLabel* fullName_Label = new QLabel("ФИО:");
    fullName_Line = new QLineEdit(this);
    form_Layout->addRow(fullName_Label, fullName_Line);

    // # Username:
    QLabel* username_Label = new QLabel("Логин:");
    username_Line = new QLineEdit(this);
    form_Layout->addRow(username_Label, username_Line);

    // # E-Mail:
    QLabel* email_Label = new QLabel("Эл-Почта:");
    email_Line = new QLineEdit(this);
    form_Layout->addRow(email_Label, email_Line);

    // # Password 1:
    QLabel* password1_Label = new QLabel("Пароль:");
    password1_Line = new QLineEdit(this);
    password1_Line->setEchoMode(QLineEdit::Password);
    form_Layout->addRow(password1_Label, password1_Line);

    // # Password 2:
    QLabel* password2_Label = new QLabel("Повторите пароль:");
    password2_Line = new QLineEdit(this);
    password2_Line->setEchoMode(QLineEdit::Password);
    form_Layout->addRow(password2_Label, password2_Line);

    // # Birth Day:
    QLabel* birthDate_Label = new QLabel("Дата рождения:");
    birthDate_Line = new QDateTimeEdit(this);
    birthDate_Line->setDisplayFormat("dd.MM.yyyy");
    form_Layout->addRow(birthDate_Label, birthDate_Line);

    // # Location:
    QLabel* localtion_Label = new QLabel("Место проживания:");
    location_Line = new QLineEdit(this);
    form_Layout->addRow(localtion_Label, location_Line);

    // # Gender:
    QLabel* gender_Label = new QLabel("Пол:");
    gender_Line = new QComboBox(this);
    gender_Line->addItem("Мужской");
    gender_Line->addItem("Женский");
    form_Layout->addRow(gender_Label, gender_Line);

    // # Weight:
    QLabel* weight_Label = new QLabel("Вес:");
    weight_Line = new QLineEdit(this);
    weight_Line->setValidator(new QDoubleValidator(0.0, 300.0, 3, this));
    form_Layout->addRow(weight_Label, weight_Line);

    // # Height:
    QLabel* height_Label = new QLabel("Рост:");
    height_Line = new QLineEdit(this);
    height_Line->setValidator(new QDoubleValidator(0.0, 300.0, 3, this));
    form_Layout->addRow(height_Label, height_Line);

    // # Blood Type:
    QLabel* bloodType_Label = new QLabel("Группа крови:");
    bloodType_Line = new QComboBox(this);
    bloodType_Line->addItem("0");
    bloodType_Line->addItem("A");
    bloodType_Line->addItem("B");
    bloodType_Line->addItem("AB");
    form_Layout->addRow(bloodType_Label, bloodType_Line);

    // # Back Button:
    QPushButton* back_Button = new QPushButton("Назад");
    connect(back_Button,
            &QPushButton::clicked,
            [=] () { emit backButton_Clicked(); });

    // # Register Button:
    QPushButton* register_Button = new QPushButton("Зарегестрироваться");
    connect(register_Button,
            SIGNAL(clicked()),
            this,
            SLOT(registerButton_Clicked()));

    form_Layout->addRow(back_Button, register_Button);

    // #####
    // ## Other:
    // #####

    middle_Layout->addStretch(1);
    base_Layout->addStretch(3);

    setLayout(base_Layout);
}

PatientRegistration_View::~PatientRegistration_View() {}

void PatientRegistration_View::registerButton_Clicked()
{
    QJsonObject data {
        {"username", username_Line->text()},
        {"password", password1_Line->text()},
        {"passwordRepeat", password2_Line->text()},
        {"fullName", fullName_Line->text()},
        {"birthDate", birthDate_Line->text()},
        {"email", email_Line->text()},
        {"bloodType", bloodType_Line->currentText()},
        {"height", height_Line->text()},
        {"weight", weight_Line->text()},
        {"gender", gender_Line->currentText()},
        {"location", location_Line->text()},
    };

    NetworkManager::postJson(register_NetworkManager,
                             QUrl("http://localhost:8000/register-patient/"),
                             data);
}

void PatientRegistration_View::register_Finished(QNetworkReply* reply)
{
    QVariantHash data = NetworkManager::processReply(reply);

    if (!data["status"].isValid()) return;

    emit registered_Event(data);
}

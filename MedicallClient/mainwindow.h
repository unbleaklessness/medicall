#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QStackedWidget"
#include "QDesktopWidget"

#include "welcomeview.h"
#include "loginview.h"
#include "patientregistrationview.h"
#include "patient.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public slots:
    void switchToWelcomeView();
    void switchToLoginView();
    void switchToPatientRegistrationView();
    void switchToDoctorRegistrationView();

public:
    MainWindow();
    ~MainWindow();

    QStackedWidget* stack;
};

#endif // MAINWINDOW_H

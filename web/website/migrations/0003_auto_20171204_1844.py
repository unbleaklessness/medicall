# -*- coding: utf-8 -*-
# Generated by Django 1.11.2 on 2017-12-04 18:44
from __future__ import unicode_literals

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('website', '0002_auto_20171204_1836'),
    ]

    operations = [
        migrations.DeleteModel(
            name='Patient',
        ),
        migrations.AddField(
            model_name='user',
            name='doctor',
            field=models.BooleanField(default=False),
        ),
    ]

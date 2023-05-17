#ifndef PERCENTAGE1_H
#define PERCENTAGE1_H
#include<QString>
#include<QVector>
#include<QTextStream>
#include<iostream>
#include"Brute_Force.h"
using namespace std;

class percentage1 : public Brute_Force
{
public:
    percentage1();
    bool same_word(QString text, QString pattern);
    int percentage_cal(QString text,QString pattern);


};

#endif // PERCENTAGE1_H

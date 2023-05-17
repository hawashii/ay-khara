#ifndef PERCENTAGE_H
#define PERCENTAGE_H
#include<QString>
#include<QVector>
#include<QTextStream>
#include<iostream>
#include"detect.h"

using namespace std;

class percentage : public detect
{
public:
    percentage();
    bool detectSameWords(QString textword,QString patternword);
    int percentagecal(QString text, QString pattern);

};

#endif // PERCENTAGE_H

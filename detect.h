#ifndef DETECT_H
#define DETECT_H
#include<QString>
#include<QVector>
#include<QTextStream>
#include<iostream>
#include<cmath>
#include<QChar>
#include"rabin_karp.h"

using namespace std;

class detect : public Rabin_Karp
{
public:
    detect();
    QVector<QString> split_sentence(QString pattern);
    bool detectPlagiarism(QString text, QString pattern);

};

#endif // DETECT_H

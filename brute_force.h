#ifndef BRUTE_FORCE_H
#define BRUTE_FORCE_H
#include<QString>
#include<QVector>
#include<QTextStream>
#include<iostream>
using namespace std;
class Brute_Force
{
public:
    Brute_Force();
    QVector<QString> split_sentence(QString pattern);
    int hammingDistance(QString str1, QString str2);
    bool detectPlagiarism(QString text, QString pattern);
};

#endif // BRUTE_FORCE_H

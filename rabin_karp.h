#ifndef RABIN_KARP_H
#define RABIN_KARP_H
#include<QString>
#include<QVector>
#include<QTextStream>
#include<iostream>
#include<cmath>
#include<QChar>
using namespace std;

class Rabin_Karp
{


public:

    Rabin_Karp();
    int hash1(QString s, int len);
    bool isEqual(QString first, QString second,int first_beginning,int second_beginning, int len);

};

#endif // RABIN_KARP_H

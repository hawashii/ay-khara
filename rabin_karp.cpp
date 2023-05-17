#include "rabin_karp.h"

Rabin_Karp::Rabin_Karp()
{
}
int Rabin_Karp::hash1(QString s, int len){
     const int prime=101;
    int h=0;
    for(int i=0;i<len;i++){
        h+=QChar(s[i]).unicode()*(pow(prime,i));

    }
    return h;
}

bool Rabin_Karp::isEqual(QString first, QString second,int first_beginning,int second_beginning, int len){
    for (int i=0;i<len; i++){
        if (first[first_beginning+i]!=second[second_beginning+i]){
            return false;
        }
    }return true;
}

#ifndef PATTERN_H
#define PATTERN_H
#include<QString>
using namespace std;
class pattern
{
private:
    QString ppattern="";
public:
    pattern();
    void setpattern(QString p);
    QString getpattern();
};

#endif // PATTERN_H

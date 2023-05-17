#include "detect.h"

detect::detect()
{
}
QVector<QString> detect::split_sentence(QString pattern){
           QVector<QString> v;
           int startIndex = 0, endIndex = 0;
           for (int i = 0; i < pattern.size(); i++) {
               if (pattern[i] == ' ' || pattern[i] == '.') {
                   endIndex = i;
                   QString temp = pattern.mid(startIndex, endIndex - startIndex);
                   v.push_back(temp);
                   startIndex = endIndex + 1;
               }
           }
           //Move through the sentence and when a space or '.' is found pushback the word and update the start, else incremented the end.
           return v;
       }


bool detect::detectPlagiarism(QString text, QString pattern){
    int c = 0;
        //counter of the matching words
        int textLen = text.length();
        QVector<QString> r;
        //vector of words
        r = detect::split_sentence(pattern);
        for (int j = 0; j < r.size(); j++) {
            int patternLen = r[j].length();
            int patternHash = Rabin_Karp::hash1(r[j], patternLen);
            //a hash for the word
            QVector<int> hashValues((textLen - patternLen + 1));
            //vector of hashs for the text
            hashValues[0] = hash1(text.mid(0, patternLen), patternLen);
            for (int i = 1; i <= textLen - patternLen; i++) {
                hashValues[i] = QChar(hashValues[i - 1]).digitValue() - QChar(text[i - 1]).digitValue();
                //forms a new hash
                hashValues[i] /= 101;
                //removes the first letter
                hashValues[i] += QChar(text[i + patternLen - 1]).digitValue() * pow(101, patternLen - 1);
                //adds a new letter at the end
            }
            for (int i = 0; i <= textLen - patternLen; i++) {
                if (patternHash == hashValues[i] && isEqual(text, r[j], i, 0, patternLen)) {
                    c++;

                }
                //comparing each word
            }        if (c < 2) {
                return false;
            }
            else {
                return true;
                //if atleast two words are the same return true
            }
        }
}


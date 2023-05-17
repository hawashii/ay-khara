#include "percentage1.h"
#include<QString>
#include<QVector>
#include<QTextStream>
#include"brute_force.h"
using namespace std;




percentage1::percentage1()#include<iostream>

{
}
bool percentage1::same_word(QString text, QString pattern){
    if (text.length() != pattern.length()) {
             return false;
         }

         int dist = ( Brute_Force::hammingDistance(text, pattern));

         if (dist == 0) {
             return true;
         }

         return false;
}
int percentage1::percentage_cal(QString text, QString pattern){
    int matching = 0;
            //counter for matching words
            int percentage;
            if ((Brute_Force::detectPlagiarism(text, pattern)) == false) {
                percentage = 0;
            }
            //if there is no plagiarism detected, there is no need to continue, and if you didn't check the functoin will
            //calculate a plagiarism percentage for one word while no plagiarism is cosidered for one word
            else {
                QVector<QString> textWords = Brute_Force::split_sentence(text);
                QVector<QString> patternWords = Brute_Force::split_sentence(pattern);
                //form a vector of words for the text and pattern to compare the words
                for (int i = 0; i < patternWords.size(); i++) {
                    for (int j = 0; j < textWords.size(); j++) {
                        if (same_word(textWords[j], patternWords[i])) {
                            matching++;
                        }
                    }
                }
                percentage = (static_cast<double>(matching) / patternWords.size()) * 100;
                //percentage is calculated

            }
            return percentage;
}

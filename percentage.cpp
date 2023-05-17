#include "percentage.h"

percentage::percentage()
{
}
bool percentage::detectSameWords(QString textword, QString patternword){
    int word1Len = textword.length();
            int word2Len = patternword.length();
            if (word1Len != word2Len) {
                return false;
                //if the words aren't the same size there is no need to continue
            }
            int word1Hash = detect::hash1(textword, word1Len);
            int word2Hash = detect::hash1(patternword, word2Len);
            //form hashes for the two words
            if (word1Hash == word2Hash && isEqual(textword, patternword, 0, 0, word1Len)) {
                return true;
            }
            return false;
            //return true if they are the same word
}
int percentage::percentagecal(QString text, QString pattern){
    int matching = 0;
            //counter for matching words
            int percentage;
            if (detect::detectPlagiarism(text, pattern) == 0) {
                percentage = 0;
            }
            //if there is no plagiarism detected, there is no need to continue, and if you didn't check the functoin will
            //calculate a plagiarism percentage for one word while no plagiarism is cosidered for one word
            else {
                QVector<QString> textWords = split_sentence(text);
                QVector<QString> patternWords = split_sentence(pattern);
                //form a vector of words for the text and pattern to compare the words
                for (int i = 0; i < patternWords.size(); i++) {
                    for (int j = 0; j < textWords.size(); j++) {
                        if (detectSameWords(textWords[j], patternWords[i])) {
                            matching++;
                        }
                        //if they are the same word matching is increamented
                    }
                }

                percentage = (static_cast<double>(matching) / patternWords.size()) * 100;
                //percentage is calculated
                return percentage;

            }
}


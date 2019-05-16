#ifndef TEXT_ANALYZER_H
#define TEXT_ANALYZER_H
#include <string>
using namespace std;
class text_analyzer
{
    string text;
public:
    text_analyzer();
    void setText(string text);
    int getLettersCount();
    int getWordsCount();
    int getSymbolsCount();
    int getSentencesCount();
        string  changeWords(string previousWord, string newWord);
};

#endif // TEXT_ANALYZER_H

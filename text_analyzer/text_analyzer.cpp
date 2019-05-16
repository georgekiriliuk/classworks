#include "text_analyzer.h"

text_analyzer::text_analyzer()
{

}

void text_analyzer::setText(string text)
{
    this->text = text;
}

int text_analyzer::getLettersCount()
{
    return 100;
}

int text_analyzer::getWordsCount()
{
    return 100;
}

int text_analyzer::getSymbolsCount()
{
    return 100;
}

int text_analyzer::getSentencesCount()
{
    return 100;
}

string text_analyzer::changeWords(string previousWord, string newWord)
{
   return this->text;
}

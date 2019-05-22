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
    int countw = 0;
    bool word = false;
    for(int i = 0;i < text.length();i++ ){
        if(text[i]>65 && text[i]<91){
            word = true;
        }
        else if(text[i]> 96  && text[i] < 123){
            word = true;
        }
        else{
            word = false;
        }

        if(word == true){
            countw++;
        }
    }
    return countw;
 }

int text_analyzer::getWordsCount()
{
    int countw = 0;
    bool word = false;
    for(int i = 0;i < text.length();i++ ){
        if(text[i]>65 && text[i]<91){
            word = true;
        }
        else if(text[i]> 96  && text[i] < 123){
            word = true;
        }
        else{
            if(word == true){
                countw++;
            }
            word = false;
        }


    }
    if(word == true){
        countw++;
    }
    return countw;
 }

int text_analyzer::getSymbolsCount()
{
    return text.length();
}

int text_analyzer::getSentencesCount()
{
    return 100;
}

string text_analyzer::changeWords(string previousWord, string newWord)
{
   return this->text;
}

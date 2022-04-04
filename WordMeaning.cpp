#include "WordMeaning.h"
#include <cstring>

WordMeaning::WordMeaning(const char* word, const char* meaning)
{
    setWord(word);
    setMeaning(meaning);
}

WordMeaning::WordMeaning(const WordMeaning& other)
{
    setWord(other.getWord());
    setMeaning(other.getMeaning());
}

WordMeaning::~WordMeaning()
{
    delete[] word;
    delete[] meaning;
}

WordMeaning& WordMeaning::operator=(const WordMeaning& other)
{
    if (this != &other)
    {
        setWord(other.getWord());
        setMeaning(other.getMeaning());
    }
    
    return *this;
}

char* WordMeaning::getWord() const
{
    return word;
}

char* WordMeaning::getMeaning() const
{
    return meaning;
}

void WordMeaning::setWord(const char* word)
{
    delete[] this->word;
    size_t word_len = strlen(word); 
    this->word = new char[word_len];
    strcpy(this->word, word);
}

void WordMeaning::setMeaning(const char* meaning)
{
    delete[] this->meaning;
    size_t meaning_len = strlen(meaning);
    this->meaning = new char[meaning_len];
    strcpy(this->meaning, meaning);
}
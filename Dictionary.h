#ifndef DICTIONARY_H
#define DICTIONARY_H

#include "WordMeaning.h"
#include <cstring>
#include <iostream>

class Dictionary
{
private:
    WordMeaning* words_meanings{};
    std::size_t size{};
    std::size_t capacity{};

public:
    Dictionary();
    // Dictionary(const WordMeaning* words_meanings) = delete;
    // Dictionary(const Dictionary& other) = delete;
    ~Dictionary();

    // Dictionary& operator=(const Dictionary& other);

    // WordMeaning* getWordsMeanings() const;
    // void setWordsMeanings(const WordMeaning* words_meanings);

    void printAll() const;
    void append(const WordMeaning& word_meaning);
    char* searchMeaning(const char* word) const;
};

#endif
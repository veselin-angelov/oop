#include "Dictionary.h"

Dictionary::Dictionary()
{
    size = 0;
    capacity = 8;
    words_meanings = new WordMeaning[capacity];
}

Dictionary::~Dictionary()
{
    delete[] words_meanings;
}

void Dictionary::append(const WordMeaning& word_meaning)
{
    if (this->size + 1 <= this->capacity)
    {
        this->size++;
        this->words_meanings[size] = word_meaning;
    }
    else
    {
        this->capacity *= 2;
        WordMeaning* temp = new WordMeaning[this->capacity];

        for (size_t i = 0; i < this->size; i++)
        {
            temp[i] = this->words_meanings[i];
        }

        delete[] this->words_meanings;

        this->words_meanings = temp;
        append(word_meaning);        
    }
}

void Dictionary::printAll() const
{
    for (size_t i = 0; i < this->size; i++)
    {
        std::cout << words_meanings[i].getWord() << ": " << words_meanings[i].getMeaning() << std::endl;
    }
}

char* Dictionary::searchMeaning(const char* word) const
{
    for (size_t i = 0; i < this->size; i++)
    {
        if (strcmp(words_meanings[i].getWord(), word) == 0)
        {
            return words_meanings[i].getMeaning();
        }
    }
    return nullptr;
}

// Dictionary::Dictionary(const WordMeaning* words_meanings)
// {
// }

// void Dictionary::setWordsMeanings(const WordMeaning* words_meanings)
// {
//     delete[] this->words_meanings;

//     for (size_t i = 0; words_meanings[i] != '\0'; i++)
//     {
//         /* code */
//     }
    
// }
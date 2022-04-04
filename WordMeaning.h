#ifndef WORDMEANING_H
#define WORDMEANING_H

class WordMeaning
{
private:
    char* word{};
    char* meaning{};

public:
    WordMeaning() = default;
    WordMeaning(const char* word, const char* meaning);
    WordMeaning(const WordMeaning& other);
    ~WordMeaning();

    WordMeaning& operator=(const WordMeaning& other);

    char* getWord() const;
    char* getMeaning() const;

    void setWord(const char* word);
    void setMeaning(const char* meaning);
};

#endif
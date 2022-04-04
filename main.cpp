#include <iostream>
#include "Dictionary.h"

int main()
{
    std::cout << "test" << std::endl;

    Dictionary dict;

    WordMeaning wordMeaning1 = WordMeaning("vesko", "gotin");

    dict.append(wordMeaning1);

    dict.printAll();

    return 0;
}

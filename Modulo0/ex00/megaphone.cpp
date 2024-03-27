#include <iostream>
#include <locale> 

void word_to_upper(char *word)
{
    int i = 0;

    while(word[i]){
    if (std::isupper(word[i]))
        std::cout << word[i];
    else
        std::cout << (char)std::toupper(word[i]);
    i++;
    }
    std::cout << " ";
}

int main(int argc, char **str)
{
    if (argc < 2) std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for(int i = 1; i < argc; i++)
            word_to_upper(str[i]);
    }
    std::cout << std::endl;
}

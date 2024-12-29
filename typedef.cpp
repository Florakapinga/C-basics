#include <iostream>

typedef std::string text_t;
typedef int number_t;
int main()
{
    text_t firstName = "Florah";
    number_t age = 12;
    std::cout << "hey " << firstName << '\n';
    std::cout << "you are " << age;
}
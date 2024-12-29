#include <iostream>
int main()
{
    // integer (whole numbers)
    int age = 20;
    int year = 2024;
    int day = 5.9; // trying to assign decimal number as a integer

    // double (numbers including decimals)
    double price = 900.9;
    double gpa = 4.8;
    double temperature = 32.7;

    // single character
    char grade = 'A';
    char initial = 'B';
    char dollarsign = '$';

    // Boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = true;
    // string (objects that presents sequence text )
    std::string name = "florah";
    std::string address = "ruhuwiko st.10";
    std::string food = "meat";
    std::string gender = "male";

    std::cout << "hellow! " << name << '\n';
    std::cout << "your gender is " << gender << '\n';
    std::cout << "you are " << age << "years old";

    return 0;
}
#include <iostream>

int main(void)
{
    std::string str = "HI THIS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;

    std::cout << "adress of str: " << &str << std::endl;
    std::cout << "adress of ptr" << &ptr << std::endl;
    std::cout << "adress of ref: " << &ref << std::endl;
    std::cout << "str content: " << str << std::endl;
    std::cout << "ptr content: " << *ptr << std::endl;
    std::cout << "ref content: " << ref << std::endl;
}

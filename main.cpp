#include <iostream>

int main()
{
    std::cout << "Data Types" << std::endl;
    std::cout << "signed char - 1 byte, [-128-127]" << std::endl;
    std::cout << "unsigned char - 1 byte, [0-255]" << std::endl;
    std::cout << "char - 1 byte, [-128-127] or [0-255]" << std::endl;
    std::cout << "short - 2 bytes, [-32768-32767]" << std::endl;
    std::cout << "unsigned short - 2 bytes, [0-65535]" << std::endl;
    std::cout << "int - 2 bytes, [-32768-32767]" << std::endl;
    std::cout << "int - 4 bytes, [-2147483648-2147483647]" << std::endl;
    std::cout << "unsigned int - 2 bytes, [0-65535]" << std::endl;
    std::cout << "unsigned int - 4 bytes, [0-4294967295]" << std::endl;
    std::cout << "long - 4 bytes, [-2147483648-2147483647]" << std::endl;
    std::cout << "long - 8 bytes, [-9223372036854775808-9223372036854775807]" << std::endl;
    std::cout << "unsigned long - 4 bytes, [0-4294967295]" << std::endl;
    std::cout << "long long - 8 bytes, [-9223372036854775808-9223372036854775807]" << std::endl;
    std::cout << "unsigned long long - 8 bytes, [0-18446744073709551615]" << std::endl;
    std::cout << "float - 4 bytes, [+- 3.4E-38 - 3.4E+38]" << std::endl;
    std::cout << "double - 8 bytes, [+- 1.7E-308 - 1.7E+308]" << std::endl;
    std::cout << "long double - 8 bytes" << std::endl;
    std::cout << "bool - 1 byte, true-false" << std::endl;
    std::cout << "" << std::endl;

    // signed char
    std::cout << "Example for signed char" << std::endl;
    signed char a = {1};
    signed char b = {18};
    std::cout << a + b << std::endl;

    // int
    std::cout << "Example for int" << std::endl;
    int new_a = 12;
    int new_b = 8;
    std::cout << new_a + new_b << std::endl;

    // double
    std::cout << "Example for double" << std::endl;
    double d_a = 1.2;
    double d_b = 1.7;
    std::cout << d_a + d_b << std::endl;

    return 0;
}
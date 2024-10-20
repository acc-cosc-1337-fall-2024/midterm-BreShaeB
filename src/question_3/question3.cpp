#include "question3.h"

bool test_config()
{
    return true;
}

string decimal_to_binary(int num)
{
    string binary = "";
    string binary1 = "";
    while(num > 0)
    {
        int num1 = 0;
        num1 = num % 2;
        binary.push_back('0' + num1);
        num = num/2;
    }
    while(binary.size() < 8)
    {
        binary.push_back('0');
    }
    for(int i = binary.size() - 1; i >= 0; i--)
    {
        binary1.push_back(binary[i]);
    }

    return binary1;
}
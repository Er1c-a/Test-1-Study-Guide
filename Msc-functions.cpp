#include "Libraries-allowed.h"
//find the power of a number
int power(int base, int exponent)
{
    int total = 1;
    for(int i = 0; i < exponent; i++)
    {
        total *= base;
    }
return total;
}

//find duplicates in a vector
bool isDuplicate(const std::vector<std::string>& dictionary, const std::string&
word)
{
    for( const std::string& dictWord : dictionary)
    {
    if(dictWord == word)
    {
    return true;
    }
}
return false;
}
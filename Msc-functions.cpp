#include "Libraries-allowed.h"
//find the power of a number
using namespace std;
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
    for(const std::string& dictWord : dictionary)
    {
    if(dictWord == word)
    {
    return true;
    }
}
return false;
}

//Find unique elements in a vector and put them into a new one
int unique(vector<int>& vec)
{
    //set up unique vector
    vector<int> unique;
    if(vec.size()==0)
    {
        return -1;
    }
    //list of unique numbers
    for(int i=0; i < vec.size();i++)
    {
        int num = vec[i];
        bool isunique = true; 
        for(int j =0; j<unique.size();j++)
        {
            if(num == unique[j])
            {
                isunique = false;
                break;
            }
        }
        if(isunique)
        {
            unique.push_back(num);
        }
    }
}
// Extracts each digit & then moves onto the next one
int ExtractDigit(int x)
{
    int rev = 0;
    while(x>0)
    {
        //extract each digit
        int digit = x%10;
        //move onto the next digit
        x/=10;
    }
    return  rev;
}

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

//Reverses a list in order
void reverseList(vector<int>& vec)
{
    int back = static_cast<int>(vec.size())-1;
    int front = 0;
    while (front < back)
    {
        std::swap(vec[front],vec[back]);
        ++front;
        --back;
    }
}

// returns a vector of unique words
vector<string> uniqueWords(string str)
{
    vector<string> dict;
    string current;
    for(char c : str)
    {
        c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
        if (!std::isalnum(static_cast<unsigned char>(c)))
        {
            if(!current.empty())
            {
                bool duplicate = false;
                for(const string& word : dict)
                {
                    if(word == current)
                    {
                        duplicate = true;
                        break;
                    }
                }
                if(!duplicate)
                {
                    dict.push_back(current);
                }
                current.clear();
            }
            continue;
        }
        current.push_back(c);
    }
    if(!current.empty())
    {
        bool duplicate = false;
        for(const string& word : dict)
        {
            if(word == current)
            {
                duplicate = true;
                break;
            }
        }
        if(!duplicate)
        {
            dict.push_back(current);
        }
    }
    return dict;
}

//find the index of a specific element
int find(const vector<int>& vec, int b)
{
    for(int i = 0; i<vec.size(); i++)
    {
    if(vec[i] == b)
        {
            return i;
        }
    }
    return -1;
}

//Find elements in both vectors
vector<int> unionOfVector(const vector<int>& a,const vector<int> b)
{
    vector<int> refa;
    for(int i=0; i<a.size();i++)
    {
        if(find(refa,a[i])<0)
        {
            refa.push_back(a[i]);
        }
    }
    for(int i = 0; i<b.size();i++)
    {
        int e = b[i];
        if(find(a,e)>=0)
        {
            if(find(refa,e)<0)
            {
            refa.push_back(e);
            }
        }
    }
return refa;
}

//Rotate a vector in place
vector<int> rotateVector(const vector<int>& vec, int num)
{
    int size = static_cast<int>(vec.size());
    vector<int> ret(size);
    if (size == 0) return ret;
    int shift = num % size;
    if (num <0) shift = shift + size;
    for(int i=0; i<size; i++)
    {
        int pos = (i+shift) % size;
        ret[pos] = vec[i];
    }
    return ret;
}
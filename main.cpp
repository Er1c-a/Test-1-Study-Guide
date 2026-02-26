#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <limits>
using namespace std;
//second largest unique number
int findSecondLargest(vector<int>& vec)
{
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
    if(unique.size()<=1)
    {
        return -1;
    }
    int first = numeric_limits<int>::min();
    int second = numeric_limits<int>::min();
    for(int i=0; i<unique.size();i++)
    {
        int num = unique[i];
        if(num > first)
        {
            second = first;
            first = num;
        }
        else if(num > second)
        {
            second = num;
        }
    }
    return second;
}
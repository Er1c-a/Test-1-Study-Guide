#include "Libraries-allowed.h"

//Pay attention to what is says
pass a reference = & not const &

//How to input and output
int main()
{
    std::string variable;
    std::cout << "message displayed to output" << "\n";
    std::cin >> variable;
    //put into variable
    return 0;
}
 vector.push_back(element)
    //Adds a new element to the end of a vector

std::tolower()
char lower = std::tolower(static_cast<unsigned char>(str[i]));
    //puts into lowercase

static_cast<type>(element)
    //Forcibly changes the type of an element

int min = std::numeric_limits<int>::min()
    //Initalize lowest possible int value
int max = std::numeric_limits<int>::max()
    //Initalize highest possible int value

//Cycles through all the characters of string
    for(char c : string)

// Iterate in reverse from the last element to the first
std::vector<int> nums {1, 2, 4, 8, 16};
for (auto it = nums.rbegin(); it != nums.rend(); ++it)
{
    std::cout << *it << " "; // Output: 16 8 4 2 1
}
//constructs a new string "low" by iterating from end to beginning
return low == string(low.rbegin(), low.rend());

//Initalize a 2D vector
std::vector<vector<type>> vec {};
using Matrix = std::vector<std::vector<int>>;

// static variables
static int count = 0;

//erase
(string).erase() cannot erase a specfic character; it only takes indexs
therefore, if you want to erase at a certian spot, do
str.erase(i,1);
    This means erase one character at index i


'\0' means not a space or letter

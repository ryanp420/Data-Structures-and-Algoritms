#include <iostream>
#include "generate.h"
using std::cout;
using std::endl;
using std::vector;

class Person
{
public:
    int number;
};

int main()
{
    vector<int> test;
    List list1(test);
    list1.randomGenerateVector(test, 10, 1000);
    list1.display(test);

    return 0;
}
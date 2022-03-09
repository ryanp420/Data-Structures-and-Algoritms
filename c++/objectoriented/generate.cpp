#include <iostream>
#include <cstdlib>
#include <algorithm>
#include "generate.h"

using std::cout;
using std::endl;
using std::vector;

List::List(std::vector<int> vectorPublic)
{
    vectorPublic = vectorPrivate;
}

void List::display(vector<int> vectorPublic)
{
    for (int i : vectorPublic)
    {
        cout << i << ", ";
    }
    cout << endl;
}

void List::randomGenerateVector(vector<int> v, int amountOfNumbers, int numberRange)
{
    // numberRange = 100 {0-99}
    // numberRange = 10 {0-9} etc...

    srand(time(NULL));
    for (int i = 0; i < amountOfNumbers; i++)
    {
        v.push_back(rand() % numberRange);
    }
    cout << "Unsorted:" << endl;
    display(v);

    cout << "Sorted:" << endl;
    sort(v.begin(), v.end());
    display(v);

    // displayBinarySearchResults(v);
}
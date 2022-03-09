#ifndef LIST
#define LIST

#include <vector>


class List
{
private:
    std::vector<int> vectorPrivate;

public:
    List(std::vector<int> vectorName);
    void display(std::vector<int> vectorName);
    void randomGenerateVector(std::vector<int> vectorName, int amount, int numRange);

    // int binarySearch(vector<int> v, int size, int searchValue);
    // void displayBinarySearchResults(vector<int> v);
};

#endif
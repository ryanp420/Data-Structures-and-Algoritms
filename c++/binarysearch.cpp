// ! Binary search:
//  ? Array must be sorted
//  ? log2(N)
//      ** log2(64000) = 16 searches

// TODO:
//  - Vector must be sorted before Binary Search Occurs
//  - How to make unsorted vector,sort vector,then do binary search

#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;

int binarySearch(vector<int> v, int size, int searchValue);
int binarySearch(int array[], int size, int searchValue);

void display(vector<int> vector);
int displayArray(int *array[]);

void displayBinarySearchResults(vector<int> v);
// void displayBinarySearchResults(int array[]);

void randomGenerateVector(vector<int> v, int amount, int numRange);

int main()
{
    vector<int> list;
    randomGenerateVector(list, 10, 100);

    return 0;
}

int binarySearch(vector<int> v, int size, int searchValue)
{
    // Binary Search Algorithm in Vector Form
    int start = 0;
    int end = size - 1;
    int middle;
    while (start <= end)
    {
        middle = (start + end) / 2;
        if (searchValue == v[middle]) // v[middle] = actual element
        {
            return middle; // index
        }
        else if (searchValue > v[middle])
        {
            start = middle + 1;
        }
        else
        {
            end = middle - 1;
        }
    }
    return -1;
}

int binarySearch(int array[], int size, int searchValue)
{
    // Binary Seach in Array Form
    int start = 0;
    int end = size - 1;

    int middle;

    while (start <= end)
    {
        middle = (start + end) / 2;
        if (searchValue == array[middle])
        {
            return middle;
        }
        else if (searchValue > array[middle])
        {
            // middle < searchValue;
            start = middle + 1;
        }
        else
        {
            end = middle - 1;
        }
    }
    return -1;
}

void display(vector<int> vector)
{

    for (int i : vector)
    {
        cout << i << ", ";
    }
    cout << endl;
}

int displayArray(int *array[])
{
    int sizeArray = sizeof(*array) / sizeof(array[0]);
    for (int i = 0; i < sizeArray; i++)
    {
        cout << i << ", ";
    }
    cout << endl;
    return 0;
}

// Initiate the Binary Search Algorithm
void displayBinarySearchResults(vector<int> v)
{
    int size = v.size();
    cout << "Size of vector = " << size << endl;

    cout << " ---------- Binary Search: ---------- " << endl;
    int target;
    cout << "Enter target number: " << endl;
    cin >> target;
    int result = binarySearch(v, v.size(), target);

    if (result >= 0)
    {
        cout << "The target: " << v[result] << " was found at index: " << result << endl;
    }
    else
    {
        cout << "The target: " << target << " was not found" << endl;
    }
}

// Get Random Numbers, Sort Numbers, Display Binary Search
void randomGenerateVector(vector<int> v, int amount, int numRange)
{
    srand(time(NULL));
    for (int i = 0; i < amount; i++)
    {
        v.push_back(rand() % numRange);
    }
    cout << "Unsorted:" << endl;
    display(v);

    cout << "Sorted:" << endl;
    sort(v.begin(), v.end());
    display(v);

    displayBinarySearchResults(v);
}
#include <iostream>

#include "getInputInArray.cpp"
#include "displayArray.cpp"
#include "sortAnArray.cpp"

using namespace std;

void arrayImplement(int arr[], int size, bool sort = 1)
{

    getInputFromUser(arr, size);
    display(arr, size);
    if (sort)
        sortAnArray(arr, size);
    display(arr, size);
}

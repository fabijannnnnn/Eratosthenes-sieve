#include <cstdio>
#include <iostream>

void writePrimes(bool* arr, int size)
{
    std::cout << "Prime numbers: " <<std::endl;
    for(int i = 0; i < size; i++)
    {
        if(arr[i])
            std::cout << i << " ";
    }
    std::cout << std::endl;
}

void removeMultipliers(bool* arr, int multiplier, int size)
{
    for(int i = multiplier * 2; i < size; i += multiplier)
    {
        arr[i] = false;
    }
}

void calculatePrimes(bool* arr, int size)
{
    for(int i = 0; i <= sqrt(size); i++)
    {
        if(arr[i])
            removeMultipliers(arr, i, size);
    }
}

void initArr(bool* arr, int size)
{
    arr[0] = false;
    arr[1] = false;
    for(int i = 2; i < size; i++)
    {
        arr[i] = true;
    }
}

int main()
{
    std::cout << "Input a number: " << std::endl;
    int number = 0;
    std::cin >> number;

    bool* arr = new bool[number + 1];
    initArr(arr, number + 1);

    calculatePrimes(arr, number + 1);

    writePrimes(arr, number + 1);

    delete []arr;

    return 0;
}

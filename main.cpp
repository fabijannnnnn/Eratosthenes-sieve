#include <iostream>

void writePrimes(bool* arr, int size)
{
    std::cout << "Prime numbers: " <<std::endl;

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

    writePrimes(arr, number + 1);

    return 0;
}

#include<iostream>

int main()
{
    const int s = 10;
    int arr[s] = {};

    for(int i = 0; i < s; ++i)
    {
        std::cin >> arr[i];
    }
}

int* sort(int* arr, const int s)
{
    int tmp = arr[0];
    int index = 0;
    for(int i = 0; i < s; ++i)
    {
        for(int j = 1; j < s; ++j)
            {
                if(arr[i] > arr[j])
                {
                    std::swap(tmp, arr[j]);
                    index = j;
                }
            }
    }
    return arr;
}

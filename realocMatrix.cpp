#include<iostream>
int* aloc(int);
void real(int* &arr, int&);

int main()
{
    int s = 0;
    std::cout << " enter to size of arr " << std::endl;
    std::cin >> s;
    int* arr = aloc(s);
    real(arr, s);
    
    for(int i = 0; i < s; ++i){
        std::cout << arr[i] << ' ';
    }

delete[] arr;
}

void real(int* &arr, int& s)
{
    int deff = 0;
    std::cout << " enter how - or + arr " << std::endl;
    std::cin >> deff;

    if( deff < 0 && deff > -s)
    {
       int* arr1 = new int( s + deff);
       for(int i = 0; i < s + deff; ++i)
       {
            arr1[i] = arr[i];
       }
       delete[] arr;
       s = s + deff;
       arr = arr1;

       return;
    } else {
       int* arr1 = new int(s + deff); 
       for(int i = 0; i < s; ++i)
       {
            arr1[i] = arr[i];
       }
       std::cout << "enter to new arr value" << std::endl; 
       for(int i = s; i < s + deff; ++i)
       {
           std::cin >> arr1[i];
       }
       delete[] arr;
       arr = arr1;
       s = s + deff;
    }
    return;
}



int* aloc(int s)
{
    std::cout << " enter to arr value " << std::endl;
    int* arr = new int(s);
    for(int i = 0; i < s; ++i)
    {
        std::cin>> arr[i];
    }
    return arr;
}



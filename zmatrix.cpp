#include<iostream>
int** zmatr(int**, int, int);


int main(){
	
	int s = 0;
	int r = 0;
	std::cout << " Enter to arr size" << std::endl;
	std::cin >> r >> s;

	int** arr = new int*[r];
	
	for(int i = 0; i < r; ++i)
	{
		arr[i] = new int[s];
	}
	
/*
	for(int i = 0; i < r; ++i)
	{
		for(int j = 0; j < s; ++j)
		{
			std::cin >> arr[i][j];
		}

	}
*/ 
	arr =  zmatr(arr,  r,  s);


	for(int i = 0; i < r; ++i)
        {
                for(int j = 0; j < s; ++j)
                {
                        std::cout << arr[i][j] << ' ';
                }
		std::cout<<std::endl;
        }

	
	for(int i = 0; i < r; ++i){
		delete[] arr[i];
	}
	delete[] arr;
}


int** zmatr(int** arr, int r, int s)
{	
	for(int i = 0; i < r; ++i)
	{
		int a = s;
		for(int j = 0; j < s; ++j)
		{
			if(i % 2){
				 arr[i][r - i - 1] = a;

				--a;
			}
			arr[r - i - 1][i] = a;
			++a; 	
		}
	}
	return arr;
}

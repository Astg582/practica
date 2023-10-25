#include<iostream>
int foo(int** arr, int s);

int main(){
	int m = 0;
	int n = 0;
	std::cin >> m;
	std::cin >> n;
	int** arr = new int*[m];
		for(int i = 0; i < m; ++i)
		{
			arr[i] = new  int[n];
		}

	int a = 0;
	for(int i = 0; i < m; ++i){
		for(int j = 0; j < n; ++j)
		{
			arr[i][j] = a;
			++a;
			std::cout << arr[i][j] << ' ';
		}
		std::cout << std::endl;
	}

 	std::cout << foo(arr, m) << std::endl;


	for(int i = 0; i < m; ++i)
	{
		delete[] arr[i];
	}
delete[] arr;
}

int foo(int** arr, int s)
{
	int sum = 0;
	for(int i = 0; i < s; ++i)
	{
		sum += arr[i][i] + arr[i][(s-1) - i];
			
	}
	if(s & 1)
	{
		sum -= arr[s/2][s/2];
	}
return sum;
}

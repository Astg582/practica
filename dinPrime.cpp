#include<iostream>

bool prime(int);
int* pushP(int*, int&);


int main()
{
	int n;
	std::cout << " enter to array size " << std::endl;
	do{
		std::cin >> n;
	}while(n < 2 || n > 100);

	int* arr = new int[n];
       
	std::cout << "enter to value in arr" << std::endl;
	 for(int i = 0; i < n; ++i)
                {
			std::cin >> arr[i];
                }

	arr = pushP(arr, n);
	
	for(int i = 0; i < n; ++i)
	{
		std::cout << arr[i] << std::endl;
	}



	delete []arr;
	return 0;
}

int* pushP(int* arr, int& s)
{
	int affix = 0;

	do{

		std::cout << "enter how much you want to attach to the array " << std::endl;
		std::cin >> affix;

	}while(affix < 2 || affix > 100);	

	while(affix < 100)
	{
	if(prime(affix)){
		int* arrAf = new int(s + affix);
		for(int i = 0; i < s; ++i)
		{
			arrAf[i] = arr[i];
		}	
		for(int i = s; i < (s + affix); ++i)
		{
			std::cout << " enter to new value " << std::endl;
			std::cin >> arrAf[i];
		}

		delete []arr;
		

		s += affix;
		return arrAf;
	}
	++affix;
	}
	
	return nullptr;
}

bool prime(int a){
	for(int i = 2; i <= (a/2); ++i)
	{
	if(a % i == 0){
		return false;
	}

	}
	return true;
}

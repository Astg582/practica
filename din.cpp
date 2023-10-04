#include<iostream>

int* arrAdd (int*, int, int);
int* arrSub(int*, int, int);
//void manipul( int*, int&);


int main()
{
	int n = 0;

	std::cout << " enter to arr size " << std::endl;
	std::cin >> n;
	
	int* arr = new int[n];	

	std::cout << " enter to arr numbers " << std::endl;
        for(int i = 0; i < n; ++i)
        {
                std::cin >> arr[i];
        }
	

	int e = 0;
	do{
	std::cout << " enter to positiv number if you want to add to the array, or negativ number if you want to sub" << std::endl;
	std::cin >> e;


	if(e < 0 && e > (-n)){

		arr = (arrSub(arr, n, e));
		n = n + e;

	} 

	if( e > 0 && e < 100){

		arr = (arrAdd(arr, n, e));
		n = n + e;
	}

	} while (e != 100);
       
	
      
	std::cout << " this is now arr" << std::endl;

        for(int i = 0; i < n; ++i)
        {
                std::cout << arr[i] << std::endl;
        }


	delete []arr;
	return 0;	
}


int* arrSub(int* arr, int n, int subu)
{
	int* arrSu = new int[n + subu];
	for(int i = 0; i < (n + subu); ++i)
	{
		arrSu[i] = arr[i]; 
	}
	

	delete []arr;	
	return arrSu;

}


int* arrAdd(int* arr, int n, int adda) 
{
	int* arrAd = new int[n + adda];
	for(int i = 0; i < n; ++i) 
	{
		arrAd[i] = arr[i];
	}

	std::cout << "enter to new value" << std::endl;
	for(int i = n; i < (n + adda); ++i)
	{
		std::cin >> arrAd[i];
	}
	
        
	delete []arr;
	return arrAd;

}

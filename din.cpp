#include<iostream>

int* push (int*, int, int);
int* pop(int*, int, int);



int main()
{
	int n = 0;
	do{
	std::cout << " enter to arr size " << std::endl;
	std::cin >> n;
	}while( n > 100 || n < 2);
	
	int* arr = new int[n];	

	std::cout << " enter to arr numbers " << std::endl;
        for(int i = 0; i < n; ++i)
        {
                std::cin >> arr[i];
        }
	

	int e = 0;
	while (e < 100 )
	{
	std::cout << " enter to positiv number if you want to add to the array, or negativ number if you want to sub" << std::endl;
	std::cin >> e;


	if(e < 0 && e > (-n)){

		arr = (pop(arr, n, e));
		n = n + e;

	}else if(e < (-n) && e < 0){
		break;
	}



	if( e > 0 && e < 100){

		arr = (push(arr, n, e));
		n = n + e;
	}

	} 
       
	
      
	std::cout << " this is now arr" << std::endl;

        for(int i = 0; i < n; ++i)
        {
                std::cout << arr[i] << std::endl;
        }


	delete []arr;
	return 0;	
}


int* pop(int* arr, int n, int subu)
{
	int* arrSu = new int[n + subu];
	for(int i = 0; i < (n + subu); ++i)
	{
		arrSu[i] = arr[i]; 
	}
	

	delete []arr;	
	return arrSu;

}


int* push(int* arr, int n, int adda) 
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

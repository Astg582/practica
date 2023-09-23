#include<iostream>
#include<climits>
#include<math.h>

int foo(int* arr, int n);

int main(){
	int arr[40] = {0};
       	int n = 0;
	
	
	do{
		std::cout<<"enter to size arr"<<std::endl;
	       	std::cin>>n;
	}while(n < 2 || n > 39);	

	std::cout<<"enter to num in arr"<<std::endl;
	for(int* p = arr; p != arr + n; ++p){
		std::cin>>*p;
	}
	foo(arr, n);
}

int foo(int* arr, int n){
	int max = INT_MIN;
	int min = INT_MAX;
	int* pmax = arr;
	int* pmin = arr;
	double sum = 0;
	int count = 0;

	for(int* p = arr; p != arr + n; ++p){
		if(*p < min){
			min = *p;
			pmax = p;
		}
		if(*p > max){
			max = *p;
			pmax = p;
		}
	}

	if(pmax == pmin){
			std::cout<<"MAX == MIN"<<std::endl;
			return -1;
	}else if(pmax > pmin){
		for(int* p = pmin; p != pmax; ++p){
			sum += std::pow(*p, *p);
			++count;
		}
	}else if(pmin > pmax){
		 for(int* p = pmax; p != pmin; ++p){
                        sum += std::pow(*p, *p);
                        ++count;
                }

	}

	if(sum <= 0 || count == 0){
		std::cout<<"Not a number"<<std::endl;
		return -1;
	}else {
		std::cout<<" fine "<<(int) std::sqrt(sum / count) <<std::endl;
		return (int) std::sqrt(sum / count);
	}

}

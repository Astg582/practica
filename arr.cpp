#include<iostream>
int foo(int* arr, int s);


int main(){
	const int s = 10;
	int arr[s] = {0};


	std::cout<<"enter to arr"<<std::endl;

	for(int i = 0; i < s; ++i){
		std::cin>> arr[i];
	} 

	std::cout<<foo (arr, s) <<std::endl;


}

int foo(int* arr, int s){
	int tmp = *arr;
	int j = 0;
	int i = 0;
	while( i < s){
		if(!(tmp ^ *(arr + i))){
			++j;
			i = j;
			tmp = *(arr + i);
			++i;
			continue;
		}
	++i;
	}
	return tmp;
}

#include<iostream>
void print(int**, int);
void fill(int**, int);
void diogG(int**, int);
void diogS(int**, int);

int main(){
int s = 0;
std::cin >> s;
int** arr = new int*[s];
for(int i = 0; i < s; ++i){
	arr[i] = new int[s];
}
fill(arr, s);
print(arr, s);
diogS(arr, s);
std::cout << std::endl; 
print(arr, s);

for(int i = 0; i < s; ++i){
	delete[] arr[i];
}

delete[] arr;
}

void print(int** arr, int s){
for(int i = 0; i < s; ++i){
	for(int j = 0; j < s; ++j){
		std::cout << arr[i][j] << ' ';
	}  
    std::cout<<std::endl;
}
}

void fill(int** arr, int s)
{
int a = 10;
for(int i = 0; i < s; ++i){
	for(int j = 0; j < s; ++j){
		arr[i][j] = a++;
	}  
}
}

void diogG(int** arr, int s)
{

for(int i = 0; i < s; ++i){
	for(int j = i + 1; j < s; ++j){ 
		std::swap(arr[i][j], arr[j][i]);
	}
}
}

void diogS(int** arr, int s){
	for(int i = 0; i < s / 2; ++i){
		for(int j = 0; j < s; ++j){
			std::swap(arr[i][j], arr[s- i -1][s - j - 1]);
		}
	}
if(s % 2){
int mid = s / 2;
	for(int i = 0; i < mid; ++i){
		std::swap(arr[mid][i], arr[mid][s-i-1]);
	}
}
}

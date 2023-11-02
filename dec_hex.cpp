#include<iostream>

void hex(int num);

int main(){
unsigned int a = 0;
std::cout << "enter to number" << std::endl;
std::cin >> a;
hex(a);
}

void hex(int num){
	const int s = sizeof(int) * 4;
	char hx[s] = {};
	int i = s;
	for( ; i != -1; --i){
		if((num % 16) < 10){
			hx[i] = (num % 16) + 48; 
			num /= 16;		
		}
	if((num % 16) > 9){
		hx[i] = (num % 16) + 55;
		num /= 16;
	}
		
	}
	std::cout << hx << std::endl;
	return;
}

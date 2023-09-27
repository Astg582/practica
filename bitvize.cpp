#include<iostream>

int sum(int, int );
int mul(int, int);
int pow(int, int);

int main(){
	int a = 0;
	int b = 0;
	std::cin>>a;
	std::cin>>b;
	std::cout<<pow(a, b); 

}

int pow(int a, int b){
	int rec = 1;
	while( b ){
		rec = mul(rec, a);
		--b;
	}
	return rec;
}

int mul(int a, int b){
	int rec = 0;
	while (b){
		if(b & 1){
			rec = sum(rec, a);
		}
		a <<= 1;
		b >>= 1;
	}
	return rec;	
}




int sum(int a, int b){
	while ( b ){
	int c = a & b;
	a  = a ^ b;
	b = c << 1;
	}
	return a;
}

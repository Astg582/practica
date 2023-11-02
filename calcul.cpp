#include<iostream>

int gum(int a, int b){
	return a + b;
}

int han(int a, int b){
	return a - b;
}

int bazm(int a , int b){
	return a * b;
}

int baja(int a, int b){
	if( b == 0){
		return -1;
	}
	return a / b;
}

int foo(int a, int b, int(&foo1)(int, int)){
	return foo1(a, b);
}

int main(){
std::cout << " enter to 2 num " << std::endl;
char opp = '=';
int a = 0; 
int b = 0;
std::cin >> a;
std::cin >> opp;
std::cin >> b;

l1:
if(opp == '+'){
std::cout << foo(a, b, gum) << std::endl;
}else if(opp == '-'){
std::cout << foo(a, b, han) << std::endl;
}else if(opp == '*'){
std::cout << foo(a, b, bazm) << std::endl;
}else if(opp == '/'){
std::cout << foo(a, b, baja) << std::endl;
}else{
std::cout << "enter - , + , *  or / " << std::endl;
std::cin >> opp;
goto l1; 
}
}

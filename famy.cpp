#include<iostream>
#include<string>

struct car{
	std::string model;
	int price;
};

struct pers{
	std::string name;
	int age;
	int cars_count;
	car* cars;
};

struct family{
	pers* persons;
	int pers_count;
};

int main(){

	int c_fami = 0;
	std::cout << "count of family" << std::endl;
	std::cin >> c_fami;
	
	family* familys = new family[c_fami];


	for(int i = 0; i < c_fami; ++i)
	{
		std::cout << " enter to count of peopl in family " << std::endl;
		std::cin >>familys[i].pers_count;
		familys[i].persons = new pers[familys[i].pers_count];
		
		for(int j = 0; j < familys[i].pers_count; ++j)
			{	std::cout << "Enter to person name" << std::endl; 
				std::cin >> familys[i].persons[j].name;
				std::cout << " Enter to person age" << std::endl;
				std::cin >> familys[i].persons[j].age;
				std::cout << "Enter cats count" << std::endl;
				std::cin >> familys[i].persons[j].cars_count;
				familys[i].persons[j].cars = new car[familys[i].persons[j].cars_count];
				
				for(int c = 0; c < familys[i].persons[j].cars_count; ++c){
					std::cout << "enter to car model" << std::endl; 
					std::cin >> familys[i].persons[j].cars[c].model;
					std::cout << "enter to cars price" << std::endl;
					std::cin >> familys[i].persons[j].cars[c].price;
				} 
			} 
	
	}

	for(int i = 0; i < c_fami; ++i){
           for(int j = 0; j < familys[i].pers_count; ++i){
                     		if(familys[i].persons[j].age < 18){
                                delete[] familys[i].persons[j].cars;
				}
				if(familys[i].persons[j].age > 90){
				delete[] familys[i].persins[j];
				}                                
                        }            
                }       	
	for(int i = 0; i < c_fami; ++i){
             for(int j = 0; j < familys[i].pers_count; ++j){ 
				std::cout << familys[i].persons[j].name << " " << familys[i].persons[j].age << " ";                    
                                std::cout << familys[i].persons[j].cars << std::endl;
                                
                        }       
                        delete[] familys[i].persons;
                }       


/* familys */	for(int i = 0; i < c_fami; ++i){
/* peoples */		for(int j = 0; j < familys[i].pers_count; ++i){
/* cars */ 
				delete[] familys[i].persons[j].cars;
				
			}	
			delete[] familys[i].persons;
		}	
	delete[] familys;
}

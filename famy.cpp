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

struct nurHom{
        pers* persons;
        int count;
};


void Remove(family*, int);
void Print(family*, int);
nurHom* nursing(family*, int);
void take_away(family*, int);
family* add_fam(int);




int main(){

	int c_fami = 0;
	std::cout << "count of family" << std::endl;
	std::cin >> c_fami;
	family* familys = add_fam(c_fami);
	Print(familys, c_fami);
	Remove(familys, c_fami);



}

family* add_fam(int c_fami)
{	
	family* familys = new family[c_fami];

	for(int i = 0; i < c_fami; ++i)
	{
		std::cout << " enter to count of peopl in family " << std::endl;
		std::cin >>familys[i].pers_count;
		familys[i].persons = new pers[familys[i].pers_count];
		
		for(int j = 0; j < familys[i].pers_count; ++j)
			{	
				std::cout << "Enter to person name" << std::endl; 
				std::cin >> familys[i].persons[j].name;
				
				std::cout << " Enter to person age" << std::endl;
				std::cin >> familys[i].persons[j].age;
				
				std::cout << "Enter cats count" << std::endl;
				std::cin >> familys[i].persons[j].cars_count;
				
				familys[i].persons[j].cars = new car[familys[i].persons[j].cars_count];
				
				for(int c = 0; c < familys[i].persons[j].cars_count; ++c)
				{	
					std::cout << "enter to car model" << std::endl; 
					std::cin >> familys[i].persons[j].cars[c].model;
					
					std::cout << "enter to cars price" << std::endl;
					std::cin >> familys[i].persons[j].cars[c].price;
				} 
			} 
	
	}
	return familys;
}


void take_away(family* familys, int c_fami)
{
	int take = 0;
	for(int i = 0; i < c_fami; ++i){
           for(int j = 0; j < familys[i].pers_count; ++i){
                     		if(familys[i].persons[j].age < 18){
					++take;
                                delete[] familys[i].persons[j].cars;
				}

	   }
	 }
	std::cout << take << " minors werw deprived of their cars" << std::endl;
}


nurHom* nursing(family* familys, int c_fami)
{
	nurHom* Nhom = new nurHom[1];
	pers* persons = new pers[Nhom -> count];	
	Nhom -> count = 0;

	for(int i = 0; i < c_fami; ++i)
	{
           for(int j = 0; j < familys[i].pers_count; ++i)
	   {
				if(familys[i].persons[j].age > 90)
				{
					++Nhom -> count;			
				}
	  }

	   
	   
	 for(int j = 0; j < familys[i].pers_count; ++i)
	 {	
		if(familys[i].persons[j].age > 90)
		{ 
	       		  for(int c = 0; c < Nhom ->count; ++c){
				{
				
				Nhom -> persons[c] = familys[i].persons[j];

			         delete familys[i].persons;
				}			                              
         	  	}	 	            
                }       
	}
	}	
	std::cout << " thet are " << Nhom -> count << " people in the nursung hom" << std::endl;
	return Nhom;
}


void Print(family* familys, int c_fami)
{	
	for(int i = 0; i < c_fami; ++i)
	{
		std::cout << " family number : "<< i + 1 << std::endl;
             for(int j = 0; j < familys[i].pers_count; ++j)
	     {
		    std::cout << familys[i].persons[j].name << " " << familys[i].persons[j].age << " ";

		     		for(int c = 0; c < (familys[i].persons[j].cars_count); ++c)
				{
                                std::cout << familys[i].persons[j].cars[c].model << " " << familys[i].persons[j].cars[c].price << std::endl;
                                
                        	}       
                       
                }    
	}
}


void Remove(family* familys, int c_fami)
{

	for(int i = 0; i < c_fami; ++i)
	{
		for(int j = 0; j < familys[i].pers_count; ++i)
		{
 
			delete[] familys[i].persons[j].cars;
				
		}	
		delete[] familys[i].persons;
	}	
	delete[] familys;
}

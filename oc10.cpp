#include<iostream>
#include<string>


int main()
{
	struct student{
		std::string name;
		std::string last_name;
		int id;
		int rating;
	};

	int n = 0;
	std::cout << " enter mum of student" << std::endl;
	std::cin >> n;
	
	student* students = new student[n];
	
	std::cout << " enter to students name" << std::endl;
	
	for(int i = 0; i < n; ++i)
	{
		std::cout << "Studrnt Name" << std::endl;
		std::cin >> students[i].name;
		std::cout << " Student Last Name" << std::endl;
		std::cin >> students[i].last_name;
		std::cout << "Student Id " << std::endl;
		std::cin >> students[i].id;
		std::cout << " Student rating " << std::endl;
		std::cin >> students[i].rating; 
	}
	
	for(int i = 0; i < n; ++i)
	{
		if(students[i].rating < 20)
		{
std::cout << students[i].id << "  " << students[i].name << " " << students[i].last_name << " " << students[i].rating << std::endl;
		}
	}

	delete[] students;
}

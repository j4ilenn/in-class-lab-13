#include <iostream>
#include <string>
#include<vector>

void demoPrintingAListOfGrades()
{
	std::vector<int> ListOfGrades = { 100, 90, 80, 75, 66 };
	

	for (int locationInArray = 0; locationInArray < ListOfGrades.size(); locationInArray++)
	{
		std::cout << ListOfGrades[locationInArray] << "";
	}
	
	std::cout << std::endl;
}
std::vector <std::string> makeToDoList()
{
	std::vector<std::string> toDoList;

	std::string continueOrNot = "yes";


	while (continueOrNot == "no")
	{


		std::cout << "Enter a thing on your to do list:" << std::endl;

		std::string newtask;
		std::getline(std::cin, newtask);

		toDoList.push_back(newtask);

		std::cout << "Are you done adding tasks (yes/no)?" << std::endl;
		std::getline(std::cin, continueOrNot);
	}
	
	return toDoList;
}

	void printTheToDoList(std::vector<std::string> toDoList)
	{
		
		for (int index = 0; index < toDoList.size(); index++)
		{
			std::cout << "Item number " << index + 1 << " is: " << toDoList[index] << std::endl;
		}
	}

int main()
{
	//demoPrintingAListOfGrades();
   
	auto toDoList = makeToDoList();
	printTheToDoList(toDoList);

	
}
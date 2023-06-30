// Name: Anita Jalili-Kalhori
// SSID: 187-49-22
// Assignment #: 4
// Submission Date: 5/11/2023

#include<iostream>
#include<String>
#include "LinkedList.hpp"
#include "StackList.hpp"
#include "QueueList.hpp"

void post_fix_calculator()
{
	std::cout << "Input an expression in postfix notation\n";
	std::string input;
	std::getline(std::cin, input);

	if (input[0] != '=')
	{
		return post_fix_calculator();
	}
	else 
	{
		return;
	}

}

int main() {


	LinkedList<int>* L = new LinkedList<int>();
	L->insert_front(8);
	L->remove_front();

	post_fix_calculator();

	return 0;
}
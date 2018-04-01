#include "LinkedList.h"
#include "StringArray.h"
#include "BinaryTree.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

char* GenerateRandomString()
{
	int stringLength = rand() % 20 + 1;
	char* randomString = new char[stringLength + 1];
	for (int i = 0; i < stringLength; i++)
	{
		randomString[i] = rand() % 126 + 32;
	}
	randomString[stringLength] = '\0';
	return randomString;
}

int main()
{
	srand(time(NULL));

	LinkedList list(1);
	list.Add(2);
	list.Add(3);
	list.Remove(4);
	list.Print();
	list.Reverse();
	list.Print();


	StringArray array;
	array.Add("hi");
	array.Add("blah");
	array.Add("robyn");
	array.Add(GenerateRandomString());
	array.Add(GenerateRandomString());
	array.Add(GenerateRandomString());
	array.Print();

	std::cout << array.CheckDuplicate1() << std::endl;
	std::cout << array.CheckDuplicate2() << std::endl;
	std::cout << array.CheckDuplicate3() << std::endl;


	BinaryTree tree(4);
	tree.Add(2);
	tree.Add(5);
	tree.Add(8);
	tree.Add(1);
	tree.Add(3);
	tree.Add(9);

	std::cout << tree.GetDepth() << std::endl;

	tree.Remove(4);
	
	std::cout << tree.GetDepth() << std::endl;

	while (1);
	return 0;
}
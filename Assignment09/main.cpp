#include "CustomClass.h"
#include <iostream>

void PrintArray(char* array);
void ReverseArray(char* array, int sizeOfArray);

int main()
{
	char charArray[] = { 'r', 'o', 'b', 'y', 'n', '\0' };
	int charArraySize = sizeof(charArray) / sizeof(char);
	int intArray[10000];
	for (int i = 0; i <= 10000; i++)
	{
		intArray[i] = i;
	}

	CustomClass* customClass = new CustomClass();

	PrintArray(charArray);
	ReverseArray(charArray, charArraySize);

	while (1);
	return 0;
}

void PrintArray(char* array)
{
	char* currentChar = array;
	while (*currentChar != '\0')
	{
		std::cout << *currentChar << std::endl;
		currentChar++;
	}
}

void ReverseArray(char* array, int sizeOfArray)
{
	char* reversedArray = new char[sizeOfArray];
	reversedArray[sizeOfArray-1] = '\0';
	char* currentChar = array;
	int reversedArrayIndex = sizeOfArray - 2;

	while (*currentChar != '\0')
	{
		reversedArray[reversedArrayIndex] = *currentChar;
		reversedArrayIndex--;
		currentChar++;
	}
	PrintArray(reversedArray);
}
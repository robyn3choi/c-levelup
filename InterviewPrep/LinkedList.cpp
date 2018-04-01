#include "LinkedList.h"
#include <iostream>
#include <string>


LinkedList::LinkedList(int data)
{
	mHead = new Node(data);
}


LinkedList::~LinkedList()
{
	Node* curr = mHead;
	while (curr != nullptr)
	{
		Node* next = curr->Next;
		delete curr;
		curr = next;
	}
}

LinkedList::Node* LinkedList::GetHeadNode() const
{
	return mHead;
}

void LinkedList::Add(int data)
{
	Node* currentNode = mHead;
	while (currentNode->Next != nullptr)
	{
		currentNode = currentNode->Next;
	}
	currentNode->Next = new Node(data);
}

void LinkedList::Remove(int data)
{
	if (mHead->Data == data)
	{
		Node* temp = mHead->Next;
		delete mHead;
		mHead = temp;
		return;
	}

	Node* prevNode = mHead;
	Node* currNode = mHead->Next;

	while (currNode != nullptr && currNode->Data != data)
	{
		prevNode = currNode;
		currNode = currNode->Next;
	}

	if (currNode == nullptr)
	{
		std::cout << "LinkedList node with value: " + std::to_string(data) + " not found." << std::endl;
	}
	else
	{
		prevNode->Next = currNode->Next;
		delete currNode;
		currNode = nullptr;
	}
}

LinkedList::Node* LinkedList::Reverse()
{
	if (mHead->Next == nullptr)
	{
		std::cout << "Only one node in this linked list" << std::endl;
		return mHead;
	}

	Node* prev = mHead;
	Node* curr = mHead->Next;
	Node* next = mHead->Next->Next;

	mHead->Next = nullptr;

	while (next != nullptr)
	{
		curr->Next = prev;
		prev = curr;
		curr = next;
		next = next->Next;
	}
	curr->Next = prev;
	mHead = curr;
	return mHead;
}

void LinkedList::Print() const
{
	Node* currentNode = mHead;
	while (currentNode != nullptr)
	{
		std::cout << currentNode->Data << std::endl;
		currentNode = currentNode->Next;
	}
}

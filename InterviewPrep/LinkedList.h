#pragma once
class LinkedList
{
public:
	LinkedList(int data);
	~LinkedList();
	
	class Node
	{
	public:
		int Data;
		Node* Next = nullptr;

		Node(int data)
		{
			Data = data;
		}
	};

	Node* GetHeadNode() const;
	void Add(int data);
	void Remove(int data);
	Node* Reverse();
	void Print() const;

private:
	Node* mHead = nullptr;

};


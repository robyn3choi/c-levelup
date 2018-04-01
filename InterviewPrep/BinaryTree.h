#pragma once
class BinaryTree
{
public:
	BinaryTree(int data);
	~BinaryTree();

	class Node
	{
	public:
		int Data;
		Node* Left = nullptr;
		Node* Right = nullptr;

		Node(int data)
		{
			Data = data;
		}
	};

	Node* GetHeadNode() const;

	Node* Add(int data);
	Node* AddHelper(Node* node, int data);
	Node* Remove(int data);
	Node* RemoveHelper(Node* node, int data);
	int GetDepth() const;
	int GetDepthHelper(Node* node) const;
	void PrintRightSide() const;

private:
	Node* mHead = nullptr;
};


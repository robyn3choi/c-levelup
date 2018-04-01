#include "BinaryTree.h"
#include <algorithm>
#include <iostream>


BinaryTree::BinaryTree(int data)
{
	mHead = new Node(data);
}


BinaryTree::~BinaryTree()
{
}

BinaryTree::Node * BinaryTree::GetHeadNode() const
{
	return mHead;
}

BinaryTree::Node* BinaryTree::Add(int data)
{
	return AddHelper(mHead, data);
}

BinaryTree::Node* BinaryTree::AddHelper(Node* node, int data)
{
	if (node == nullptr)
	{
		return new Node(data);
	}
	if (data <= node->Data)
	{
		node->Left = AddHelper(node->Left, data);
	}
	else
	{
		node->Right = AddHelper(node->Right, data);
	}
	return node;
}

BinaryTree::Node* BinaryTree::Remove(int data)
{
	mHead = RemoveHelper(mHead, data);
	return mHead;
}

BinaryTree::Node* BinaryTree::RemoveHelper(Node* node, int data)
{
	// adapted from https://www.geeksforgeeks.org/binary-search-tree-set-2-delete/

	if (node == nullptr)
	{
		return node;
	}
	if (data < node->Data)
	{
		node->Left = RemoveHelper(node->Left, data);
	}
	else if (data > node->Data)
	{
		node->Right = RemoveHelper(node->Right, data);
	}
	else
	{
		if (node->Left == nullptr)
		{
			Node* temp = node->Right;
			delete node;
			return temp;
		}
		else if (node->Right == nullptr)
		{
			Node* temp = node->Left;
			delete node;
			return temp;
		}

		Node* minNode = node->Right;
		while (minNode->Left != nullptr)
		{
			minNode = minNode->Left;
		}

		node->Data = minNode->Data;
		node->Right = RemoveHelper(node->Right, minNode->Data);
	}
	return node;
}

int BinaryTree::GetDepth() const
{
	return GetDepthHelper(mHead);
}

int BinaryTree::GetDepthHelper(Node * node) const
{
	if (node == nullptr)
	{
		return 0;
	}
	else
	{
		return 1 + std::max(GetDepthHelper(node->Left), GetDepthHelper(node->Right));
	}
}

void BinaryTree::PrintRightSide() const
{
	Node* curr = mHead;
	while (curr != nullptr)
	{
		std::cout << curr->Data << " ";
		curr = curr->Right;
	}
}

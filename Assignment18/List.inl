#include <iostream>
#include "List.h"
namespace Storage
{
	template<class T>
	List<T>::List()
		: mCount(0)
		, pHead(nullptr)
	{
		// Empty
	}

	// ----------------------------------------------------------------------------------------------------

	template<class T>
	List<T>::~List()
	{
		while (pHead != nullptr)
		{
			Node<T>* pCurrent = pHead;
			pHead = pHead->pNext;

			delete pCurrent;
			pCurrent = nullptr;
		}
	}

	// ----------------------------------------------------------------------------------------------------

	template<class T>
	inline List<T>::List(const List & other)
	{
		CreateNode(nullptr, other.pHead->Item);
		Node<T>* curr = pHead;

		unsigned int counter = 1;
		while (counter < other.mCount)
		{
			CreateNode(curr, other[counter]);
			curr = curr->pNext;
			counter++;
		}
	}

	// ----------------------------------------------------------------------------------------------------

	template<class T>
	inline List<T>::List(List && other)
	{
		pHead = other.pHead;
		mCount = other.mCount;

		other.pHead = nullptr;
		other.mCount = 0;
	}

	// ----------------------------------------------------------------------------------------------------

	template<class T>
	List<T> & List<T>::operator=(const List<T> & rhs)
	{
		if (this != &rhs)
		{
			Clear();
			CreateNode(nullptr, other.pHead->Item);
			Node<T>* curr = pHead;

			unsigned int counter = 1;
			while (counter < other.mCount)
			{
				CreateNode(curr, other[counter]);
				curr = curr->pNext;
				counter++;
			}
		}

		return *this;
	}

	// ----------------------------------------------------------------------------------------------------

	template<class T>
	inline List<T>& List<T>::operator=(const List<T> && rhs)
	{
		if (this != &rhs)
		{
			Clear();
			pHead = other.pHead;
			mCount = other.mCount;

			other.pHead = nullptr;
			other.mCount = 0;
		}

		return *this;
	}

	// ----------------------------------------------------------------------------------------------------

	template<class T>
	void List<T>::Add(const T& item)
	{
		Node<T>* pEnd = pHead;
		Node<T>* pCurrent = pHead;

		while (pCurrent != nullptr)
		{
			pEnd = pCurrent;
			pCurrent = pCurrent->pNext;
		}

		CreateNode(pEnd, item);
	}

	// ----------------------------------------------------------------------------------------------------
	
	template<class T>
	inline void List<T>::Add(T && item)
	{
		Node<T>* pEnd = pHead;
		Node<T>* pCurrent = pHead;

		while (pCurrent != nullptr)
		{
			pEnd = pCurrent;
			pCurrent = pCurrent->pNext;
		}

		CreateNode(pEnd, item);
	}

	// ----------------------------------------------------------------------------------------------------

	template<class T>
	void List<T>::Remove(const T& item)
	{
		Node<T>* pCurrent = pHead;
		Node<T>* pPrevious = nullptr;

		while (pCurrent != nullptr)
		{
			if (pCurrent->Item == item)
			{
				RemoveNode(pCurrent, pPrevious);
				break;
			}

			pPrevious = pCurrent;
			pCurrent = pCurrent->pNext;
		}
	}

	// ----------------------------------------------------------------------------------------------------

	template<class T>
	inline void List<T>::Remove(T && item)
	{
		Node<T>* pCurrent = pHead;
		Node<T>* pPrevious = nullptr;

		while (pCurrent != nullptr)
		{
			if (pCurrent->Item == item)
			{
				RemoveNode(pCurrent, pPrevious);
				break;
			}

			pPrevious = pCurrent;
			pCurrent = pCurrent->pNext;
		}
	}

	// ----------------------------------------------------------------------------------------------------

	template<class T>
	void List<T>::RemoveAt(int index)
	{
		Node<T>* pCurrent = pHead;
		Node<T>* pPrevious = nullptr;

		int currentIndex = 0;
		while (pCurrent != nullptr)
		{
			if (currentIndex == index)
			{
				RemoveNode(pCurrent, pPrevious);
				break;
			}

			pPrevious = pCurrent;
			pCurrent = pCurrent->pNext;
		}
	}

	// ----------------------------------------------------------------------------------------------------

	template<class T>
	void List<T>::Clear()
	{
		while (pHead != nullptr)
		{
			Node<T>* pCurrent = pHead;
			pHead = pHead->pNext;
			delete pCurrent;
		}
	}

	// ----------------------------------------------------------------------------------------------------

	template<class T>
	const T& List<T>::operator[](int index) const
	{
		Node<T>* pCurrent = pHead;
		for (int i = 0; i < index; ++i)
		{
			pCurrent = pCurrent->pNext;
		}

		return pCurrent->Item;
	}

	//template<class T>
	//const T& List<T>::operator[](int index) const
	//{
	//	Node<T>* pCurrent = pHead;
	//	for (int i = 0; i < index; ++i)
	//	{
	//		pCurrent = pCurrent->pNext;
	//	}

	//	return pCurrent->Item;
	//}


	// ----------------------------------------------------------------------------------------------------

	template<class T>
	void List<T>::CreateNode(Node<T>* pEnd, T item)
	{
		Node<T>* pNewNode = new Node<T>(std::move(item), nullptr);

		if (pEnd != nullptr)
		{
			pEnd->pNext = pNewNode;
		}
		else
		{
			pHead = pNewNode;
		}
		++mCount;
	}

	// ----------------------------------------------------------------------------------------------------

	template<class T>
	void List<T>::RemoveNode(Node<T>* pNode, Node<T>* pPrevious)
	{
		if (pPrevious == nullptr)
		{
			pHead = pNode->pNext;
		}
		else
		{
			pPrevious->pNext = pNode->pNext;
		}

		delete pNode;
		pNode = nullptr;

		--mCount;
	}
}
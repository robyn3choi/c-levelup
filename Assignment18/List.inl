#include "List.h"
#include <iostream>
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
		mCount = other.mCount;
		for (int i = 0; i < mCount; ++i)
		{
			CreateNode(other[i].pNext, other[i].Item);
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
	inline List<T> & List<T>::operator=(const List & rhs)
	{
		if (this != &rhs)
		{
			Clear();
			mCount = rhs.mCount;
			for (int i = 0; i < mCount; ++i)
			{
				CreateNode(rhs[i].pNext, rhs[i].Item);
			}
		}

		return *this;
	}

	// ----------------------------------------------------------------------------------------------------

	template<class T>
	inline List<T>& List<T>::operator=(const List && rhs)
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
	T& List<T>::operator[](int index)
	{
		Node<T>* pCurrent = pHead;
		for (int i = 0; i < index; ++i)
		{
			pCurrent = pCurrent->pNext;
		}

		return pCurrent->Item;
	}

	// ----------------------------------------------------------------------------------------------------

	template<class T>
	void List<T>::CreateNode(Node<T>* pEnd, const T& item)
	{
		Node<T>* pNewNode = new Node<T>(item, nullptr);

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
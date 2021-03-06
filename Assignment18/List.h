#pragma once

namespace Storage
{
	template<class T>
	class List
	{
	public:
		List();
		~List();

		List(const List& other);
		List(List&& other);

		List<T>& operator=(const List<T>& rhs);
		List<T>& operator=(const List<T>&& rhs);

		unsigned int Count() const { return mCount; }

		void Add(const T& item);
		void Add(T&& item);
		void Remove(const T& item);
		void Remove(T&& item);
		void RemoveAt(int index);
		void Clear();

		//T& operator[](int index);
		const T& operator[](int index) const;

	private:
		template<class T>
		class Node
		{
		public:
			Node(T item, Node* next)
				: Item(std::move(item))
				, pNext(next)
			{
				// Empty
			}

			T Item;
			Node* pNext;
		};

		Node<T>* pHead;
		unsigned int mCount;

		// should this have the const ref and rvalue overloads instead?
		void CreateNode(Node<T>* pEnd, T item);
		//void CreateNode(Node<T>* pEnd, const T& item);
		void RemoveNode(Node<T>* pNode, Node<T>* pPrevious);
	};
}

#include "List.inl"
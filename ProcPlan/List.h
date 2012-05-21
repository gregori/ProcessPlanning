#pragma once
#include "stdafx.h"

#ifndef NULL
#define NULL 0
#endif


namespace ProcessPlanning
{
	template <class TL>
	class List
	{
	// List template class
	public:
		template <class TN>
		class Node
		{
		private:
			TN *data;
			Node<TN> *next;
			Node<TN> *prev;

		public:
			Node()
			{
				data = NULL;
				next = NULL;
				prev = NULL;
			}

			~Node()
			{
				data = NULL;
				next = NULL;
				prev = NULL;
			}

			Node<TN>* getNext() const
			{
				return next;
			}

			Node<TN>* getPrev() const
			{
				return prev;
			}

			TN* getData() const
			{
				return data;
			}

			void setNext(Node<TN> *n)
			{
				next = n;
			}

			void setPrev(Node<TN> *p)
			{
				prev = p;
			}

			void setData(TN *d)
			{
				if (d != NULL)
					data = d;
				else
					throw "Data must not be NULL!";
			}
		};
	
	private:
		Node<TL> *first;
		Node<TL> *last;
		int size;

	public:
		List(void)
		{
			first = NULL;
			last = NULL;
			size = 0;
		} // End of List

		~List(void)
		{
			clearList();
		} // End of ~List

		void insert(TL *data)
		{
			if (data == NULL)
				throw "Data cannot be NULL!";

			Node<TL> *newNode = NULL;
			newNode = new Node<TL>;
			newNode->setData(data);

			if (isEmpty())
			{
				first = newNode;  // List is empty
				last = newNode;   // First and last point to the only node
			}
			else
			{  // if it's not empty - node goes to the end
				last->setNext(newNode);
				last = newNode;
			}

			size++;
		} // End of add

		Node<TL>* getFirst(void) const
		{
			return first;
		} // End of getFirst

		Node<TL>* getLast(void) const
		{
			return last;
		} // End of getLast

		TL* get(const int index) const
		{
			int i;
			Node<TL>* aux = first;

			if (index < size && index >= 0)
				for (i = 0; i < index; i++)
					aux = aux->getNext();
			else
				throw "Index out of Bounds!";

			return aux->getData();
		}

		bool isEmpty(void) const
		{
			return first == NULL;
		} // End of isEmpty

		void clearList(void)
		{
			Node<TL> *aux, *aux2;
			aux = aux2 = NULL;

			aux = first;
			while (aux->getNext() != NULL)
			{
				aux2 = aux;
				aux = aux->getNext();
				delete(aux2);
			}

			first = last = NULL;
			delete(aux);
		} // End of clearList

		int getSize(void) const
		{
			return size;
		}

	};
}
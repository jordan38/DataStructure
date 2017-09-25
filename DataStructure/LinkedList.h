#pragma once

#include "Node.h"


class LinkedList
{
	public:
		LinkedList();
		void InsertAtTheBeginning(int data);
		void Insert(int data);
		void Print();
		~LinkedList();

	private:
		Node *head;

};


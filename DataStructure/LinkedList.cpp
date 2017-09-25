#include "stdafx.h"
#include "LinkedList.h"
#include "Node.h"
#include "iostream"


LinkedList::LinkedList()
{
	head = NULL;
}

void LinkedList::InsertAtTheBeginning(int data)
{
	//Node* temp = (Node*)malloc(sizeof(Node));
	Node* node = new Node();
	node->data = data;
	node->next = head;
	head = node;
}

void LinkedList::Insert(int data)
{
	Node *add = new Node();
	add->data = data;
	add->next = NULL;

	if (head != NULL) {
		Node *temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = add;
	}
	else {
		head = add;
	}
}

void LinkedList::Print()
{
	Node* temp = head;
	std::cout << "List : ";
	while (temp != NULL)
	{
		std::cout << temp->data << " ";
		temp = temp->next;
	}
	std::cout << std::endl;
}


LinkedList::~LinkedList()
{
}

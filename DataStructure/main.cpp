// DataStructure.cpp : Définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include "LinkedList.h"


int main()
{
	LinkedList list;
	list.Insert(2);
	list.Insert(4);
	list.Insert(6);
	list.Insert(8);
	list.InsertAtTheBeginning(15);
	list.Print();

    return 0;
}


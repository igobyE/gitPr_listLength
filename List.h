#ifndef LIST_H
#define LIST_H

#include "Node.h"

template <typename type>
class List {
private:
	int size;
	Node<type>* pHead;
	// Node* pHead;

public:
	List ();
	~List ();
	void insert (type i);
	void print ();
	int getSize ();
	// type* removeF ();
	// type* removeL ();

};

#include "List.cpp"

#endif
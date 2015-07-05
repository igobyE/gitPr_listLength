#include <stddef.h>
#include <iostream>

template <typename type>
List<type>::List () : pHead (NULL), size (0) {}

template <typename type>
List<type>::~List () {

}

template <typename type>
void List<type>::insert (type item) {
	if (pHead == NULL) {
		pHead = new Node<type> (item);
	}
	else {
		Node<type>* pTmp = pHead;
		while (pTmp->pN != NULL) {
			pTmp = pTmp->pN;
		}

		pTmp->pN = new Node<type> (item);
	}
	size += 1;
}

template <typename type>
void List<type>::print () {
	Node<type>* pTmp = pHead;
	while (pTmp != NULL) {
		std::cout << pTmp->item << ' ';
		pTmp = pTmp->pN;
	}
	std::cout << "\n";
}

template <typename type>
int List<type>::getSize () {
	return size;
}
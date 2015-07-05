#ifndef NODE_H
#define NODE_H

template <typename typeN>
struct  Node {
	typeN item;
	Node *pN;

	Node (typeN i) : item (i), pN (NULL) { }
};

#endif
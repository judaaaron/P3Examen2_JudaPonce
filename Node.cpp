#include "Node.h"

Node::Node()
{
}

void Node:: setNext(Node* nodo){
	this->nodo = nodo;
}
		
Node* Node:: getNext(){
	return this->nodo;
}

Node::~Node()
{
}

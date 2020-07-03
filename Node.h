#ifndef NODE_H
#define NODE_H



class Node
{
	public:
		Node();
		void setNext(Node*);
		Node* getNext();
		~Node();
	protected:
		Node* nodo;
};

#endif

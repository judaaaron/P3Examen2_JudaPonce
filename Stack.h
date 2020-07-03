#ifndef STACK_H
#define STACK_H
#include"Node.h"

class Stack
{
	public:
		Stack();
		Stack(Node*);
		Node* pop();
		Node* top();
		void push(Node*);
		void delete_stack(Node*);
		~Stack();
	protected:
		Node* head;
};

#endif





        

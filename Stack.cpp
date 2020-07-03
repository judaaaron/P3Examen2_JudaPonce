#include "Stack.h"

Stack::Stack(){
    head = nullptr;
}
Stack::Stack(Node* _head){
    head = _head;
}
Node* Stack:: pop(){
    Node* temp_head = head;
    head = head->getNext();
    return temp_head;
}
Node* Stack:: top(){
    return head;
}
void Stack:: push(Node* _node){
    _node->setNext(head);
    head = _node;
}

void Stack:: delete_stack(Node* _node){
	if (_node->getNext() != nullptr){
    	delete_stack(_node->getNext());
    }            
    	delete _node;
}
Stack::~Stack(){
    delete_stack(head);
}



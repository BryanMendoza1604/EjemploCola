#include "node.h"

node::node(int value, node* next)
: value(value), next(next){

}

node::~node() {

}

int node::getValue() {
	return value;
}

node* node::getNext() {
	return next;
}

void node::setValue(int value) {
	this->value = value;
}

void node::setNext(node* next) {
	this->next = next;
}

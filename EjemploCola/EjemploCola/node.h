#pragma once

class node
{
public:
	node(int, node*);
	~node();
	int getValue();
	node* getNext();
	void setValue(int);
	void setNext(node*);

private:
	int value;
	node* next;

};


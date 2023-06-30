// add as a friend to LinkedList or add Node < NodeType >* Head () to LinkedList

#ifndef _STACKLIST_HPP
#define _STACKLIST_HPP

#include "LinkedList.hpp"

template < class NodeType >
class StackList {
public:
	StackList();
	void push(NodeType data);
	void pop();
	NodeType top();
	bool empty();
	int size();
private:
	LinkedList < NodeType > list;
	int n; // stack counter
};


template < class NodeType >
StackList <NodeType>::StackList()
{

}

template < class NodeType >
void StackList <NodeType>::push(NodeType Data)
{

}

template < class NodeType >
void StackList <NodeType>::pop()
{

}

template < class NodeType >
NodeType StackList <NodeType>::top()
{

}

template < class NodeType >
bool StackList <NodeType>::empty()
{
	return true;
}

template < class NodeType >
int StackList <NodeType>::size()
{
	return 1;
}

#endif
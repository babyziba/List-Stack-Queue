
#ifndef _QUELIST_HPP
#define _QUELIST_HPP

#include "LinkedList.hpp"

template < class NodeType >
class QueueList {
public:
	QueueList();
	void enqueue(NodeType data);
	void dequeue();
	NodeType front();
	bool empty();
private:
	LinkedList < NodeType > list;
	int n; // element counter
};

template < class NodeType >
QueueList <NodeType>::QueueList()
{

}

template < class NodeType >
void QueueList <NodeType>::enqueue(NodeType Data)
{

}

template < class NodeType >
void QueueList <NodeType>::dequeue()
{

}

template < class NodeType >
NodeType QueueList <NodeType>::front()
{

}

template < class NodeType >
bool QueueList <NodeType>::empty()
{
	return true;
}

#endif
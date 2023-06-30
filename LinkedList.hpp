


#ifndef _LINKEDLIST_HPP
#define _LINKEDLIST_HPP


template < class NodeType >
struct Node {
	NodeType data;
	Node < NodeType >* next = nullptr;
	Node < NodeType >* prev = nullptr;
};


template < class NodeType >
class LinkedList { // friend declarations not shown
public: // or use a getter : Node < NodeType >* Head ();
	LinkedList(); // construct an empty list
	// copy constructor and assignment
	LinkedList < NodeType >(const LinkedList < NodeType >& that);
	LinkedList < NodeType >& operator =(const LinkedList < NodeType >& that);
	virtual ~LinkedList(); // delete all nodes
	int size(); // return node count
	bool empty(); // check if empty
	void insert_front(const NodeType& item);
	NodeType remove_front();
	void insert_back(const NodeType& item);
	NodeType remove_back();
	void clear(); // remove all nodes
private:
	Node < NodeType >* head = nullptr;
	// optional tail , useful for back operations
	Node < NodeType >* tail = nullptr;
	int n = 0; // node counter
};

template < class NodeType >
LinkedList<NodeType>::LinkedList(): head(nullptr), tail(nullptr), n(0) {}


template < class NodeType >
LinkedList< NodeType >::LinkedList(const LinkedList < NodeType >& that)
{

}

/*
template < class NodeType >
LinkedList < NodeType >::LinkedList& operator =(const LinkedList < NodeType >& that)
{

}

*/

template < class NodeType >
LinkedList<NodeType>::~LinkedList()
{
	
}


template < class NodeType >
int LinkedList< NodeType >::size()
{
	return n;
}

template < class NodeType >
bool LinkedList<NodeType>::empty()
{
	return n == 0;
}

template < class NodeType >
void LinkedList<NodeType>::insert_front(const NodeType& item)
{

	Node<NodeType>* nd = new Node<NodeType>;
	nd->data = item;
	n++;

	if (head)
	{
		nd->next = head->next;
		head = nd;
		tail = nd;
	}
	else
	{
		head = nd;
	}
}

template < class NodeType >
NodeType LinkedList<NodeType>::remove_front()
{
	if (empty())
	{
		return NULL;
	}

	else
	{
		if (n == 1)
		{
			Node<NodeType>* nd = head;
			head = nullptr;
			tail = nullptr;
			NodeType k = nd->data;
			delete nd;
			n--;
			return k;
		}
		else
		{
			Node<NodeType>* nd = head;
			head = head->next;
			NodeType k = nd->data;
			delete nd;
			n--;
			return k;
		}
	}

}

template < class NodeType >
void LinkedList<NodeType>::insert_back(const NodeType& item)
{
	Node<NodeType>* nd = new Node<NodeType>;
	nd->data = item;
	n++;

	if (tail)
	{
		nd->prev = tail->prev;
		tail = nd;
	}
	else
	{
		tail = nd;
	}
}

template < class NodeType >
NodeType LinkedList<NodeType>::remove_back()
{
	if (empty())
	{
		return NULL;
	}

	else
	{
		if (n == 1)
		{
			Node<NodeType>* nd = tail;
			head = nullptr;
			tail = nullptr;
			NodeType k = nd->data;
			delete nd;
			n--;
			return k;
		}
		else
		{
			Node<NodeType>* nd = tail;
			tail = tail->next;
			NodeType k = nd->data;
			delete nd;
			n--;
			return k;
		}
	}
}

template < class NodeType >
void LinkedList<NodeType>::clear()
{

}

#endif
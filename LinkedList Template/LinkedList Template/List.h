#pragma once
#include "node.h"
#include <iostream>
#include <string>
using namespace std;
template <typename T>
class List
{
	template <typename T>
	friend ostream& operator<<(ostream&, List<T>);
	
public:
	Node<T> *head;
	Node<T> *tail;
public:

	List();
	~List();
	
	void setHead(Node<T>* head);
	Node<T>* getHead();

	
	void setTail(Node<T>* tail);
	Node<T>* getTail();

	
	//add to end (create new tail)
	void append(Node<T>* newNode);
	void append(T val);
	
	//add to beginning (create new head)
	void prepend(Node<T>* newNode);
	void prepend(T val);


	void deleteNode(Node<T>* Node);
	void print();

	
	int NodeCount();
	void operator=(List right);
	bool operator==(List right);
	bool operator!=(List right);
	List operator++();
	List operator++(int);
	List operator-(List right);
	List operator+(List right);
};

#pragma once
#include "List.h"

using namespace std;

template <typename T>
List<T>::List<T>()
{
	this->head = NULL;
	this->tail = NULL;
}

template <typename T>
List<T>::~List<T>()
{
}
template <typename T>
void List<T>::setHead(Node<T>* head)
{
	this->head = head;
}
template <typename T>
Node<T>* List<T>::getHead()
{
	return this->head;
}
template <typename T>
void List<T>::setTail(Node<T>* tail)
{
	this->tail = tail;
}
template <typename T>
Node<T>* List<T>::getTail()
{
	return this->tail;
}
template <typename T>
void List<T>::append(Node<T>* newNode)
{
	if (this->getHead() == NULL) {

		this->setHead(newNode);
		newNode->setNext(NULL);
		newNode->setPrev(NULL);
		this->setTail(newNode);
	}
	else {

		newNode->setPrev(this->getTail());
		this->getTail()->setNext(newNode);
		newNode->setNext(NULL);
		this->setTail(newNode);


	}

}
template <typename T>
void List<T>::append(T val)
{
	Node<T> * newNode;
	newNode = new Node<T>();
	newNode->data = val;
	if (this->getHead() == NULL) {

		this->setHead(newNode);
		newNode->setNext(NULL);
		newNode->setPrev(NULL);
		//this->setTail(newNode<T>);
		this->tail = this->head;
	}
	else {

		newNode->setPrev(this->getTail());
		this->getTail()->setNext(newNode);
		newNode->setNext(NULL);
		this->setTail(newNode);


	}
}
template <typename T>
void List<T>::prepend(Node<T>* newNode)
{

	if (this->getHead() == 0)
	{
		//the list is empty
		this->setHead(newNode);
		this->getHead()->setNext(0);
		this->getHead()->setPrev(0);
		//this->setTail(this->getHead);
		this->tail = this->head;
	}
	else
	{

		//the list is Not empty
		newNode->setNext(this->getHead());
		this->getHead()->setPrev(newNode);
		newNode->setPrev(0);
		this->setHead(newNode);
	}

}
template <typename T>
void List<T>::prepend(T val)
{
	Node<T> * newNode;
	newNode = new Node<T>();
	newNode->data = val;
	if (this->getHead() == 0)
	{
		//the list is empty
		this->setHead(newNode);
		this->getHead()->setNext(0);
		this->getHead()->setPrev(0);
		this->tail = this->head;
	}
	else
	{
		//the list is Not empty
		newNode->setNext(this->getHead());
		this->getHead()->setPrev(newNode);
		newNode->setPrev(0);
		this->setHead(newNode);
	}
}
template <typename T>
void List<T>::deleteNode(Node<T>* Node)
{
	//delete tail
	if (Node->getNext() == NULL) {
		//hast one Node<T>
		if (Node->getPrev() == NULL)
		{
			this->setHead(NULL);
			this->setTail(NULL);
		}
		else
		{
			Node->getPrev()->setNext(NULL);
			this->setTail(Node->getPrev());
			Node->~Node<T>();
		}
	}
	//delete head
	else if (Node->getPrev() == NULL) {
		Node->getNext()->setPrev(NULL);
		this->setHead(Node->getNext());
		Node->~Node<T>();

	}
	//delete body
	else {
		Node->getPrev()->setNext(Node->getNext());
		Node->getNext()->setPrev(Node->getPrev());
		Node->~Node<T>();
	}
}
template <typename T>
void List<T>::print()
{

	Node<T> * currentNode;
	currentNode = this->getHead();
	while (currentNode != 0)
	{
		cout << currentNode->data << " ";
		currentNode = currentNode->getNext();
	}
	printf("\n");
}

template <typename T>
int List<T>::NodeCount()
{
	Node<T>* current = this->getHead();
	int i = 0;
	while (current) {
		i++;
		current = current->getNext();
	}
	return i;
}
template <typename T>
void List<T>::operator=(List<T> right)
{
	Node<T>* rTmp;

	rTmp = right.getHead();

	while (rTmp) {

		this->append(rTmp->getData());
		rTmp = rTmp->getNext();
	}
	right.~List<T>();

}
template <typename T>
bool List<T>::operator==(List<T> right)
{
	if (this->NodeCount() != right.NodeCount())
		return false;
	Node<T>*lTmp = this->getHead();
	Node<T>* rTmp = right.getHead();
	while (lTmp) {

		if (lTmp->getData() != rTmp->getData()) {
			return false;
		}
		lTmp = lTmp->getNext();
		rTmp = rTmp->getNext();

	}
	return true;

}
template <typename T>
bool List<T>::operator!=(List<T> right)
{
	if (this == &right)
		return false;
	else
		return true;
}
template <typename T>
List<T> List<T>::operator++()
{

	this->append(0);
	return *this;
}
template <typename T>
List<T> List<T>::operator++(int)
{

	this->append(0);
	return *this;
}
template <typename T>
List<T> List<T>::operator-(List<T> right)
{
	List<T> rList;
	rList = right;
	Node<T>* r = rList.getHead();
	Node<T>* l = head;
	while (r) {
		while (l) {
			if (r->data == l->data) {
				rList.deleteNode(r);
				l = l->getNext();
			}
			else
				l = l->getNext();

		}
		r = r->next;
		l = head;
	}
	return rList;
}

template <typename T>
List<T> List<T>::operator+(List<T> right)
{
	List<T> result;
	result = *this;
	Node<T> *current = right.getHead();
	while (current) {
		result.append(current->data);
		current = current->getNext();
	}
	return result;
}
template <typename T>
ostream& operator<<(ostream &output, List<T> list)
{
	List<T> *currentList;
	currentList = &list;
	Node<T> *currentNode;
	currentNode = currentList->getHead();
	while (currentNode != 0)
	{
		output << currentNode->data << " ";
		currentNode = currentNode->getNext();
	}


	return output;
}


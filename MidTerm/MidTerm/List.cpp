#pragma once
#include "List.h"

using namespace std;


List::List()
{
	this->head = NULL;
	this->tail = NULL;
}


List::~List()
{
}

void List::setHead(Node* head)
{
	this->head = head;
}

Node* List::getHead()
{
	return this->head;
}

void List::setTail(Node* tail)
{
	this->tail = tail;
}
Node* List::getTail()
{
	return this->tail;
}

void List::append(Node* newNode)
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

void List::append(Car *val)
{
	Node * newNode;
	newNode = new Node();
	newNode->data = val;
	if (this->getHead() == NULL) {

		this->setHead(newNode);
		newNode->setNext(NULL);
		newNode->setPrev(NULL);
		//this->setTail(newNode);
		this->tail = this->head;
	}
	else {

		newNode->setPrev(this->getTail());
		this->getTail()->setNext(newNode);
		newNode->setNext(NULL);
		this->setTail(newNode);


	}
}

void List::prepend(Node* newNode)
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

void List::prepend(Car *val)
{
	Node * newNode;
	newNode = new Node();
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

void List::deleteNode(Node* node)
{
	//delete tail
	if (node->getNext() == NULL) {
		//hast one node
		if (node->getPrev() == NULL)
		{
			this->setHead(NULL);
			this->setTail(NULL);
		}
		else
		{
			node->getPrev()->setNext(NULL);
			this->setTail(node->getPrev());
			node->~Node();
		}
	}
	//delete head
	else if (node->getPrev() == NULL) {
		node->getNext()->setPrev(NULL);
		this->setHead(node->getNext());
		node->~Node();

	}
	//delete body
	else {
		node->getPrev()->setNext(node->getNext());
		node->getNext()->setPrev(node->getPrev());
		node->~Node();
	}
}

void List::print()
{

	Node * currentNode;
	currentNode = this->getHead();
	while (currentNode != 0)
	{
		cout << currentNode->data << " ";
		currentNode = currentNode->getNext();
	}
	printf("\n");
}


Node* List::atIndex(int i)
{
	Node* current;
	current = this->head;
	while (i > 0) {
		current = current->getNext();
		i--;
	}
	return current;
}

int List::nodeCount()
{
	Node* current = this->getHead();
	int i = 0;
	while (current) {
		i++;
		current = current->getNext();
	}
	return i;
}

void List::operator=(List right)
{
	Node* rTmp;

	rTmp = right.getHead();

	while (rTmp) {

		this->append(rTmp->getData());
		rTmp = rTmp->getNext();
	}
	right.~List();

}

bool List::operator==(List right)
{
	if (this->nodeCount() != right.nodeCount())
		return false;
	Node* lTmp = this->getHead();
	Node* rTmp = right.getHead();
	while (lTmp) {

		if (lTmp->getData() != rTmp->getData()) {
			return false;
		}
		lTmp = lTmp->getNext();
		rTmp = rTmp->getNext();

	}
	return true;

}

bool List::operator!=(List right)
{
	if (this == &right)
		return false;
	else
		return true;
}



List List::operator-(List right)
{
	List rList;
	rList = right;
	Node* r = rList.getHead();
	Node* l = head;
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


List List::operator+(List right)
{
	List result;
	result = *this;
	Node *current = right.getHead();
	while (current) {
		result.append(current->data);
		current = current->getNext();
	}
	return result;
}

ostream& operator<<(ostream &output, List list)
{
	List *currentList;
	currentList = &list;
	Node *currentNode;
	currentNode = currentList->getHead();
	int i = 1;
	while (currentNode != 0)
	{
		output << i << "-" << currentNode->data->getVIN() <<" "<<
			currentNode->data->getMake() << " " <<
			currentNode->data->getModel() << " " <<
			currentNode->data->getColor() << " " <<
			currentNode->data->getYear() << endl;
		currentNode = currentNode->getNext();
		i++;
	}


	return output;
}


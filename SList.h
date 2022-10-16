#pragma once
#include<iostream>
using namespace std;

template<typename any>
class Snode
{
private:
	any data;
	Snode<any>* next;
	template<typename any>friend class Slist;
public:
	void setData(const any& y) {
		data = y;
	}
	void setNext(const Snode<any>* y) {
		next = y->next;
	}
	any getData()const {
		return data;
	}
	Snode<any>* getNext()const {
		return next;
	}

};

template<typename any>
class Slist {
private:
	Snode<any>* head;
	int n;
public:
	Slist() :head(NULL), n(0) {}

	void operator=(Slist<any>& list)
	{
		if (list.head == NULL)
			head = NULL;
		else
		{
			Snode<any>* p = new Snode<any>;
			p->data = list.head->getData();
			p->next = NULL;
			head = p;
		}

		Snode<any>* pITR = list.head->getNext();
		Snode<any>* cITR = head;

		while (pITR != NULL)
		{
			cITR->next = new Snode<any>();
			cITR->next->data = pITR->data;
			cITR->next->next = NULL;

			cITR = cITR->next;
			pITR = pITR->next;
		}
	}
	Slist(Slist& list)//copy
	{
		if (list.head == NULL)
			head = NULL;
		else
		{
			Snode<any>* p = new Snode<any>;
			p->data = list.head->getData();
			p->next = NULL;
			head = p;
		}

		Snode<any>* pITR = list.head->getNext();
		Snode<any>* cITR = head;

		while (pITR != NULL)
		{
			cITR->next = new Snode<any>();
			cITR->next->data = pITR->data;
			cITR->next->next = NULL;

			cITR = cITR->next;
			pITR = pITR->next;
		}
	}

	~Slist()
	{
		Snode<any>* cur = head;

		while (cur != NULL)
		{
			Snode<any>* temp = cur;
			
			cur = cur->next;
			delete temp;
		}
	}
	void addFront(const any& item) {
		Snode<any>* p = new Snode<any>;
		p->data = item;
		p->next = NULL;
		p->next = head;
		head = p;

		n++;
	}

	int getLength()
	{
		return n;
	}
	bool empty()const { return head == NULL; }

	void addLast(const any& item)
	{
		Snode<any>* mynode = new Snode<any>;
		mynode->data = item;
		mynode->next = NULL;
		Snode<any>* p = head;
		if (empty())
		{
			addFront(item);
			return;
		}
		while (p && p->next != NULL)
		{
			p = p->next;
		}
		p->next = mynode;
	}

	void displayList() {
		Snode<any>* p = head;

		cout << "head--> ";
		while (p != NULL) {
			cout << " " << p->data << "-->";
			p = p->next;

		}
		cout << "NULL" << endl;
	}

	void conList(Slist<any> obj)
	{
		Snode<any>* p = obj.head;
		while (p != NULL)
		{
			this->addLast(p->getData());
			p = p->next;
		}
	}
};
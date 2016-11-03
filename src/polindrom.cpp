#include"polindrom.h"
Stack::Stack() {
	a = 0;
}
Stack::Stack(list *b) {
	a = b;
}
Stack::~Stack() {
	while ((a) != 0) {
		list*t = a->next;
		delete[]a;
		a = t;
	}
}
void Stack::push(int x)
{
	list *temp = new list;
	if (temp == NULL) {}
	else
	{
		temp->data = x;
		temp->next = a;
		a = temp;
	}
}
bool Stack::pop() {
	if (a != 0) {
		list *temp = a;
		a = a->next;
		delete[]temp;
		return true;
	}
	else {
		throw 1;
	}
}
int& Stack::top() {
	if (a != 0) {
		return a->data;
	}
	else {
		throw 1;
	}
}
int Stack::minimum() {
	list *help = a;

	if (a != 0) {
		int min = a->data;
		help = help->next;

		while (help != 0) {
			if (help->data < min)
				min = help->data;

			help = help->next;
		}
		return min;
	}
	else {
		throw 1;
	}
}
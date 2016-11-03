#include"conio.h"
#include <iostream>
using namespace std;
struct list {
	int data;
	list *next;
};
class Stack {
	list *a;
public:
	Stack();
	~Stack();
	Stack(list *);
	int& top();
	void push(int);
	bool pop();
	int minimum();
};
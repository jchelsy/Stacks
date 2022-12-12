#pragma once
#include <iostream>

#define MAX 1000

using namespace std;


// Stack (of a fixed data type - int)
class Stack
{
	int top;

public:
	int a[MAX];

	// Constructor
	Stack()
	{
		top = -1;
		// 'top' equals the # of elements in the Stack MINUS ONE!
		// When there are NO elements in the Stack, 'top' is -1 (initialization)
	}

	// Methods...
	bool push(int x);  // Push method (add)
	int pop();  // Pop method (remove)
	int peek();
	bool isEmpty();

	void print(Stack s);
};
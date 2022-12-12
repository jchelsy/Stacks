#include "Stack.h";

using namespace std;


bool Stack::push(int x) {
	// Check for overflow
	if (top >= MAX - 1) {
		cout << "Stack Overflow!!!" << endl;
		return false;  // return false if an overflow occurred
	}

	else {
		// 'top' is 1 LESS than the # of elements
		// SO, increment it by 1 to get the current index
		a[++top] = x;
		cout << x << " pushed into stack." << endl;
		return true;
	}
}


int Stack::pop() {
	// Check if the Stack is empty ('top' is -1 when there are 0 elements in the Stack)
	if (top < 0) {
		cout << "Stack Underflow!!!" << endl;
		return 0;
	}
	// Otherwise (if the Stack is NOT empty):
	else {
		// decrement 'top' for it to be equivalent to 1 less element in the array
		int x = a[top--];
		return x;
	}
}


int Stack::peek() {
	// Check if the Stack is empty
	if (this->isEmpty()) {
		cout << "Stack is Empty!" << endl;
		return 0;
	}
	// If the stack isn't empty:
	else {
		int x = a[top];
		return x;
	}
}


bool Stack::isEmpty() {
	// Returns true if 'top' < 0
	// Returns false if 'top' >= 0
	return (top < 0);
}


void Stack::print(Stack s) {
	cout << "Stack:";
	while (!s.isEmpty()) {
		cout << " " << s.peek();
		s.pop();
		
//		cout << " " << s.pop();
	}
}
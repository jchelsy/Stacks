#include "Stack.h"
#include <stdlib.h>

using namespace std;


int main() {
	Stack s;
	int c;
	int v;

	cout << endl << endl;

	while (1) {
		cout << endl;
		cout << "1. Add to Stack (push)" << endl;
		cout << "2. Remove Latest Value From Stack (pop)" << endl;
		cout << "3. Exit" << endl;

		cout << "\n\tYou: ";
		cin >> c;

		switch (c) {
		case 1:
			cout << "\nAdd: ";
			cin >> v;

			s.push(v);

			break;

		case 2:
			cout << "\n" << s.pop() << " has been removed from the Stack!" << endl;

			break;

		case 3:
			exit(1);

		default:
			cout << "\nError! Please try again! (#1-3)\n" << endl;
		}

		system("cls");

		cout << endl;
		s.print(s);
		cout << endl;
	}

	return 0;
}
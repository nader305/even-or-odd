#include<iostream>
using namespace std;
int main() {
	char choice;
	cout << "for even enter e or E and for odd enter o or O:\n";
	cin >> choice;
	switch (choice) {
	case 'e': {
	case 'E':
		int start, end;
		cout << "Enter the start:\n";
		cin >> start;
		cout << "Enter the end:\n";
		cin >> end;
		int sum = 0;
		for (int i = start; i <= end; i++) {
			if (i % 2 == 0)
				sum += i;
		}
		cout << "Sum of even number between " << start << " and " << end << " is " << sum << endl;
	}
		break;
	case 'o': {
	case 'O':
		int start, end;
		cout << "Enter the start:\n";
		cin >> start;
		cout << "Enter the end:\n";
		cin >> end;
		int sum = 0;
		for (int i = start; i <= end; i++) {
			if (i % 2 != 0)
				sum += i;
		}
		cout << "Sum of even number between " << start << " and " << end << " is " << sum << endl;
	}
		break;
	default:
		cout << "Wrong entry please enter [e] or [E] for even  and [o]  or  [O]  for odd\a\n";
	}

	return 0;
}
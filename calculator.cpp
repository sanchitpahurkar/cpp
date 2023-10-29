#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	int n;
	cout << "Enter first number : ";
	cin >> a;
	cout << "Enter second number : ";
	cin >> b;
	cout << "\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division" << endl;
	cout << "Enter choice : ";
	cin >> n;
	if(n==1) {
		c = a+b;
		cout << "a + b = " << c;
	}
	else if(n==2) {
		c = a-b;
		cout << "a - b = " << c;
	}
	else if(n==3) {
		c = a*b;
		cout << "a * b = " << c;
	}
	else if(n==4) {
		c = (a/b);
		cout << "a / b = " << c;
	}
	else {
		cout << "Invalid choice";
	}
	return 0;
}

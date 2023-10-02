#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "enter a,b,c:";
	cin >> a >> b >> c;
	if ((a + b) > c && (b + c) > a && (a + c) > b) {
		cout << "a b c can be a triangle";
	}
	else {
		cout << "a b c can not be a triangle";
	}
	return 0;
}
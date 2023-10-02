#include <iostream>
#include <cmath>
using namespace std;


int fact(int x) {
	if (x == 2) return 2;
	return fact(x - 1) * x;
}

int main()
{
	for (int i = 2; i < 11; ++i) {
		long double e = pow(10, -i);
		long double s = 1.0;
		int k = 1;
		long double _cos1 = cos(1);
		while (abs(s - _cos1) >= e) {
			s += pow(-1, k) / fact((2 * k));
			k++;
		}
		cout.precision(10);
		cout << "tochnost:\t10^-" << i << "\n\tIteracii:  " << k - 1 << " znach:  " << s <<" cos1 = "<< _cos1<< endl;
	}
	return 0;
}

#include <iostream>
using namespace std;


int main()
{
	int hour, minute, seconds, hour1, minute1, seconds1, hour0, minute0, seconds0, sum_sec1, sum_sec2, otv;
	cout << "enter hour:minutes:seconds of start:";
	cin >> hour >> minute >> seconds;
	cout << endl << "enter hour:minutes:seconds of end:";
	cin >> hour1 >> minute1 >> seconds1;
	sum_sec1 = (hour1) * 3600 + (minute1) * 60 + (seconds1);
	sum_sec2 = (hour) * 3600 + (minute) * 60 + (seconds);
	otv = sum_sec1 - sum_sec2;
	hour0 = otv / 3600;
	minute0 = (otv - (hour0 * 3600)) / 60;
	seconds0 = (otv - (hour0 * 3600) - (minute0 * 60));
	cout << "the differens of time in (hour:minutes:seconds) :" << endl;
	cout << hour0 <<":" << minute0<< ":" << seconds0;
	return 0;
}
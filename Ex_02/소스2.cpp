#include <iostream>
#include <math.h>

using namespace std;

inline double calc_volume(double radius)
{
	double result;
	result = (4.0 / 3.0 * 3.14 * pow(radius, 3));
	return result;
}

bool in_Upper(string str)
{
	for (auto& c : str)
		if (isupper(c))
			return true;
	return false;
}

bool in_Lower(string str)
{
	for (auto& c : str)
		if (islower(c))
			return true;
	return false;
}

bool in_Number(string str)
{
	for (auto& c : str)
		if (48 <= c && c <= 57)
			return true;
	return false;
}


int main()
{

	//p.160, 문제2
	/*
	double input, volume;

	cout << "반지름을 입력하시오: ";
	cin >> input;

	volume = calc_volume(input);

	cout << "구의 부피는 " << volume << endl;

	return 0;
	*/

	//p.160, 문제 9
	/*
	int d1, d2;
	int result;

	srand((unsigned int)time(NULL));

	d1 = rand() % 6 + 1;
	d2 = rand() % 6 + 1;

	result = d1 + d2;

	cout << "사용자의 주사위: " << d1 << "+" << d2 << "=" << result << endl;

	if (result == 7 || result == 11)
		cout << "사용자가 이겼습니다." << endl;
	else if (result == 2 || result == 3 || result == 12)
		cout << "사용자가 졌습니다." << endl;
	*/

	//p.160, 문제 13

	string p;

	cout << "암호를 입력하시오: ";
	cin >> p;

	if (in_Upper(p) && in_Lower(p) && in_Number(p))
		cout << "안전합니다." << endl;
	else
		cout << "안전하지 않습니다." << endl;

}
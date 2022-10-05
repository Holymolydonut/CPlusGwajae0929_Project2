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

	//p.160, ����2
	/*
	double input, volume;

	cout << "�������� �Է��Ͻÿ�: ";
	cin >> input;

	volume = calc_volume(input);

	cout << "���� ���Ǵ� " << volume << endl;

	return 0;
	*/

	//p.160, ���� 9
	/*
	int d1, d2;
	int result;

	srand((unsigned int)time(NULL));

	d1 = rand() % 6 + 1;
	d2 = rand() % 6 + 1;

	result = d1 + d2;

	cout << "������� �ֻ���: " << d1 << "+" << d2 << "=" << result << endl;

	if (result == 7 || result == 11)
		cout << "����ڰ� �̰���ϴ�." << endl;
	else if (result == 2 || result == 3 || result == 12)
		cout << "����ڰ� �����ϴ�." << endl;
	*/

	//p.160, ���� 13

	string p;

	cout << "��ȣ�� �Է��Ͻÿ�: ";
	cin >> p;

	if (in_Upper(p) && in_Lower(p) && in_Number(p))
		cout << "�����մϴ�." << endl;
	else
		cout << "�������� �ʽ��ϴ�." << endl;

}
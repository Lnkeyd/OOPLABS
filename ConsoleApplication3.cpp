#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include<conio.h> 
using namespace std;
int lab1()
{
	int num;

	cout << "������� �����: " << endl;
	cin >> num;
	for (int j = 0; j < 200; j += 10) {
		for (int i = 1; i <= 10; i++) {
			cout << setw(5) << num*(i + j);
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

int lab2()
{
	float celcius, farenghate;
	int num;

	cout << "������� 1 ��� �������������� �������� ������� � ������� �� ����������..." << endl;
	cout << "��� 2 ��� �������������� �������� �� ���������� � ������� �������..." << endl;
	cin >> num;
		switch (num)
		{
		case 1:
			cout << "������� �������� � �������� �������: ";
			cin >> celcius;
			cout << "��������� � �������� �� ����������: " << 9.0 / 5.0 * celcius + 32.0 << endl;
			break;
		case 2:
			cout << "������� �������� � �������� �� ����������: ";
			cin >> farenghate;
			cout << "��������� � �������� �� ����������: " << 5.0 / 9.0 * (farenghate - 32.0) << endl;;
			break;
		default:
			cout << "������������ ������. ������� ����� 1 ��� 2" << endl;
			break;
		}
	system("pause");
    return 0;
}

int lab3()
{
	char ch;
	long num = 0;
	cout << "������� �����: ";
	while ((ch = _getche()) != '\r')
		num = num * 10 + ch - '0';
	cout << "���� ����� � ������� long: " << num << endl;

	system("pause");
	return 0;
}

int lab4()
{
	float a, b;
	char ch, again;
	do {
		cout << "������� ������ �����: ";
		cin >> a;
		cout << "������� �������: ";
		cin >> ch;
		cout << "������� ������ �����: ";
		cin >> b;
		switch (ch)
		{
		case '+':
			cout << "���������: " << a + b << endl;
			break;
		case '-':
			cout << "���������: " << a - b << endl;
			break;
		case '*':
			cout << "���������: " << a * b << endl;
			break;
		case '/':
			cout << "���������: " << a / b << endl;
			break;
		default:
			cout << "������� ���� �� ���������� ����������: + - * /" << endl;
			break;
		}
		cout << "��� ���? (y/n) ";
		cin >> again;
	} while (again != 'n');
	system("pause");
	return 0;
}

int lab5() {
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j <= 39; j++)
		{
			if ((j > 19 - i) && (j <= 20 + i)) {
				cout << "x";
				continue;
			}
			else cout << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

int lab6()
{
	unsigned int numb;
	unsigned long fact = 1;             //long for larger numbers

	do {
		cout << "Enter a number: ";
		cin >> numb;                      //get number

		for (int j = numb; j > 0; j--)         //multiply 1 by
			fact *= j;                     //numb, numb-1, ..., 2, 1
		cout << "Factorial is " << fact << endl;
	} while (numb != 0);
	return 0;
}

int lab7()
{
	float cash;
	int years;
	float stavka;

	setlocale(LC_ALL, "RU");
	cout << "������� ����� ��������������� ������: ";
	cin >> cash;
	cout << "������� ����� ���: ";
	cin >> years;
	cout << "������� ���������� ������: ";
	cin >> stavka;

	for (int i = 0; i < years; i++) {
		cout << "� ����� " << years << "-�� ���� �� �������� " << cash + cash * (stavka / 100) << " ��������" << endl;
		cash = cash + cash * (stavka / 100);
	}

	system("pause");
	return 0;
}

int lab8()
{
	float ph1, sh1, penny1;
	float fd1, fd2, fd3;
	float ph2, sh2, penny2;
	int ph3, sh3, penny3;
	char ch;

	do {

		cout << "1. ������� ����� ������, ��������� � ������ ����� ������: ";
		cin >> ph1 >> sh1 >> penny1;
		cout << "2. ������� ����� ������, ��������� � ������ ����� ������: ";
		cin >> ph2 >> sh2 >> penny2;

		fd1 = round((((ph1 * 20 + sh1) * 12 + penny1) / 240) * 100) / 100;
		fd2 = round((((ph2 * 20 + sh2) * 12 + penny2) / 240) * 100) / 100;
		fd3 = fd1 + fd2;


		float decfrac;	// ���������� ������� �����
		ph3 = static_cast<int>(fd3); //������������
									 //������� �����
		decfrac = fd3 - ph3;	//����������� ������� �����
		sh3 = decfrac * 20;

		penny3 = static_cast<int>(sh3);
		decfrac = (sh3 - penny3) * 10;
		cout << "3. C����: " << ph3 << "." << penny3 << "." << decfrac << endl;
		cout << "4. ���������� (�/n)?: ";
		cin >> ch;
		cout << endl;
	} while (ch != 'n');

	system("pause");
	return 0;
}

int lab9()
{
	int humans;
	int chairs;
	int variants = 1;
	setlocale(LC_ALL, "RU");

	cout << "������� ���������� ������: ";
	cin >> humans;
	cout << "������� ���������� ������� (������ ���� ������, ��� ������): ";
	cin >> chairs;

	for (int i = 0; i < chairs; i++) {
		variants *= humans;
		humans--;
	}

	cout << "��������� ������������: " << variants << endl;
	system("pause");
	return 0;
}

int lab10()
{
	float cash;
	int years = 0;
	float stavka;
	float cashafter;

	setlocale(LC_ALL, "RU");
	cout << "������� ����� ��������������� ������: ";
	cin >> cash;
	cout << "������� ���������� ������: ";
	cin >> stavka;
	cout << "������� �������� �����: ";
	cin >> cashafter;

	do {
		cash = cash + cash * (stavka / 100);
		years++;
	} while (cashafter >= cash);


	cout << "���-�� ���, ����������� ��� �������� �����: " << years << endl;
	system("pause");
	return 0;
}

int lab11()
{
	int number;
	float ph1, sh1, penny1;
	float fd1, fd2, fd3;
	float ph2, sh2, penny2;
	int ph3, sh3, penny3;
	float somenumber;
	char ch;


	cout << "1. ��������" << endl;
	cout << "2. ���������" << endl;
	cout << "3. ��������� �� ������������ �����" << endl;

	cout << "������� �������� ��� �������, ������� ���������� ����������: ";
	cin >> number;
	switch (number) {
	case 1:
	{
		do {

			cout << "1. ������� ����� ������, ��������� � ������ ����� ������: ";
			cin >> ph1 >> sh1 >> penny1;
			cout << "2. ������� ����� ������, ��������� � ������ ����� ������: ";
			cin >> ph2 >> sh2 >> penny2;

			fd1 = round((((ph1 * 20 + sh1) * 12 + penny1) / 240) * 100) / 100;
			fd2 = round((((ph2 * 20 + sh2) * 12 + penny2) / 240) * 100) / 100;
			fd3 = fd1 + fd2;


			float decfrac;	// ���������� ������� �����
			ph3 = static_cast<int>(fd3); //������������
										 //������� �����
			decfrac = fd3 - ph3;	//����������� ������� �����
			sh3 = decfrac * 20;

			penny3 = static_cast<int>(sh3);
			decfrac = (sh3 - penny3) * 10;
			cout << "3. C����: " << ph3 << "." << penny3 << "." << decfrac << endl;
			cout << "4. ���������� (�/n)?: ";
			cin >> ch;
			cout << endl;
		} while (ch != 'n');
		break;
	}
	case 2:
	{
		do {

			cout << "1. ������� ����� ������, ��������� � ������ ����� ������: ";
			cin >> ph1 >> sh1 >> penny1;
			cout << "2. ������� ����� ������, ��������� � ������ ����� ������: ";
			cin >> ph2 >> sh2 >> penny2;

			fd1 = round((((ph1 * 20 + sh1) * 12 + penny1) / 240) * 100) / 100;
			fd2 = round((((ph2 * 20 + sh2) * 12 + penny2) / 240) * 100) / 100;
			fd3 = fd1 - fd2;


			float decfrac;	// ���������� ������� �����
			ph3 = static_cast<int>(fd3); //������������
										 //������� �����
			decfrac = fd3 - ph3;	//����������� ������� �����
			sh3 = decfrac * 20;

			penny3 = static_cast<int>(sh3);
			decfrac = (sh3 - penny3) * 10;
			cout << "3. ��������: " << ph3 << "." << penny3 << "." << decfrac << endl;
			cout << "4. ���������� (�/n)?: ";
			cin >> ch;
			cout << endl;
		} while (ch != 'n');
		break;
	}

	case 3:
	{
		do {

			cout << "1. ������� ����� ������, ��������� � ������ ����� ������: ";
			cin >> ph1 >> sh1 >> penny1;
			cout << "2. ������� ����� : ";
			cin >> somenumber;

			fd1 = round((((ph1 * 20 + sh1) * 12 + penny1) / 240) * 100) / 100;
			fd2 = somenumber;
			fd3 = fd1 * somenumber;


			float decfrac;	// ���������� ������� �����
			ph3 = static_cast<int>(fd3); //������������
										 //������� �����
			decfrac = fd3 - ph3;	//����������� ������� �����
			sh3 = decfrac * 20;

			penny3 = static_cast<int>(sh3);
			decfrac = (sh3 - penny3) * 10;
			cout << "3. ��������� ���������: " << ph3 << "." << penny3 << "." << decfrac << endl;
			cout << "4. ���������� (�/n)?: ";
			cin >> ch;
			cout << endl;
		} while (ch != 'n');
		break;
	}
	}

	system("pause");
	return 0;
}


int lab12()
{
	int a, b, c, d;
	char dch;
	char ch;
	int number;

	do {
		cout << "1. �������� ������" << endl;
		cout << "2. ��������� ������" << endl;
		cout << "3. ��������� ������" << endl;
		cout << "4. ������� ������" << endl;
		cout << "������� ����� ��������: ";
		cin >> number;
		switch (number)
		{
		case 1:
			cout << "������� ������ �����: " << endl;
			cin >> a >> dch >> b;
			cout << "������� ������ �����: " << endl;
			cin >> c >> dch >> d;
			cout << "�����: " << (a*d + b*c) << '/' << (b*d) << endl;

			break;
		case 2:
			cout << "������� ������ �����: " << endl;
			cin >> a >> dch >> b;
			cout << "������� ������ �����: " << endl;
			cin >> c >> dch >> d;
			cout << "�����: " << (a*d - b*c) << '/' << (b*d) << endl;
			break;
		case 3:
			cout << "������� ������ �����: " << endl;
			cin >> a >> dch >> b;
			cout << "������� ������ �����: " << endl;
			cin >> c >> dch >> d;
			cout << "�����: " << (a*c) << '/' << (b*d) << endl;
			break;
		case 4:
			cout << "������� ������ �����: " << endl;
			cin >> a >> dch >> b;
			cout << "������� ������ �����: " << endl;
			cin >> c >> dch >> d;
			cout << "�����: " << (a*d) << '/' << (b*c) << endl;
			break;
		}
		cout << "��������� (�/n)?: ";
		cin >> ch;

	} while (ch != 'n');
	system("pause");
	return 0;
}


	int main()
	{
		setlocale(LC_ALL, "RU");
		lab1();
		lab2();
		lab3();
		lab4();
		lab5();
		lab6();
		lab7();
		lab8();
		lab9();
		lab10();
		lab11();
		lab12();
		system("pause");
		return 0;
	}
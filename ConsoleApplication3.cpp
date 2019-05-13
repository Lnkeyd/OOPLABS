#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include<conio.h> 
using namespace std;
int lab1()
{
	int num;

	cout << "Введите число: " << endl;
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

	cout << "Введите 1 для преобразования градусов Цельсия в градусы по Фаренгейту..." << endl;
	cout << "Или 2 для преобразования градусов по Фаренгейту в градусы Цельсия..." << endl;
	cin >> num;
		switch (num)
		{
		case 1:
			cout << "Введите величину в градусах Цельсия: ";
			cin >> celcius;
			cout << "Результат в градусах по Фаренгейту: " << 9.0 / 5.0 * celcius + 32.0 << endl;
			break;
		case 2:
			cout << "Введите величину в градусах по Фаренгейту: ";
			cin >> farenghate;
			cout << "Результат в градусах по Фаренгейту: " << 5.0 / 9.0 * (farenghate - 32.0) << endl;;
			break;
		default:
			cout << "Недопустимый формат. Введите числа 1 или 2" << endl;
			break;
		}
	system("pause");
    return 0;
}

int lab3()
{
	char ch;
	long num = 0;
	cout << "Введите число: ";
	while ((ch = _getche()) != '\r')
		num = num * 10 + ch - '0';
	cout << "Ваше число в формате long: " << num << endl;

	system("pause");
	return 0;
}

int lab4()
{
	float a, b;
	char ch, again;
	do {
		cout << "Введите первое число: ";
		cin >> a;
		cout << "Введите операнд: ";
		cin >> ch;
		cout << "Введите второе число: ";
		cin >> b;
		switch (ch)
		{
		case '+':
			cout << "Результат: " << a + b << endl;
			break;
		case '-':
			cout << "Результат: " << a - b << endl;
			break;
		case '*':
			cout << "Результат: " << a * b << endl;
			break;
		case '/':
			cout << "Результат: " << a / b << endl;
			break;
		default:
			cout << "Введите один из допустимых операторов: + - * /" << endl;
			break;
		}
		cout << "Еще раз? (y/n) ";
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
	cout << "Введите сумму первоначального вклада: ";
	cin >> cash;
	cout << "Введите число лет: ";
	cin >> years;
	cout << "Введите процентную ставку: ";
	cin >> stavka;

	for (int i = 0; i < years; i++) {
		cout << "В конце " << years << "-го года вы получите " << cash + cash * (stavka / 100) << " долларов" << endl;
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

		cout << "1. Введите число фунтов, шиллингов и пенсов через пробел: ";
		cin >> ph1 >> sh1 >> penny1;
		cout << "2. Введите число фунтов, шиллингов и пенсов через пробел: ";
		cin >> ph2 >> sh2 >> penny2;

		fd1 = round((((ph1 * 20 + sh1) * 12 + penny1) / 240) * 100) / 100;
		fd2 = round((((ph2 * 20 + sh2) * 12 + penny2) / 240) * 100) / 100;
		fd3 = fd1 + fd2;


		float decfrac;	// десятичная дробная часть
		ph3 = static_cast<int>(fd3); //отбрасывание
									 //дробной части
		decfrac = fd3 - ph3;	//прибавление дробной части
		sh3 = decfrac * 20;

		penny3 = static_cast<int>(sh3);
		decfrac = (sh3 - penny3) * 10;
		cout << "3. Cумма: " << ph3 << "." << penny3 << "." << decfrac << endl;
		cout << "4. Продолжить (у/n)?: ";
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

	cout << "Введите количество гостей: ";
	cin >> humans;
	cout << "Введите количество стульев (должно быть меньше, чем гостей): ";
	cin >> chairs;

	for (int i = 0; i < chairs; i++) {
		variants *= humans;
		humans--;
	}

	cout << "Вариантов расположения: " << variants << endl;
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
	cout << "Введите сумму первоначального вклада: ";
	cin >> cash;
	cout << "Введите процентную ставку: ";
	cin >> stavka;
	cout << "Введите конечную сумму: ";
	cin >> cashafter;

	do {
		cash = cash + cash * (stavka / 100);
		years++;
	} while (cashafter >= cash);


	cout << "Кол-во лет, необходимых для конечной суммы: " << years << endl;
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


	cout << "1. Сложение" << endl;
	cout << "2. Вычитание" << endl;
	cout << "3. Умножение на вещественное число" << endl;

	cout << "Введите операцию над числами, которую необходимо произвести: ";
	cin >> number;
	switch (number) {
	case 1:
	{
		do {

			cout << "1. Введите число фунтов, шиллингов и пенсов через пробел: ";
			cin >> ph1 >> sh1 >> penny1;
			cout << "2. Введите число фунтов, шиллингов и пенсов через пробел: ";
			cin >> ph2 >> sh2 >> penny2;

			fd1 = round((((ph1 * 20 + sh1) * 12 + penny1) / 240) * 100) / 100;
			fd2 = round((((ph2 * 20 + sh2) * 12 + penny2) / 240) * 100) / 100;
			fd3 = fd1 + fd2;


			float decfrac;	// десятичная дробная часть
			ph3 = static_cast<int>(fd3); //отбрасывание
										 //дробной части
			decfrac = fd3 - ph3;	//прибавление дробной части
			sh3 = decfrac * 20;

			penny3 = static_cast<int>(sh3);
			decfrac = (sh3 - penny3) * 10;
			cout << "3. Cумма: " << ph3 << "." << penny3 << "." << decfrac << endl;
			cout << "4. Продолжить (у/n)?: ";
			cin >> ch;
			cout << endl;
		} while (ch != 'n');
		break;
	}
	case 2:
	{
		do {

			cout << "1. Введите число фунтов, шиллингов и пенсов через пробел: ";
			cin >> ph1 >> sh1 >> penny1;
			cout << "2. Введите число фунтов, шиллингов и пенсов через пробел: ";
			cin >> ph2 >> sh2 >> penny2;

			fd1 = round((((ph1 * 20 + sh1) * 12 + penny1) / 240) * 100) / 100;
			fd2 = round((((ph2 * 20 + sh2) * 12 + penny2) / 240) * 100) / 100;
			fd3 = fd1 - fd2;


			float decfrac;	// десятичная дробная часть
			ph3 = static_cast<int>(fd3); //отбрасывание
										 //дробной части
			decfrac = fd3 - ph3;	//прибавление дробной части
			sh3 = decfrac * 20;

			penny3 = static_cast<int>(sh3);
			decfrac = (sh3 - penny3) * 10;
			cout << "3. Разность: " << ph3 << "." << penny3 << "." << decfrac << endl;
			cout << "4. Продолжить (у/n)?: ";
			cin >> ch;
			cout << endl;
		} while (ch != 'n');
		break;
	}

	case 3:
	{
		do {

			cout << "1. Введите число фунтов, шиллингов и пенсов через пробел: ";
			cin >> ph1 >> sh1 >> penny1;
			cout << "2. Введите число : ";
			cin >> somenumber;

			fd1 = round((((ph1 * 20 + sh1) * 12 + penny1) / 240) * 100) / 100;
			fd2 = somenumber;
			fd3 = fd1 * somenumber;


			float decfrac;	// десятичная дробная часть
			ph3 = static_cast<int>(fd3); //отбрасывание
										 //дробной части
			decfrac = fd3 - ph3;	//прибавление дробной части
			sh3 = decfrac * 20;

			penny3 = static_cast<int>(sh3);
			decfrac = (sh3 - penny3) * 10;
			cout << "3. Результат умножения: " << ph3 << "." << penny3 << "." << decfrac << endl;
			cout << "4. Продолжить (у/n)?: ";
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
		cout << "1. Сложение дробей" << endl;
		cout << "2. Вычитание дробей" << endl;
		cout << "3. Умножение дробей" << endl;
		cout << "4. Деление дробей" << endl;
		cout << "Введите номер операции: ";
		cin >> number;
		switch (number)
		{
		case 1:
			cout << "Введите первую дробь: " << endl;
			cin >> a >> dch >> b;
			cout << "Введите вторую дробь: " << endl;
			cin >> c >> dch >> d;
			cout << "Ответ: " << (a*d + b*c) << '/' << (b*d) << endl;

			break;
		case 2:
			cout << "Введите первую дробь: " << endl;
			cin >> a >> dch >> b;
			cout << "Введите вторую дробь: " << endl;
			cin >> c >> dch >> d;
			cout << "Ответ: " << (a*d - b*c) << '/' << (b*d) << endl;
			break;
		case 3:
			cout << "Введите первую дробь: " << endl;
			cin >> a >> dch >> b;
			cout << "Введите вторую дробь: " << endl;
			cin >> c >> dch >> d;
			cout << "Ответ: " << (a*c) << '/' << (b*d) << endl;
			break;
		case 4:
			cout << "Введите первую дробь: " << endl;
			cin >> a >> dch >> b;
			cout << "Введите вторую дробь: " << endl;
			cin >> c >> dch >> d;
			cout << "Ответ: " << (a*d) << '/' << (b*c) << endl;
			break;
		}
		cout << "Повторить (у/n)?: ";
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
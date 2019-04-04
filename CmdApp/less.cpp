#include "pch.h"
#include "less.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

namespace mySpace 
{


	void less::calc()
	{
		setlocale(LC_ALL, "ru");

		int num1, num2, sel;
		cout << "Введите 2 числа" << endl;
		cin >> num1 >> num2;
		cout << "Viberite operatiu" << endl;
		cout << "1. +" << endl <<
			"2. -" << endl <<
			"3. *" << endl <<
			"4. /" << endl;
		cin >> sel;
		switch (sel)
		{
		case 1:
			cout << "Vi vibrali '+'" << endl <<
				"Resultat = " << num1 + num2 << endl;
			break;
		case 2:
			cout << "Vi vibrali '-'" << endl <<
				"Resultat = " << num1 - num2 << endl;
			break;
		case 3:
			cout << "Vi vibrali '*'" << endl <<
				"Resultat = " << num1 * num2 << endl;
			break;
		case 4:
			cout << "Vi vibrali '/'" << endl <<
				"Resultat = " << (float)num1 / num2 << endl;
			break;

		default:
			cout << "Error!!!";
			break;
		}
	}

	void less::dom2()
	{
		setlocale(LC_ALL, "ru");

		int num;
		cout << "Введи одно число" << endl;
		cin >> num;

		if (num % 2 == 0) {
			cout << "Число парное" << endl;
		}
		else if (num % 2 != 0) {
			cout << "Число не парное" << endl;
		}
		else {
			cout << "Что-то не так" << endl;
		}
	}

	void less::dom1()
	{
		setlocale(LC_ALL, "ru");

		int num1, num2, num3;
		int sum, mult;
		float arif;
		
		cout << "Введи 3 числа:" << endl;
		cin >> num1 >> num2 >> num3;

		sum = num1 + num2 + num3;
		arif = float(sum) / 3;
		mult = num1 * num2 * num3;

		cout << "Сумма этих чисел = " << sum << endl;
		cout << "Произведение чисел = " << mult << endl;
		cout << "Ср. ариф. числ. = " << arif << endl;
	}

	void less::copy()
	{
		int num = 123;
		int num2 = num;
		int *ptrnum = &num;

		std::cout << num << std::endl;
		cout << *ptrnum << "\n" << endl;

		*ptrnum = 456;

		cout << num << endl;
		cout << *ptrnum << endl;
		cout << num2 << endl;
	}

	float less::del(float a, float b)
	{
		int result;
		try {
			if (a != 0)
				result = a / b;
			else {
				cout << "Error---";
				throw(a);// vikidivaem osibku
			}
		}
		catch (int num) {
			result = b;
		}
		return result;
	}

	// peregruzka

	void less::print()
	{
		cout << "String is null" << endl;
	}

	void less::print(char word[])
	{
		cout << word << endl;
	}

	void less::print(int word)
	{
		cout << word << endl;
	}

	void less::vectors()
	{
		vector <int> vect(10);
		int arr[3] = { 23, 4, 5 };
		vect.insert(vect.begin(), arr, arr + 2); // (kuda, chto, skoliko)
		vect.push_back(45); // v kontse dobavliaem 45

		cout << "vect back = " << vect.back() << endl;
		cout << "vect front = " << vect.front() << endl;
		cout << "vect 1 = " << vect.at(1) << endl;
	}
		
	// masiv - opredelen
	// vector - elasticen

	void less::strings()
	{
		string hello = "Hello";
		string world = "World";
		cout << hello << " " << world << endl;
	}

	void less::cicle()
	{
		for (int i = 100; i > 0; i /= 2) {
			cout << "for int is = " << i << endl;
		}

		int num = 0;

		while (num < 10) {
			cout << "while int is = " << num << endl;
			num += 2;
		}

		int num2 = 100;

		do {
			cout << "do while, num2 is < 10?";
		} while (num2 < 10);
	}

	void less::mass()
	{
		int arr1[3] = { 2, 3, 5 };
		for (int i = 0; i < 3; i++) {
			cout << "masiv arr - " << arr1[i] << endl;
		}

		int array[3];
		array[0] = 2;
		array[1] = 4;
		array[2] = 6;
		cout << "array - " << array[2] << endl;

		int arr[3] = { 21, 23, 25 };
		int arr2[3][2] = { {1, 2}, {3, 4}, {5, 6} };

		cout << "arr2 - " << arr2[1][0];
		cout << "arr - " << arr[2] << endl;
	}

	void less::boolCont()
	{
		bool isTrue = 23 == 23 ? true : false;
	}

	void less::switchCase()
	{
		int num = 1;
		switch (num) {
		case 1:
			cout << "Num is 1" << endl;
			break;

		case 2:
			cout << "Num is 2" << endl;
			break;

		default:
			cout << "Num not included" << endl;
			break;
		}
	}

	void less::age()
	{
		bool isHappy = true;
		short int age;
		cout << "Input your age... ";
		cin >> age;

		if (age < 18) {
			cout << "Your age is < 18";
		}
		else if (age == 18 && isHappy) {
			cout << "Your age is equal 18";
		}
		else if (age > 18) {
			if (isHappy)
				cout << "You are Happy )))" << endl;
			cout << "Your age is > 18";
		}
	}

	void less::input()
	{
		int num1, num2;
		cout << "Input num1\n";
		cin >> num1;
		cout << "Input num2\n";
		cin >> num2;
		cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
		cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
		cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
		cout << num1 << " / " << num2 << " = " << float(num1) / float(num2) << endl;
		cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
	}

	void less::vars()
	{
		std::cout << "Begin vars\n";
		char sym = 'A';
		char string[] = "Hello";
		bool isWork = true;
		int num = 12355;
		long int num2 = 1234569;
		short int num3 = 500;
		float fNum = 2.34;
		double dNum = 0.12312312;

		cout << "string - " << string;
	}
}

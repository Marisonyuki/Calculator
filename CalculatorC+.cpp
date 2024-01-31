#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");
	int x, y, f, i;
	double c, d, g;
	cout << "1. Сложение\n";
	cout << "Введите первое число: ";
	cin >> x;
	cout << "Введите второе число: ";
	cin >> y;
	cout << x << " + " << y << " = " << x + y << endl;

	cout << "2. Вычитание\n";
	cout << "Введите первое число: ";
	cin >> x;
	cout << "Введите второе число: ";
	cin >> y;
	cout << x << " - " << y << " = " << x - y << endl;

	cout << "3. Умножение\n";
	cout << "Введите первое число: ";
	cin >> x;
	cout << "Введите второе число: ";
	cin >> y;
	cout << x << " * " << y << " = " << x * y << endl;

	cout << "4. Деление\n";
	cout << "Введите первое число: ";
	cin >> c;
	cout << "Введите второе число: ";
	cin >> d;
	cout << c << " / " << d << " = " << c / d << endl;

	cout << "5. Введение в степень\n";
	cout << "Введите число: ";
	cin >> c;
	cout << "Введите степень: ";
	cin >> d;
	g = pow(c, d);
	cout << c << "^" << d << " = " << g << endl;

	cout << "6. Квадратный корень\n";
	cout << "Введите число: ";
	cin >> c;
	g = sqrt(c);
	cout << "sqrt(" << c << ")" << " = " << g << endl;

	cout << "7. 1 Процент от числа\n";
	cout << "Введите число: ";
	cin >> c;
	g = c * 0.01;
	cout << c << " * 0.01" << " = " << g << endl;

	cout << "8. Факториал\n";
	cout << "Введите число: ";
	cin >> x;
	f = 1;
	for (i = 1; i <= x; i++)
	{
		f = i * f;
	}
	cout << x << "!" << " = " << f << endl;

	cout << "9. Выйти из программы";
}
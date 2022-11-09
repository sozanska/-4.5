// Lab_04_5.cpp
// Прізвище та ім'я автора
// Лабораторна робота №4.5
// "Попадання" у плоску фігуру.
// Варіант 4

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	double x, y, R;

	srand((unsigned)time(NULL));

	cout << "R = "; cin >> R;

	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		if (((x * x + y * y) <= pow(R, 2) && y >= 0) || (y >= -R && x >= y && x <= 0))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
	{
		x = 2 * R * rand() / RAND_MAX - R;
		y = 2 * R * rand() / RAND_MAX - R;

		if (((x * x + y * y) <= pow(R, 2) && y >= 0) || (y >= -R && x >= y && x <= 0))
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}

	cin.get();
	return 0;
}

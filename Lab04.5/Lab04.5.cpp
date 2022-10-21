#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R1, R2;

	srand((unsigned)time(NULL));

	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;

	for (int i = 0; i < 10; i++)
	{

		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		if ((x >= 0 && y >= 0 && y * y >= (R2 * R2 - x * x) && y * y <= R1 * R1 - x * x)
			|| (x <= 0 && y <= 0 && y * y >= (R2 * R2 - x * x) && y * y <= (R1 * R1 - x * x)))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
	{
		x = -R1 + rand() * 2. * R1 / RAND_MAX;
		y = -R1 + rand() * 2. * R1 / RAND_MAX;

		if ((x >= 0 && y >= 0 && y * y >= (R2 * R2 - x * x) && y * y <= R1 * R1 - x * x)
			|| (x <= 0 && y <= 0 && y * y >= (R2 * R2 - x * x) && y * y <= (R1 * R1 - x * x)))

			cout << setw(10) << setprecision(4) << x << " "
			<< setw(10) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(10) << setprecision(4) << x << " "
			<< setw(10) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}

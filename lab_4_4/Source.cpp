#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x; 
	double R; 
	double y;
	double dx;
	double xk;
	double xp;

	cout << "xk = ", cin >> xk;
	cout << "xp = ", cin >> xp;
	cout << "R = "; cin >> R;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------" << endl;
	cout << "|" << setw (5) << "x" << "   |"
		<< setw(7) << "y" << "   |" << endl;
	cout << "---------------------" << endl;

	x = xp;

	while (x <= xk)
	{
		if (x <= -8 - R)
			y = -R;
		else
			if (-8 - R < x && x <= -8 + R)
				y = sqrt(R * R - (x + 8) * (x + 8)) - R;
			else
				if (-8 + R < x && x <= 2)
					y = ((x + 8 - R) * (2 + R) / 10 - R) - R;
				else
					if (2 < x && x <= 6)
						y = 0;
					else
						y = (x - 6) * (x - 6);
		cout << "|" << setw(7) << setprecision(2) << x
		     << "|" << setw(10) << setprecision(3) << y
			 << "|" << endl;
		x += 2;
	}
	cout << "---------------------" << endl;

	cin.get();
	return 0;
}
#include <iostream>
#include <string>
using namespace std;


int main()
{
	while (true)
	{
		string X, Y;
		int x, y, z, v;
		double HO;
		cout << "HxXy + YzOHv" << endl; // X kai Y einai ta stoixeia kai ta n einai to noumero tous
		cout << "Enter Element X (non-metals)" << endl;
		cin >> X;
		cout << "Enter x" << endl;
		cin >> x;
		cout << "Enter y" << endl;
		cin >> y;
		cout << "Enter Enter Element Y (metals)" << endl;
		cin >> Y;
		cout << "Enter z" << endl;
		cin >> z;
		cout << "Enter v" << endl;
		cin >> v;
		if (x <= 0 || y <= 0 || z <= 0 || v <= 0)
		{
			cout << "Please enter a valid value" << endl;
		}
		else if (x > 3 || y > 3 || z > 3 || v > 3)
		{
			cout << "Please enter a valid value" << endl;
		}
		else
		{
			if (x == y)
			{
				if (z == v)
				{
					if (x == v)
					{
						cout << "H" << X << " + " << Y << "OH" << " --> " << "H2O + " << Y << X << endl;
					}
					else
					{

						cout << v << "H" << X << " + " << x << Y << "OH" << " --> " << "H2O + " << Y << x << X << v << endl;
					}
				}
				else if (x == v)
				{
					HO = v * x;
					cout << "H" << X << " + " << Y << z << "OH" << v << " --> " << HO << "H2O + " << Y << X << endl;
				}
				else
				{
					HO = v * x;
					cout << v << "H" << X << " + " << x << Y << z << "OH" << v << " --> " << HO << "H2O + " << Y << x << X << v << endl;
				}
			}
			else if (z == v)
			{
				if (x == y)
				{
					if (x == v)
					{

						cout << "H" << X << " + " << Y << "OH" << " --> " << "H2O + " << Y << X << endl;
					}
					else
					{

						cout << v << "H" << X << " + " << x << Y << "OH" << " --> " << "H2O + " << Y << x << X << v << endl;
					}
				}
				else if (x == v)
				{
					HO = x * v;
					cout << "H" << x << X << y << " + " << Y << "OH" << " --> " << HO << "H2O + " << Y << X << endl;
				}
				else
				{
					HO = x * v;
					cout << v << "H" << x << X << y << " + " << x << Y << "OH" << " --> " << HO << "H2O + " << Y << x << X << v << endl
				}
			}
			else if (x == v)
			{
				if (x == y)
				{
					if (z == v)
					{

						cout << "H" << X << " + " << Y << "OH" << " --> " << "H2O + " << Y << X << endl;
					}
					else
					{
						HO = x * v;
						cout << "H" << X << " + " << Y << z << "OH" << v << " --> " << HO << "H2O + " << Y << X << endl;
					}
				}
				else if (z == v)
				{
					HO = x * v;
					cout << "H" << x << X << y << " + " << Y << "OH" << " --> " << HO << "H2O + " << Y << X << endl;
				}
				else
				{
					HO = x * v;
					cout << "H" << x << X << y << " + " << Y << z << "OH" << v << " --> " << HO << "H2O + " << Y << X << endl;
				}
			}
			else
			{
				HO = v * x;
				cout << v << "H" << x << X << y << " + " << x << Y << z << "OH" << v << " --> " << HO << "H2O + " << Y << x << X << v << endl;
			}
		}
	}
	return 0;
}

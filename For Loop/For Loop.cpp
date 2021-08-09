#include <iostream>
using namespace std;


int main()
{
	while (true)
	{
		string X, Y;
		int n1, n2, n3, n4;
		double HO;
		cout << "Hn1Xn2 + Yn3OHn4" << endl; // X kai Y einai ta stoixeia kai ta n einai to noumero tous
		cout << "Enter X" << endl;
		cin >> X;
		cout << "Enter n1" << endl;
		cin >> n1;
		cout << "Enter n2" << endl;
		cin >> n2;
		cout << "Enter Y" << endl;
		cin >> Y;
		cout << "Enter n3" << endl;
		cin >> n3;
		cout << "Enter n4" << endl;
		cin >> n4;
		if (n1 <= 0 || n2 <= 0 || n3 <= 0 || n4 <= 0)
		{
			cout << "Please enter a valid value" << endl;
		}
		else if (n1 > 3 || n2 > 3 || n3 > 3 || n4 > 3)
		{
			cout << "Please enter a valid value" << endl;
		}
		else
		{
			if (n1 == n2 || n3 == n4 || n2 == n3)
			{
				if (n1 == n2)
				{
					if (n3 == n4)
					{
						if (n1 == n4)
						{

							cout << "H" << X << " + " << Y << "OH" << " = " << "H2O + " << Y << X << endl;
						}
						else
						{

							cout << "H" << X << " + " << Y << "OH" << " = " << "H2O + " << Y << n1 << X << n4 << endl;
						}
					}
					else if (n1 == n4)
					{
						HO = (1 + static_cast<double>(n4)) / 2;
						cout << "H" << X << " + " << Y << n3 << "OH" << n4 << " = " << HO << "H2O + " << Y << X << endl;
					}
					else
					{
						HO = (1 + static_cast<double>(n4)) / 2;
						cout << "H" << X << " + " << Y << n3 << "OH" << n4 << " = " << HO << "H2O + " << Y << n1 << X << n4 << endl;
					}
				}
				else if (n3 == n4)
				{
					if (n1 == n2)
					{
						if (n1 == n4)
						{

							cout << "H" << X << " + " << Y << "OH" << " = " << "H2O + " << Y << X << endl;
						}
						else
						{

							cout << "H" << X << " + " << Y << "OH" << " = " << "H2O + " << Y << n1 << X << n4 << endl;
						}
					}
					else if (n1 == n4)
					{
						HO = (static_cast<double>(n1) + 1) / 2;
						cout << "H" << n1 << X << n2 << " + " << Y << "OH" << " = " << HO << "H2O + " << Y << X << endl;
					}
					else
					{
						HO = (static_cast<double>(n1) + 1) / 2;
						cout << "H" << n1 << X << n2 << " + " << Y << "OH" << " = " << HO << "H2O + " << Y << n1 << X << n4 << endl;
					}
				}
				else if (n1 == n4)
				{
					if (n1 == n2)
					{
						if (n3 == n4)
						{

							cout << "H" << X << " + " << Y << "OH" << " = " << "H2O + " << Y << X << endl;
						}
						else
						{
							HO = (1 + static_cast<double>(n4)) / 2;
							cout << "H" << X << " + " << Y << n3 << "OH" << n4 << " = " << HO << "H2O + " << Y << X << endl;
						}
					}
					else if (n3 == n4)
					{
						HO = (static_cast<double>(n1) + 1) / 2;
						cout << "H" << n1 << X << n2 << " + " << Y << "OH" << " = " << HO << "H2O + " << Y << X << endl;
					}
					else
					{
						HO = (n1 + static_cast<double>(n4)) / 2;
						cout << "H" << n1 << X << n2 << " + " << Y << n3 << "OH" << n4 << " = " << HO << "H2O + " << Y << X << endl;
					}
				}
			}
			else
			{
				HO = (n1 + static_cast<double>(n4)) / 2;
				cout << "H" << n1 << X << n2 << " + " << Y << n3 << "OH" << n4 << " = " << HO << "H2O + " << Y << n1 << X << n4 << endl;
			}
		}
	}
}





























/*for (int i = 0; i <= 10; i++)
		{

			for (int a = 0;  a <= 10; a++)
			{
				cout << i;



			}


			cout << endl;

		}*/
		/*float s, g, p;
		cout << "Enter a number " << endl;
		cin >> s;
		cout << "Enter a number " << endl;
		cin >> g;
		p = s - g;
		cout << "Their diafora is " << p << ">0" << endl << endl;
		while (p > 0)
		{
			double  a, b, c;
			cout << "Enter a number " << endl;
			cin >> a;
			c = 0;
			cout << endl;
			if (a > 100)
			{
				cout << "Enter a smaller number than 10 \n" << endl;
			}
			else if (a == 0)
			{
				cout << "Enter a bigger number than 0 \n" << endl;
			}
			else {
				for (; a <= 100; a++)
				{
					for (int i = 1; i <= a; i++)
					{
						b = pow(a, a);
						cout << a << "^" << a << "=" << b;
						c++;
						if (c == 1)
						{
							cout << endl;
							c = 0;
						}

					}

				}
				cout << endl;
			}

		}*/



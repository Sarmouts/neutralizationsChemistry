#include <iostream>
using namespace std;
int main()
{
	float s, g, p;
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
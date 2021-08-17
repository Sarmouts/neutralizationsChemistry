#include <iostream>
#include <string>
using namespace std;

string replace(string str)
{
	string final = "";
	for (int i = 0; i <= str.length(); i++)
	{
		if (str[i] != '1')
		{
			final += str[i];
		}
	}
	return final;
}
int main()
{
	cout << "Welcome to MathFlare's early access neutralizations' calculator" << endl;
	cout << "---------------------------------------------------------------" << endl;
	while (true)
	{
		string X, Y, answer;
		int x, y, z, v, HO;
		cout << "HxXy + YzOHv" << endl; // X kai Y einai ta stoixeia kai ta x,y,z,v einai to noumero tous
		cout << "Enter x" << endl;
		cin >> x;
		cout << "Enter Element X (non-metals, if you have something like this CO3, please write it with this way (CO3) so that the answer will be clearer)" << endl;
		cin >> X;
		cout << "Enter y" << endl;
		cin >> y;
		cout << "Enter Element Y (metals)" << endl;
		cin >> Y;
		cout << "Enter z" << endl;
		cin >> z;
		cout << "Enter v" << endl;
		cin >> v;
		if (x <= 0 || y <= 0 || z <= 0 || v <= 0)
		{
			cout << "Please enter a valid value" << endl;
			cout << "======================================================================================" << endl;
		}
		else if (x > 3 || v > 3)
		{
			cout << "The value of x or v cannot be more than 3" << endl;
			cout << "======================================================================================" << endl;
		}
		else if (y > 1 || z > 1)
		{
			cout << "The value of y or z cannot be more or less than 1" << endl;
			cout << "======================================================================================" << endl;
		}
		else
		{
			if (x == v)
			{
				answer = "H" + to_string(x) + X + to_string(y) + " + " + Y + to_string(z) + "OH" + to_string(v) + " --> " + to_string(x) + "H2O + " + Y + X;
				cout << replace(answer) << endl;
				//cout << "H" << x << X << y << " + " << Y << z << "OH" << v << " --> " << HO << "H2O + " << Y << X << endl;
				cout << "======================================================================================" << endl;
			}
			else {
				HO = v * x;
				answer = to_string(v) + "H" + to_string(x) + X + to_string(y) + " + " + to_string(x) + Y + to_string(z) + "OH" + to_string(v) + " --> " + to_string(HO) + "H2O + " + Y + to_string(x) + X + to_string(v);
				cout << replace(answer) << endl;
				//cout << v << "H" << x << X << y << " + " << x << Y << z << "OH" << v << " --> " << HO << "H2O + " << Y << x << X << v << endl;
				cout << "======================================================================================" << endl;
			}
		}
	}
	return 0;
}


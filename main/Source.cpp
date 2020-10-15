#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	HMODULE lib = LoadLibrary("TP111.dll");
	typedef bool(*func)(UINT);
	if (lib == NULL)
	{
		cout << "lib cannot be detected" << endl;
	}
	else
	{
		int a;
		cout << "Lib has been loaded" << endl << "enter number: " << endl;
		cin >> a;
		func is_prime = (func)GetProcAddress(lib, "check_primal");
		bool check = is_prime(a);
		if (check) cout << a << " is prime number" << endl;
		else cout << a << " isn't prime number" << endl;
	}
}
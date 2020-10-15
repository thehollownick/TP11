#include <Windows.h>
#include <cmath>
extern "C" _declspec(dllexport) UINT check_primal(UINT a)
{
	for (UINT i = 2; i <= sqrt(a); i++)
		if (!(a % i)) return false;
	return true;
}
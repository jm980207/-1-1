#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char A[100] = { 0 };
	int k = 0;
	cin >> A;
	k = strlen(A);
	for (int i = 0; i<k; i += 2)
	{
		if (k % 2 == 0) cout << A[i] << A[i + 1] << endl;
		else
		{
			if (i != (k - 1)) cout << A[i] << A[i + 1] << endl;
			else cout << A[i] << endl;
		}
	}
}
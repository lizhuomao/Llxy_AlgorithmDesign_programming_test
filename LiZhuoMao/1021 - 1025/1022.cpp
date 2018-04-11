#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) 
{
	unsigned int A, B, D;
	cin >> A >> B >> D;
	char arr[101];
	long int d = D, sum = A + B;
	long int i = 0;
	while (sum)
	{
		arr[i++] = sum % d + '0';
		sum /= d;
	}
	for (long int j = i - 1; j >= 0; j--)
		putchar(arr[j]);
	if (i == 0)
		cout << '0' << endl;
	return 0;
}

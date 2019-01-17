#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
    int x = 5; 
    int n, m = 0;
    n = (++x) + (++x);
    printf("%d\n", x);
    m = (x--) + (x--);
    printf("%d,%d, %d", n, m, x);
	system("pause");
    return 0;
}
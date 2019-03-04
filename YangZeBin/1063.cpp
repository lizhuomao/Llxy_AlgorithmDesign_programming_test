#include <cmath>
#include <cstdio>

using namespace std;

int main() {
    int n, a, b;
    double maxr = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d%d", &a, &b);
        if (a * a + b * b > maxr) maxr = a * a + b * b;
    }
    printf("%.2lf", sqrt(maxr));
    return 0;
}

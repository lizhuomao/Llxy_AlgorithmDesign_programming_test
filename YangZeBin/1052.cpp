
#include <stdio.h>
/* https://en.wikipedia.org/wiki/Variable-width_encoding */
int main()
{
    char c, symbols[3][10][5] = {0};
    int symbol;
    for(symbol = 0; symbol < 3; symbol++)
    {
        int index = 0;
        while((c = getchar()) != '\n') if(c == '[')
            scanf("%[^]]", symbols[symbol][index++]);
    }
 
    int N, m[5];
    scanf("%d", &N);
    int i;
    for(i = 0; i < N; i++)
    {
    	int i;
        for(i = 0; i < 5; i++)  scanf("%d", m + i);
        if(m[0] > 0 && m[0] <= 10 && *symbols[0][m[0] - 1] && 
            m[1] > 0 && m[0] <= 10 && *symbols[1][m[1] - 1] && 
            m[2] > 0 && m[0] <= 10 && *symbols[2][m[2] - 1] && 
            m[3] > 0 && m[0] <= 10 && *symbols[1][m[3] - 1] && 
            m[4] > 0 && m[0] <= 10 && *symbols[0][m[4] - 1])
            printf("%s(%s%s%s)%s\n", symbols[0][m[0] - 1], symbols[1][m[1] - 1], 
                symbols[2][m[2] - 1], symbols[1][m[3] - 1], symbols[0][m[4] - 1]);
        else
            puts("Are you kidding me? @\\/@");
    }
 
    return 0;
}


#include <stdio.h>

int ackermann(int m, int n)
{
    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return ackermann(m - 1, 1);
    } else if (m > 0 && n > 0) {
        return ackermann(m - 1, ackermann(m, n - 1));
    } else {
        printf("Invalid input\n");
        return -1;
    }
}

int main()
{
    int m,n;
    scanf("%D %d",&m,&n);
    int result = ackermann(m, n);
    printf("Ackermann(%d, %d) = %d\n", m, n, result);
    return 0;
}

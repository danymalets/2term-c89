#include <stdio.h>
#include <math.h>

#define abs(x) ((x)>0?(x):(-(x)))

int main(int argc, const char * argv[]) {
    int n = 0, b;
    long double x, e, left, rigth, a;
    printf("Enter x, e:\n");
    scanf("%Lf %Lf",&x, &e);
    if (e <= 0 || abs(x) > 10){
        printf("Error!\n");
        return 0;
    }
    left = sin(x);
    rigth = 0;
    a = x;
    b = 1;
    while (abs(left - rigth) >= e){
        
        if (n % 2 == 0) rigth += (double)a / b;
        else rigth -= (double)a / b;
        /*printf("%Lf %Lf\n",left, rigth);*/
        n++;
        if (n == 10 || abs(a) > 10000000){
            printf("Error!\n");
            return 0;
        }
        a *= x * x;
        b *= 2 * n * (2 * n + 1);
        
    }
    printf("n = %d\n", n - 1);
    printf("left = %Lf\n", left);
    printf("rigth = %Lf\n", rigth);
    return 0;
}

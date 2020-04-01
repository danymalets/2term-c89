#include <stdio.h>

#define max(x,y) ((x)>(y)?(x):(y))

int get(int x){
    int res = 0;
    while (x > 0){
        res += x % 10;
        x /= 10;
    }
    return res;
}

int main(int argc, const char * argv[]) {
    char c[(int)1e6];
    int i = 0, sum1 = 0, sum2 = 0;
    printf("Enter a (double, length < 10^6):\n");
    scanf("%s", c);
    while (c[i] != 0 && c[i] != '.'){
        if (c[i] < '0' || c[i] > '9'){
            printf("Error!\n");
            return 0;
        }
        sum1 += c[i] - '0';
        i++;
    }
    if (c[i] != 0) i++;
    while (c[i] != 0){
        if (c[i] < '0' || c[i] > '9'){
            printf("Error!\n");
            return 0;
        }
        sum2 += c[i] - '0';
        i++;
    }
    printf("Max sum = %d\n",max(sum1, sum2));
    return 0;
}

#include <stdio.h>

int bis(int x, int m){
    return x|m;
}

int bic(int x, int m){
    return x&(~m);
}

int bool_or(int x, int y){
    return bis(x, y);
}

int bool_and(int x, int y){
    return bic(x, ~y);
}

int bool_xor(int x, int y){
    return bis(bic(x, y), bic(y, x));
}

void main(){

    int x, y, res;
    printf("Input:\n");
    scanf("%d", &x);
    scanf("%d", &y);
    res = bool_xor(x,y);
    printf("%d\n%d\n", res, x^y);
}


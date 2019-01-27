#include <stdio.h>
void inplace_swap(int *x, int *y){
    *y = *x^*y;
    *x = *x^*y;
    *y = *x^*y;
}

void reverse_array(int a[], int cnt){
    int first, last;
    for (first=0, last=cnt-1; first<last; first++, last--){
        //The reason that o appears in array is that inplace_swap() uses xor and *a^*a==0
        //To eleminate the problem, just set condition as first<last
        inplace_swap(&a[first], &a[last]);

    }
}

void main(){
    int a[5] = {1,2,3,4,5};
    int i;
    reverse_array(a, 5);
    for (i=0; i<5; i++)
        printf("%d",a[i]);
    printf("\n");
}
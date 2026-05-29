#include <stdio.h>

int main() {

    int a[] = {1,0,2,0,4,0,5};
    int n = sizeof(a)/sizeof(a[0]);

    int i = 0;
    int j = 0;

    while(j < n){
       if(a[j] != 0){
           int temp = a[i];
           a[i] = a[j];
           a[j] = temp;
           i++;
       }
       j++;
    }

    i = 0;
    while(i < n){
        printf("%d ", a[i]);
        i++;
    }
    printf("\n");

    return 0;
}

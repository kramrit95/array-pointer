#include <stdio.h>

int main() {
int arr[5]={1,5,3,6,8};
int *ptr=arr;
printf ("%d",*ptr+ptr[4]);
    return 0;
}

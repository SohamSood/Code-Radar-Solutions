// Your code here...
#include <stdio.h>
#include <stdlib.h>

int rotate (int *myarr,int a) {
    int temp = myarr[a-1];
    for(int i = 1;i<a-1;i++) {
        myarr[i] = myarr[i+1];
    }
    myarr[0] = temp;
}
int main() {
    int a;
    int *b = malloc(a*4);
    for(int i = 0;i<a;i++) {
        scanf("%d",&myarr[i]);
    }
    for(int j = 0;j<a;j++) {
        rotate(myarr,a);
    }
}
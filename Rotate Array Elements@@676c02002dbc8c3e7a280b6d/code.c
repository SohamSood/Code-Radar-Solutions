// Your code here...
#include <stdio.h>
#include <stdlib.h>
int rotate(int *myarr,int a) {
    int *myarr2 = malloc(a*(sizeof(int)));
    myarr2[0] = myarr[a-1];
    myarr2[a-1] = myarr[a-2];
    for(int i = 1;i<a-1;i++) {
        myarr2[i] = myarr[i+1];
    }
    for(int i = 1;i<a;i++) {
        myarr[i] = myarr2[i]
    }

}

int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));  
    for(int i = 0;i<a;i++) {
        scanf("%d",&myarr[i]);
    }
    int c = 0;
    scanf("%d",&c);
    for(int i = 0;i<c;i++) {
        rotate(myarr,a);
    }
}
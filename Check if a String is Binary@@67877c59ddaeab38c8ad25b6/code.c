// Your code here...
#include <stdio.h>
#include <string.h>
int main() {
    int myarr[100];
    int e = 0;
    for(int i = 0;i<100;i++) {
        if (!(myarr[i].isdigit())) {
            e++;
        }
    }
    if(e == 0) {
        printf("Yes");
    } else  {
        printf("No");
    }
}
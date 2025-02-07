#include <stdio.h>
int prime(int num) {
    if(a == 0 ||a == 1|| a == 2) {
        printf("1");
    } else {
        int e = 0;
        for(int i = 2;i<num;num++) {
            if(i % num == 0) {
                e++;

            }
        }
        if(e == 0) {
            printf("1");
        } else {
            printf("0");
        }
    }
}
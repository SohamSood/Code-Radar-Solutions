#include <stdio.h>

int main() {
    int a;
    scnaf("%d",&a);
    for(int i = 0;i<a;i++) {
        for(int j = i;j<a;j++) {
            printf(" ");
        }
    }
}
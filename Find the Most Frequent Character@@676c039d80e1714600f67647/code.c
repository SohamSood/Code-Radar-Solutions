#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    fgets(a,sizeof(a),stdin);
    int maxx=0;
    char num;
    for(int i = 0;i<100;i++) {
        int max = 0;
        for(int j=0;j<100;j++) {
            if((i!=j) && (a[i] == a[j]) {
                max++;
            }
        }
        if(max>maxx) {
            maxx = max;
            num = a[i];
        }
    }
    printf("%c",char);
}
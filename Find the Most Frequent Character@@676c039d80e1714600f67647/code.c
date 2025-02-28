#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    fgets(a,sizeof(a),stdin);
    int maxx=0;
    char num;
    for(int i = 0;i<100;i++) {
        int count = 0;
        for(int j=0;j<100;j++) {
            if((i!=j) && (a[i] == a[j])) {
                count++;
            }
        }
        if(count>maxx) {
            maxx = count;
            num = a[i];
        }
    }
    printf("%c",num);
}
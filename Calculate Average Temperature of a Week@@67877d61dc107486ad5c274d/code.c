// Your code here...
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student {
    
    char name[100];
    float temp;
};
int main() {
    int a = 7;
    
    struct student *students = (struct student*)malloc(a*sizeof(struct student));
    for(int i = 0;i<a;i++) {
        scanf("%s %f",students[i].name,&students[i].temp);
    }
    float count=0;
    for(int i = 0;i<a;i++) {
        count = count + students[i].temp;
    }
    printf("Average Temperature: %.2f",(count)/a);
}
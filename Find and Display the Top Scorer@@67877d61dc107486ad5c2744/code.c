// Your code here...
#include <stdio.h>
#include <stdlib.h>
struct student {
    int a;
    char name[100];
    float b;
};
int main() {
    int c;
    scanf("%d",&c);
    struct student *students = (struct student *)malloc(c* sizeof(struct student));
    for(int i= 0;i<c;i++) {
        scanf("%d %s %f",&students[i].a,students[i].name,&students[i].b);
    }
    int p = 0;
    int r = students[0].b;
    for(int i =0;i<c;i++) {
        if(students[i].b>r) {
            r = students[i].b;
            p = i;
        }
    }
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f \n",students[p].a,students[p].name,students[p].b);
}
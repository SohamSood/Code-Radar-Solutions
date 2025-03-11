// Your code here...
#include <stdio.h>
#include <stdlib.h>
struct student {
    int a;
    char b[100];
    float c;
};
int main() {
    int d;
    scanf("%d",&d);
    struct student *students = (struct student*)malloc(d*sizeof(struct student));
    for(int i = 0;i<d;i++) {
        scanf("%d %s %f",&students[i].a,students[i].b,&students[i].c);
    }
    int e ;
    int f = -1;
    scanf("%d",&e);
    for(int i = 0;i<d;i++) {
        if(students[i].a == e) {
            f == i;
            printf("Roll Number: %d,Name: %s, Marks: %.2f",students[f].a,students[f].b,students[f].c);
        }
        
    }
    // if(f == -1) {
    //     printf("Student not found");
    // } else {
    //     printf("Roll Number: %d,Name: %s, Marks: %.2f",students[f].a,students[f].b,students[f].c);
    // }
}
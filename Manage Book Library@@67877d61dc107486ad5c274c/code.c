// Your code here...
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student {
    char rollno[100];
    char name[100];
    float marks;
};
int main() {
    int a;
    scanf("%d",&a);
    struct student *students = (struct student*)malloc(a*sizeof(struct student));
    for(int i = 0;i<a;i++) {
        scanf("%s %s %f",students[i].rollno,students[i].name,&students[i].marks);
    }
    float b;
    scanf("%f",&b);
    printf("Books above pricec %.2f \n",b);
    for(int i = 0;i<a;i++) {
        if(students[i].marks > b) {
            printf("Title: %s, Author: %s, Price: %.2f \n",students[i].rollno,students[i].name,students[i].marks);
        }
    }
}
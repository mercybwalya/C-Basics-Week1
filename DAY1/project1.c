







#include<stdio.h>

int main()
     {
    char name[100];
    int age;
    char hobby[30];#
    printf("enter your name: ");
    scanf("%s",&name);
    printf("enter your age: ");
    scanf("%d",&age);
    printf("what's your favorite hobby:");
    scanf("%s", &hobby);
    printf("hello %s! You are %d years old your favorite hobby is coding.\n", name, age, hobby);
return 0;
}



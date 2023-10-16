#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char name[25]; // bytes
    int age;

    printf("What's your name?\n");
    // scanf("%s", &name);

    printf("What's your surname?\n");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    printf("How old are you?");
    scanf("%d", &age);

    printf("Hello %s, how are you?\n", name);
    printf("You are %d years old.", age);
    return 0;
}
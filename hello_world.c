#include <stdio.h>
#include <stdlib.h>

int main() {
    char helloworld[] = "Hello World!";
    char name[20];

    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("Your name is %s", name);

    printf("%s", helloworld);
}
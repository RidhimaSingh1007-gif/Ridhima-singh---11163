#include <stdio.h>
#include <string.h>

int main() {
    char s1[50] = "Hello";
    char s2[50] = "World";

    printf("Length of s1: %lu\n", strlen(s1));
    strcpy(s2, s1);
    printf("After strcpy, s2: %s\n", s2);

    strcat(s1, s2);
    printf("After strcat: %s\n", s1);

    printf("String compare: %d", strcmp(s1, s2));

    return 0;
}

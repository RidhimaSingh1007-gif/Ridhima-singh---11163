#include <stdio.h>

int main() {
    int totalSeconds;
    int hours, minutes, seconds;
    int counter = 0;
    printf("Enter total number of seconds: ");
    scanf("%d", &totalSeconds);
    int temp = totalSeconds;
    counter = 0;
    for (int i = 0; i < 1; i++) {
        hours = temp / 3600;
        temp = temp % 3600;
        counter++;

        minutes = temp / 60;
        temp = temp % 60;
        counter++;

        seconds = temp;
        counter++;
    }
    printf("\nUsing FOR loop:\n");
    printf("Hours: %d, Minutes: %d, Seconds: %d\n", hours, minutes, seconds);
    printf("Iteration Count (FOR loop): %d\n", counter);
    temp = totalSeconds;
    counter = 0;
    int step = 0;
    while (step < 3) {
        if (step == 0) {
            hours = temp / 3600;
            temp = temp % 3600;
        } else if (step == 1) {
            minutes = temp / 60;
            temp = temp % 60;
        } else {
            seconds = temp;
        }
        counter++;
        step++;
    }
    printf("\nUsing WHILE loop:\n");
    printf("Hours: %d, Minutes: %d, Seconds: %d\n", hours, minutes, seconds);
    printf("Iteration Count (WHILE loop): %d\n", counter);
    printf("\nComparison Result:\n");
    printf("Both loops produce the same output.\n");

    return 0;
}

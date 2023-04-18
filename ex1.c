#include <stdio.h>

int main() {
    // Variable declaration
    float n1, n2, average;

    // Data input
    printf("Hello!\nLet's calculate your average score, and we'll see if your're approved or not.\n");
    printf("Type down your first score: ");
    scanf("%f", &n1);
    printf("Now, type down your second grade: ");
    scanf("%f", &n2);

    // Processing
    average = (n1+n2)/2;

    // Data output
    if (average >= 6.0) {
        printf("Congrats! You're approved! Your average score is %.2lf!\n", average);
        printf("     1st grade: %.2f      ||    2nd grade: %.2f", n1, n2);
    } else {    // average < 6.0
        printf("Unfortunately you're not approved. Your average score is %.2f\n", average);
        printf("     1st grade: %.2f      ||    2nd grade: %.2f", n1, n2);
    }
}
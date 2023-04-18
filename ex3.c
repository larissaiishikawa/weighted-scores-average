// Weighted average of the individual scores

# include <stdio.h>
# include <math.h>

int main() {
    // Variable declaration
    double a, b, c; // Three decimals
    double ra, rb, rc; // Results of the weighted scores
    double w1, w2, w3, resW; // Score weight 
    double res; // Result w/ weighted average

    // Data input
    printf("Hello!\nType down your 1st grade: ");
    scanf("%lf", &a);
    printf("Then, type its weight: ");
    scanf("%lf", &w1);
    printf("Now type down your 2nd grade: ");
    scanf("%lf", &b);
    printf("Then, type its weight: ");
    scanf("%lf", &w2);
    printf("Finally, type down your 3rd grade: ");
    scanf("%lf", &c);
    printf("Then, type its weight: ");
    scanf("%lf", &w3);

    // Processing
    ra = a*w1;
    rb = b*w2;
    rc = c*w3;
    resW = w1+w2+w3;
    res = (ra+rb+rc)/resW;

    /*
    // No scanf weight version
    ra = a*2;
    rb = b*3;
    rc = c*5;
    res = (ra + rb + rc)/10;
    */
    

   /*
   // Simplified version (less variables)
    a = a*2;
    b = b*3;
    c = c*5;
    res = (a+b+c)/10;
   */
    

    // Data output
    printf("---------------------------------------------------\n");
    printf("Your scores are:\n%.2f     |   %.2f   |   %.2f   \n", a, b, c);
    printf("Weighted scores:\n%.2f    |   %.2f   |   %.2f   \n", ra, rb, rc);
    printf("Weighted average of the individual scores: %.2f\n", res);
    printf("---------------------------------------------------");

}
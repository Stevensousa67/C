// Steven Sousa / Procedural Programming / Homework 6.6 / 4Cs / 5-4-21

#include <math.h>
#include <stdio.h>

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = (b*b) - (4 * a * c);

    if (discriminant > 0) {
        root1 = (2 * c)/(-b + sqrt(discriminant));
        root2 = (2 * c)/(-b - sqrt(discriminant));
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }

    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        root2 = root1;
        printf("root1 = root2 = %.2lf;", root1);
    }

    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf + %.2lf i and root2 = %.2lf - %.2lf i", realPart, imagPart, realPart, imagPart);
    }
    return 0;
}
#include <stdio.h>

const char*
bmi(int weight, double height) {
    double bmi = weight / (height * height);
    if (bmi <= 18.5) {
        return "Underweight";
    } else if (bmi <= 25) {
        return "Normal";
    } else if (bmi <= 30) {
        return "Overweight";
    }
    return "Obese";
}

int
main() {
    printf("%s\n", bmi(50, 1.80));  /* Underweight */
    printf("%s\n", bmi(80, 1.80));  /* Normal */
    printf("%s\n", bmi(90, 1.80));  /* Overweight */
    printf("%s\n", bmi(110, 1.80)); /* Obese */
    printf("%s\n", bmi(50, 1.50));  /* Normal */
}

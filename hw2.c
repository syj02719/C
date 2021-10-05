#include <stdio.h>

int main(void)
{
    float kilo = 0.0;
    printf("Please enter kilometers: ");
    scanf("%f", &kilo);
    
    printf("%f km is equal to %.1f miles.", kilo, kilo / 1.609);
    
    return 0;
}

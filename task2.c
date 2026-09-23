#include <stdio.h> 

int main() {
    double temp;
    char scale;
    char convert;
    double conv_temp;
    double temp_celsius;



    while (1) {

        printf("Enter a temperature value: ");
        int n = scanf("%lf", &temp);
        if (n != 1) {
            printf("Invalid input\n");
            while (getchar() != '\n') {
                continue;
            }
            continue;
        }

        printf("Enter the original scale (C, F, or K): ");
        scanf(" %c", &scale);

        printf("Enter the scale to convert to (C, F, or K): ");
        scanf(" %c", &convert);

        if (convert == 'F') {
            if (scale == 'F') {
                conv_temp = temp;
            }
            else if (scale == 'C') {
                conv_temp = temp * 9/5 +32;
            } 
            else if (scale == 'K') {
                conv_temp = (temp - 273.15) * 9/5 + 32;
            } else {
                printf("Invalid input.\n");
                continue;
            }

        }
        else if (convert == 'C') {
            if (scale == 'F') {
                conv_temp = (temp - 32) * 5/9;
            } else if (scale == 'C') {
                conv_temp = temp;
            } else if (scale == 'K') {
                conv_temp = temp - 273.15;
            } else {
                printf("Invalid input.\n");
                continue;
            }    
        }
        else if (convert == 'K') {
            if (scale == 'F') {
                conv_temp = (temp - 32) * 5/9 + 273.15;
            } else if (scale == 'C') {
                conv_temp = temp + 273.15;
            } else if (scale == 'K') {
                conv_temp = temp;
            } else {
                printf("Invalid input.\n");
                continue;
            }    
        } else {
            printf("Invalid input.\n");
            continue;
        }
        printf("Converted temperature: %lf %c\n", conv_temp, convert);
        if (scale == 'C') {
            temp_celsius = temp;
        } else if (scale == 'F') {
            temp_celsius = (temp - 32) * 5/9;
        } else if (scale == 'K') {
            temp_celsius = temp - 273.15;
        }
        printf("Temperature category: ");
        if (temp_celsius < 0) {
            printf("Freezing\n");
            printf("Weather advisory: Don't go outside!\n");
        } else if (0 <= temp_celsius && temp_celsius < 10) {
            printf("Cold\n");
            printf("Weather advisory: Wear a jacket!\n");
        } else if (10 <= temp_celsius && temp_celsius < 25) {
            printf("Comfortable\n");
            printf("Weather advisory: Enjoy the weather!\n");
        } else if (25 <= temp_celsius && temp_celsius < 35) {
            printf("Hot\n");
            printf("Weather advisory: Stay Hydrated!\n");
        } else {
            printf("Extreme Heat\n");
            printf("Weather advisory: Stay indoors!\n");
        }
    }
    return 0;
}
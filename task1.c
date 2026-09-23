#include <stdio.h>

int main() {
    int score;


    while (1) {
        printf("Enter the NFL score (Enter 1 to stop): ");
        scanf("%d", &score);
        if (score == 1) break;

        printf("Possible combinations of scoring plays if a team's score is %d:\n", score);

        for (int n8 = 0; n8 * 8 <= score; n8++) {
            int remaining_after_8 = score - n8 * 8;
            for (int n7 = 0; n7 * 7 <= remaining_after_8; n7++){
                int remaining_after_7 = remaining_after_8 - n7 * 7;
                for (int n6 = 0; n6 * 6 <= remaining_after_7; n6++){
                    int remaining_after_6 = remaining_after_7 - n6 *6;
                    for (int n3 = 0; n3 * 3 <= remaining_after_6; n3++){
                        int remaining_after_3 = remaining_after_6 - n3 *3;
                        if (remaining_after_3 % 2 == 0) {
                            int n2 = remaining_after_3 / 2;
                            printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", n8, n7, n6, n3, n2);
                        }
                    }
                }
            }

        }
    }
    return 0;
}
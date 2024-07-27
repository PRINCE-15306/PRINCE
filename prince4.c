#include <stdio.h>

int main() {
    double total_population = 1441981744;
    double women_percentage = 48.4;
    double literacy_rate_total = 85.95;
    double literacy_rate_men = 80.95;
    double literacy_rate_women = 62.84;

    double women_population = total_population * (women_percentage / 100);
    double men_population = total_population - women_population;

    double literate_women = women_population * (literacy_rate_women / 100);
    double literate_men = men_population * (literacy_rate_men / 100);

    double illiterate_women = women_population - literate_women;
    double illiterate_men = men_population - literate_men;

    printf("Illiterate Women: %.0lf\n", illiterate_women);
    printf("Illiterate Men: %.0lf\n", illiterate_men);

    return 0;
}
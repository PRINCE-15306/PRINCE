#include <stdio.h>
int main() {

    int raman_bungalow = 12000000;
    int raman_plot = 6000000;
    int raman_car = 3000000;
    int raman_total = raman_bungalow + raman_plot + raman_car;

    int suman_apartment = 11000000;
    int suman_hotel = 8000000;
    int suman_car = 8000000;
    int suman_total = suman_apartment + suman_hotel + suman_car;

    if (raman_total > suman_total)
    {
        printf("Raman have the greater total wealth.\n");
    } 
    else if (suman_total > raman_total)
    {
        printf("Suman have the greater total wealth.\n");
    } 
    else
    {
        printf("Raman and Suman are equally wealthy.\n");
    }

    return 0;
}

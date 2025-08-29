#include <stdio.h>
#include <math.h>

int main(){

    float temperatura;
    char simbolo_grados = 248;

    printf("Ingrese el valor de la temperatura :\n\n");
    scanf("%f",&temperatura);
    //Celsius a otras unidades
    float celcius_a_fahrenheit = temperatura * 1.8 + 32 ;
    float celcius_a_kelvin = temperatura + 273.15 ;
    // Fahrenheit a otras unidades
    float fahrenheit_a_celcius = (temperatura-32)*(5.0 / 9.0);
    float fahrenheit_a_kelvin = (temperatura + 459.67) * (5.0 / 9.0);
    //Kelvin a otras unidades
    float kelvin_a_celcius = temperatura-273.15;
    float kelvin_a_fahrenheit = (temperatura-273.15) * 1.8 + 32;

    printf("\n\n\tSi el valor ingresado esta representado en grados %cC, entonces :\n", simbolo_grados);
    printf("\tTemperatura en %cF : %.2f\n", simbolo_grados, celcius_a_fahrenheit);
    printf("\tTemperatura en %cK : %.2f\n", simbolo_grados, celcius_a_kelvin);


    printf("\n\tSi el valor ingresado esta representado en grados %cF, entonces :\n", simbolo_grados);
    printf("\tTemperatura en %cC : %.2f\n", simbolo_grados, fahrenheit_a_celcius);
    printf("\tTemperatura en %cK : %.2f\n", simbolo_grados, fahrenheit_a_kelvin);

    printf("\n\tSi el valor ingresado esta representado en grados %cK, entonces :\n", simbolo_grados);
    printf("\tTemperatura en %cF : %.2f\n", simbolo_grados, kelvin_a_fahrenheit);
    printf("\tTemperatura en %cC : %.2f\n\n", simbolo_grados, kelvin_a_celcius);

}

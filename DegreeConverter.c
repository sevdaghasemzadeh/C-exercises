#include <stdio.h>
#include<math.h>

double CTF (double celcius);

int main()
{
    double celcius,fahrenheit;
    
    printf("Write a degree in celcius");
    scanf("%lf",&celcius);
    
    fahrenheit = CTF(celcius);
    
    printf("result is: %lf",fahrenheit);
    
}

double CTF (double celcius)
{
    return (celcius*1.8+32);
}

#include <stdio.h>


int main()
{
    float firstNumer;
    float secondNumer;

    printf("Digite primer numero: ");
    scanf("%f", &firstNumer);
    printf("Digite segudo numero: ");
    scanf("%f", &secondNumer);

    int resultSum= firstNumer+secondNumer;
    int resultRest= firstNumer-secondNumer;
    int resultMult= firstNumer*secondNumer;
    float resultDiv= firstNumer/secondNumer;
    
    printf("Resultado suma %d", resultSum);
    printf("\nResultado resta %d", resultRest);
    printf("\nResultado multiplicacion %d", resultMult);
    printf("\nResultado division %f", resultDiv);
    


    return 0;
}

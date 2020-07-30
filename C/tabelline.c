#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //Variabili
    int n;              //Var Input
    int counter = 0;    //Var output - lavoro
    int risultato;      //Var Output

    printf("Inserire un valore di ritorno per la tabellina: ");
    scanf("%d", &n);
    
    for (counter = 0; counter <= 10; counter++)     //Calcolatore di tabelline
    {
        risultato = n * counter;
        printf("%d x %d = %d\n", n, counter, risultato);
    }
}

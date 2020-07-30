#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    //Variabili
    char lettera;   //Carattere dell'utente
    char vocali[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int i = 0;      //Var output - lavoro

    printf("Inserire una lettera: ");
    scanf("%c", &lettera);

    for (i = 0; i <= 10; i++)
    {
        if (lettera == vocali[i])
        {
            printf("La lettera inserita %c e' una vocale.", lettera);
            break;
        }
        else
        {
            printf("La lettera inserita %c non e' una vocale.", lettera);
            break;
        }
        
    }
}
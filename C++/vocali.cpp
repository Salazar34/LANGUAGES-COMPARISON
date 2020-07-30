#include <iostream>

using namespace std;

int main()
{
    //Variabili
    char lettera;   //Carattere dell'utente
    char vocali[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int i = 0;      //Var output - lavoro

    cout << "Inserire una lettera: ";
    cin >> lettera;

    for (i = 0; i <= 10; i++)
    {
        if (lettera == vocali[i])
        {
            cout << "La lettera inserita " << lettera << " e' una vocale.";
            break;
        }
        else
        {
            cout << "La lettera inserita " << lettera << " non e' una vocale.";
            break;
        }
        
    }
}

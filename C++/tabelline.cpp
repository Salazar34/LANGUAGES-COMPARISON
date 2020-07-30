#include <iostream>

using namespace std;

int main()
{
    //Variabili
    int n;              //Var Input
    int counter = 0;    //Var output - lavoro
    int risultato;      //Var Output

    cout << "Inserire un valore di ritorno per la tabellina: ";
    cin >> n;

    for (counter = 0; counter <= 10; counter++)     //Calcolatore di tabelline
    {
        risultato = n * counter;
        cout << n << " x " << counter << " = " << risultato << endl;
    }
}

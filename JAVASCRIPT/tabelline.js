//Variabili
var n;              //Var in
var counter = 0;    //Var output -> counter - lavoro
var risultato;      //Var out

n = window.prompt('Inserire un valore di ritorno per la tabellina: ');
console.log('Tabellina del numero ' + n)

for (counter = 0; counter <= 10; counter++)
{
    risultato = n * counter;
    console.log(n + ' x ' + counter + ' = ' + risultato)
}
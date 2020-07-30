var vocali = ['a', 'i', 'e', 'o', 'u', 'A', 'E', 'I', 'O', 'U'];
var lettera;
var i;

lettera = window.prompt('Inserire una lettera: ');

for (i = 0; i <= 10; i++)
{
    if (lettera == vocali[i])
    {
        console.log('La lettera inserita ' + lettera + 'è una vocale.');
        break;
    }
    else
    {
        console.log('La lettera inserita è una consonante.');
        break;
    }
}
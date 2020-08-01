# LANGUAGE COMPARISON
The number of programmers in the world is constantly growing; then, we have a probelm. They have to choose what language starts with. With this video, I want to share with all of you, my personal consideration about 4 most knowed languages:
* Python
* C
* C++
* JavaScript

All of this languages are used for different things, but, at the same time, they cna be used together to build something fantastic.

## TABLE IN C
```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //Variables
    int n;              //Var Input
    int counter = 0;    //Var output - work
    int result;      //Var Output

    printf("Place a return value for the table: ");
    scanf("%d", &n);
    
    for (counter = 0; counter <= 10; counter++)     //Table algorithm
    {
        result = n * counter;
        printf("%d x %d = %d\n", n, counter, result);
    }
}
```
As you can see, C language offer us a very simple syntax & efficient memory usage for this programm. Now, let's go to checkout C++

## TABLE IN C++
```c++
#include <iostream>

using namespace std;

int main()
{
    //Variables
    int n;              //Var Input
    int counter = 0;    //Var output - work
    int result;      //Var Output

    cout << "Place a return value for the table ";
    cin >> n;

    for (counter = 0; counter <= 10; counter++)     //Table algorithm
    {
        result = n * counter;
        cout << n << " x " << counter << " = " << result << endl;
    }
}
```
C & C++ are very similiar, but C++ uses a much simple syntax then C. But, C is more efficient than C++ (Memory usage of C is less than meory usage of C++). 

> If you want to learn C++, before learn C and your learn will be very very short, because they're very same.

## TABLE IN PYTHON
```python
n = int(input('Place a return value for the table '))
counter = 0

for counter in range(10):
    counter += 1
    result = n * counter
    print(f'{n} x {counter} = {result}')
```

Python is the most esay language. If you wanna start learn programming, just start with python. Python is pretty similar as English as, so you can easly learn it. 

> If you learn python, the other languages will be very easier for you to learn.

## TABLE IN JAVASCRIPT
```javascript
//Variables
var n;              //Var in
var counter = 0;    //Var output -> counter - work
var result;      //Var out

n = window.prompt('Place a return value for the table: ');
console.log('table of number ' + n)

for (counter = 0; counter <= 10; counter++)
{
    result = n * counter;
    console.log(n + ' x ' + counter + ' = ' + result)
}
```

JavaScript is very similiar and easy as Python as. While learning javascript, learn Python. For you, programming, will be more and more easy.

# VOWEL
In this second comparsion, we're going to analize a programm which return me if a letter inputted by the user, is or not a vowel. The main aspect are arrays. An array is a collection of datas. Arrays are very simple in Python, also in JavaScript, C & C++. But the method we use to access to it, is different for Python. In other languages, we use loops; In Python, we use the special keyboard **in** to check if an element is or not in an array.

## EXAMPLE IN C OF ARRAY ACCESS
``` c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //Array declaration
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    //Iteration var
    int i = 0;

    //Target var
    int target = 7;

    //Access method for the array
    for (i = 0; i <= 10; i++)
    {
        if (target == array[i])
        {
            printf("Element found in the array");
            break;
        }
    }
}
```
Now the Explanation:

1. First, we're going to declare the array **int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}**, the iteration variable **int i = 0** and finally our target for the array **int target = 7**.
1. Now we've declared our variables, we're going to create a loop using i as the iteration var. The condition **i <= 10** it's not casual. The number used is 10, because the lenght of the array is 10. If the lenght was 12, then i have to write **for (i = 0; i <= 12; i++)**.
1. Finally we're going to create a if condtion to check if out target is equal to **array[i]**; This means that every iteration, **i** increment it self by 1; when **i = 7**, the condition is **True**, and the loop stops.

Now let's check this in Python

## EXAMPLE IN PYTHON OF ARRAY ACCESS
```python
array = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
target = 7

if target in array:
    print("Element found in the array")
```
As we can see, the diffence is big. In C, we used *24* lines os code. In Python, we used only *5* lines. If we want to implement the previous method in Python, we can do this.

```python
array = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
target = 7
i = 0

for i in range(10):
    i += 1
    if (target == array[i]):
        print("Element found in the array.)
```

The method is the same, and the lines of code are minus.

# VOWELS IN C
```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //Variables
    char letter;   //User char
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int i = 0;      //Var output - work
    printf("Insert a letter: ");
    scanf("%c", &letter);

    for (i = 0; i <= 10; i++)
    {
        if (letter == vowels[i])
        {
            printf("The letter insert %c is a vowel ", letter);
            break;
        }
        else
        {
            printf("The letter insert %c is not a vowel", letter);
            break;
        }      
    }
}
```
As we can see, we used the method explained before with the for loop and the iteration var. This is the most performant algorithm for searching into an array.

# VOWELS IN C++
```c++
#include <iostream>

using namespace std;

int main()
{
    //Variables
    char letter;   //User char
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int i = 0;      //Var output - work
    cout << "Insert a letter: ";
    cin >> letter;

    for (i = 0; i <= 10; i++)
    {
        if (letter == vowels[i])
        {
            cout << "The letter insert " << lettera << " is a vowel.";
            break;
        }
        else
        {
            cout << "The letter insert " << lettera << " Is not a vowel.";
            break;
        }        
    }
}
```
The programm is the same as c programm. But this time, the algorithm is less performant, becuase we're using C++ and not C, which is more performant.

# VOWELS IN PYTHON
```python
vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'}
letter = input('Insert a letter: ')

if letter in vowels:
    print(f'The letter insert {letter} is a vowel.')

else:
    print(f'The letter insert {letter} is not a vowel.')
```
This time, we used a different algorithm, which is a shortcut that we can use in Python, only using the keyword **in**. The programm has fewer lines of code than others and it's more simple.

# VOWELS IN JAVASCRIPT
```javascript
var vowels = ['a', 'i', 'e', 'o', 'u', 'A', 'E', 'I', 'O', 'U'];
var letter;
var i;

lettera = window.prompt('Insert a letter ');

for (i = 0; i <= 10; i++)
{
    if (letter == vowels[i])
    {
        console.log('LThe letter insert ' + letter + 'is a vowel.');
        break;
    }
    else
    {
        console.log('The letter insert' + letter + 'is not a vowel.');
        break;
    }
}
```
This programm is a middle ground of C and C++ & Python.The algorithm used is the same for C and C++, but the syntax is very simple and the lines of code are fewer than C & C++.

# CONCLUSIONS
We've seen 4 important programming languages. every single language has something that other doesn't have. Now, the question is: **What is the best programming language?**. 

> *There isn't one. All of this programming languages are very very important. Every programmer should know all of this, becuase the single power of them, is not effective, but together they can be very veru strong. Using all of these programming langugeas implemented is the most important thing to build something of concrete and performant. Python is used for building the behind algorithms of the programm. JavaScript is used to build the functions of the programm. Finally, C & C++ are used for the API & GUI, but C it can also be used for the web server. Remember, the much you know, is the much you do.*

> *sal.code*
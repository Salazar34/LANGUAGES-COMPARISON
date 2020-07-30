vocali = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'}
lettera = input('Inserire una lettera: ')

if lettera in vocali:
    print(f'La lettera inserita {lettera} è una vocale.')

else:
    print(f'La lettera inserita {lettera} è una consonante.')
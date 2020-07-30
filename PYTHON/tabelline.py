n = int(input('Inserire un valore di ritorno per la tabellina: '))
counter = 0

for counter in range(10):
    counter += 1
    risultato = n * counter
    print(f'{n} x {counter} = {risultato}')
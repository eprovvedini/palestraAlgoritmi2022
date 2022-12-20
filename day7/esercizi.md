# Esercizi
## Esercizio 1

Creare un programma che
- inizializzi un array arr1 dal file di testo "input1.txt"

Il file è così strutturato:

Nella prima riga: il numero di elementi da inserire, minore o uguale a 100

Nella seconda riga: n numeri, cioè quelli da inserire

Esempio:

5

0 3 4 6 2

- chieda un numero x all'utente

- crei un nuovo vettore arr2 che abbia come elementi gli stessi elementi di arr1, ma aumentati di x

Esempio

arr1 = {0, 3, 4, 6, 2}

x = 4

arr2 = {12, 7, 8, 10, 6}

- stampi arr2

## Esercizio 2

Creare un programma che
- Inizializzi due array dal file di testo "input2.txt"

Il file è così strutturato:

Prima riga: n1 (numero di elementi del primo array, minore di 100)

Seconda riga: n1 numeri (numeri da inserire nel primo array)

Terza riga: n2 (numero di elementi del secondo array, minore di 100)

Quarta riga: n2 numeri

Esempio:

4

1 2 5 3

7

8 3 0 2 5 1 8

- Crei un terzo array che sia la somma dei due array precedenti
Nel caso di esempio il terzo array sarà
9 5 5 5 5 1 8
ATTENZIONE: un array potrebbe avere più elementi dell'altro!!!

## Esercizio 3

Vogliamo creare un programma che permetta all'utente di gestire un'array facendo le seguenti operazioni:
1. Inserire un elemento alla fine dell'array
Esempio: il mio array è {1,3,5}, se l'utente vuole inserire 7, l'array deve diventare {1,3,5,7}
NB: se l'array è già pieno, non inserire nulla
	
2. Inserire un elemento in una certa posizione dell'array, decisa dall'utente
Esempio: il mio array è {1,3,5,7}
L'utente vuole inserire 2 in posizione 2
L'array deve diventare {1,3,2,5,7}
Notare che abbiamo spostato 5 e 7 di un posto a destra
	
3. cancellare un elemento dall'array, senza lasciare "buchi"
Esempio: l'array è {1,3,2,5,7}
Voglio cancellare l'elemento in posizione 4
L'array deve diventare {1,3,2,7}
Notare che abbiamo spostato il 7 di un posto a sinistra
	
4. stampare l'array
	
5. terminare il programma

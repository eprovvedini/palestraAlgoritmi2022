# L'iterazione
A volte vogliamo che un'operazione venga ripetuta più volte.
Abbiamo diversi costrutti per fare ciò.

## Ciclo while
Il ciclo while ripete un'insieme di istruzioni fin quando una certa condizione è vera.
La struttura generale è:
```C++
while(condizione){
    //istruzioni1
}
//istruzioni2
```

1. Si verifica se la condizione è vera.
2a. Se è vera, si eseguono le istruzioni all'interno del blocco (istruzioni1), poi si torna al punto 1
2b. Se è falsa, si esce dal ciclo, continuando con il resto del codice (istruzioni2)

Esempio: cosa stampa questo pezzo di codice?
```C++
int count = 0;
int N = 20;
while(N<100){
    N = N*2;
    count++;
}
cout << count;
```
NB:
- x++ corrisponde a x=x+1
- x-- corrisponde a x=x-1
- x+=2 corrisponde a x=x+2
- ...

## Ciclo do while
```C++
do{
    //istruzioni1
} while(condizione);
//istruzioni2
```
Come il ciclo while, ma la condizione viene controllata in fondo al ciclo.
Può servire quando vogliamo che il ciclo venga eseguito almeno una volta.

## Ciclo for
```C++
int i;
for(i=0;i<10;i++){
    //istruzioni1
}
//istruzioni2
```

Il for di solito si usa quando sappiamo quante volte vogliamo eseguire il ciclo.
Il ciclo for ha questa struttura:
for(OPERAZIONI INIZIALI; CONDIZIONE; OPERAZIONI FINALI)
- OPERAZIONI INIZIALI: sono operazioni che si eseguono una sola volta, prima che inizi il ciclo vero e proprio. In questo caso si assegna 0 a i
- CONDIZIONE: come nel while, si controlla se la condizione è vera. Se è vera si esegue il ciclo, altrimenti si esce
- OPERAZIONI FINALI: vengono eseguite al termine **di ogni** ciclo

Esempio:
```C++
int i;
for(i=0;i<10;i++){
    cout << i << " ";
}
cout << "fine";
```
1. Si inizializza i a 0
2. La condizione è vera? 0<10 -> Si -> entro nel ciclo
3. Stampo i
4. Eseguo i++
5. La condizione è vera? 1<10 -> Si -> entro nel ciclo
6. Eseguo i++
7. La condizione è vera? 2<10 -> Si -> entro nel ciclo
8. ...
9. La condizione è vera? 10<10 -> No -> esco dal ciclo
10. Stampo "fine"

## Esercizi

1. Scrivere un programma che stampi i numeri da 100 a 1 inclusi
2. Scrivere un programma che dica se un numero inserito da tastiera è primo (un numero è primo se è divisibile solo per sè stesso e 1. Approfondimento [qui](https://it.wikipedia.org/wiki/Numero_primo).
3. Scrivere un programma che dica quanti divisori ha un numero inserito da tastiera
4. Scrivere un programma che stampi la somma di tutti i numeri da 1 a N, N inserito da tastiera
5. Scrivere un programma che legga un intero N e N numeri interi e ne stampi la somma
6. Scrivere un programma che legga un intero N e N numeri interi e dica quanti numeri primi sono stati inseriti

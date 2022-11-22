# Gli array (o vettori)
## Cos'è un array?

- Tipi di dato semplice: ogni variabile di tipo semplice contiene un solo elemento (int, char, float, double, bool)
- Tipi di dato composto: formati da più elementi, dello stesso tipo o di tipi diversi

L'array, detto anche vettore, è un tipo di dato composto da più elementi dello stesso tipo.
Nell'array gli elementi sono ordinati.

![Array1](https://user-images.githubusercontent.com/94620199/203276942-ebc182aa-e390-4a1d-8ff7-8cf4f5b8dbe2.jpg)

Come vedete, se vediamo una variabile come una singola "scatola", l'array sono delle scatole allineate in fila.
Ogni elemento ha un suo indice, ma attenzione: si parte da 0 e si arriva alla dimensione meno uno.
Quindi se l'array ha 10 elementi, il primo avrà indice 0 e l'ultimo indice 9.

## Codice
### Dichiarazione
Passiamo ora al codice: come si usa un array?
Prima di tutto la dichiarazione. Ricordiamo che dichiarare una variabile significa "creare la scatola" che andrà a contenere i nostri valori.

```C++
int vett1[10]; //creiamo un array di interi chiamato vett1 di 10 elementi
int vett2[3] = {1,2,3}; //creiamo un array di interi chiamato vett2 di 3 elementi, che contiene i numeri 1,2,3
char vett3[4] = {'a','b','c','d'}; //creiamo un array di caratteri chiamato vett3 di 4 elementi, che contiene i caratteri a,b,c,d
```
NB: se nella dichiarazione non diciamo quali elementi ci sono dentro il vettore, come in vett1, saranno messi in automatico numeri a caso

Più in generale:
tipo_di_dato nome_del_vettore[dimensione_del_vettore]

#### Dimensione di un array
Abbiamo per ora scritto la dimensione di un array sempre in numero.
Esiste un secondo metodo: usando le costanti.

Cos'è una costante?
Una costante è una variabile speciale, di cui si decide il valore quando viene dichiarata e non può più essere modificato.

```C++
#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int main(){
  int vett[MAX];
}
```

MAX è una costante che vale 100, quindi il nostro vettore ha 100 elementi.
Di solito si scrivono i nomi delle costanti in maiuscolo. Non è obbligatorio ma è buona pratica per distinguerle dalle variabili normali.

ATTENZIONE!
Abbiamo creato un vettore che ha 100 elementi, ma non siamo obbligati a usarli tutti.
Usiamo le costanti quando non sappiamo in anticipo quanto sarà grande il nostro array.
Per esempio sappiamo che ci serve un array, ma deve decidere l'utente quanti elementi inserirci e sappiamo che non inserirà più di 20 elementi.
Facciamo quindi un array di MAX=20 elementi e poi chiediamo all'utente quanti numeri vuole inserire.
- Se ne vuole inserire 20, tutto l'array verrà riempito
- Se ne vuole inserire 5, useremo solo le prime 5 posizioni per inserire i numeri
- Così via

Che differenza c'è tra usare una costante o un numero per decidere la dimensione dell'array?
Nessuna, ma usare le costanti è molto più consigliato. Immaginate di avere 20 di 100 elementi. Volete poi cambiare la dimensione a 200.
Se avete scritto i numeri a mano, dovrete modificare tutte e 20 le dichiarazioni.
Se avete usato la stessa costante MAX, basterà modificare il valore di MAX a inizio programma.

ATTENZIONE!!!!
Mai usare una variabile come dimensione del vettore.
Questo è severamente proibito:
```C++
  int n = 20;
  int vett[n];
```

### Accedere a un elemento

Immaginiamo di avere un vettore vett di 10 interi:
int vett[10]

Primo elemento: vett[0]
Secondo elemento: vett[1]
...
Decimo elemento: vett[9]

Quindi per prendere in input il terzo elemento scrivo:
cin >> vett[2];
Per stampare il quarto elemento scrivo:
cout << vett[3];

### Iterazione su un vettore

Vediamo il seguente programma che prende in input un vettore, con numero di elementi deciso dall'utente, e poi lo stampa.

```C++
#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int main(){
  int n,i;
  int vett[MAX];
  
  cout << "Quanti elementi vuoi inserire?";
  cin >> n;
  
  //input
  for(i=0;i<n;i++){ //ciclo che va da 0 a n-1, perchè la lunghezza del vettore è n
    cin >> vett[i];
  }
  
  //output
  for(i=0;i<n;i++){
    cout << vett[i];
  }
}
```

NB: se vogliamo essere sicuri che n sia minore di MAX e maggiore di 0, faremo un controllo sull'input, così:

```C++
#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int main(){
  int n,i;
  int vett[MAX];
  
  do{
    cout << "Quanti elementi vuoi inserire?";
    cin >> n;
  } while(n<=0 || n>MAX);
  
  //input
  for(i=0;i<n;i++){ //ciclo che va da 0 a n-1, perchè la lunghezza del vettore è n
    cin >> vett[i];
  }
  
  //output
  for(i=0;i<n;i++){
    cout << vett[i];
  }
}
```

## Per risolvere il nostro quesito della media
```C++
#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int main(){
  int n,i;
  int somma=0;
  int vett[MAX];
  
  cout << "Quanti elementi vuoi inserire?";
  cin >> n;
  
  for(i=0;i<n;i++){
    cin >> vett[i];
    somma = somma + vett[i];
  }
  
  float media = (float)somma/n; //questa cosa si chiama cast, vedi la nota sotto al codice
  int count = 0;
  
  for(i=0;i<n;i++){
    if(vett[i]>media){
      count++;
    }
  }
  
  cout << "Gli elementi maggiori della media sono " << cont;
  
 }
```

## Esercizi
1. Calcolare la somma di 10 elementi inseriti dall'utente (usare ciclo for), salvarli in un array e poi calcolarne la somma
2. Rifare l'esercizio 1, ma questa volta il numero di elementi inseriti viene deciso dall'utente (al massimo 100)
3. Dati N numeri (N deciso dall'utente), dire quanti superano la media
4. Dati due array A e B di N elementi (N costante), creare un nuovo array C, che abbia come primo elemento la somma del primo elemento di A e del primo elemento di C. Se per esempio A={1,2,3} e B={4,8,3} allora C dovrà essere C={5,10,6}
5. Scrivere un programma che chieda all'utente di inserire dei numeri. I numeri vanno salvati dentro un array. Bisogna continuare a chiedere di inserire numeri fino a quando non viene inserito -1 o se si raggiunge la dimensione massima dell'array

# Corso base di C++

## Introduzione
Come ambiente di sviluppo potete usare quello con cui siete più comodi.
Consiglio CodeBlocks, dato che è utilizzato anche durante le olimpiadi di informatica.
Potete scaricarlo [qui](https://www.codeblocks.org/downloads/binaries/)
Altre opzioni sono DevC++ o VisualStudio.

Quando create un nuovo file ricordate di salvarlo con estensione .cpp (altrimenti verrà salvato come file in C).

### Hello world

```C++
#include<fstream>
using namespace std;

int main(){
  cout << "Hello World";
  return 0;
 }
```

Note:
- la libreria <bits/stdc++.h> contiene tutte le librerie standard del C++. Solitamente non si usa, ma in contesti competitivi è molto utile dato che non dovete perdere tempo a includere ogni libreria che vi serve
- Per andare a capo quando stampate, usate cout << "\n". cout << endl può rendere il programma più lento

## Variabili
Le variabili sono contenitori di valori, che possono cambiare durante il programma.
Stampando una variabile si può vedere cosa contiene in quel momento.
Nel seguente esempio la variabile x contiene prima 2 e poi 4, come si può vedere stampandola.

```C++
#include<iostream>
using namespace std;

int main() {
    int a = 2;
    cout << a << "\n";
    a = 4;
    cout << a << "\n";

    return 0;
}
```

Ci sono 4 tipi principali di variabili.

```C++
#include<iostream>
using namespace std;

int main() {
    int a = 2;
    float b = 3.5;
    double c = 4.4;
    char d = 'a';
    bool e = false;
    
    cout << a << " " << b << " " << c << " " << d << " " << e << "\n";

    return 0;
}
```

### Numeri interi
Usiamo il tipo int.
Contiene valori interi, ad esempio 1, 2, -1, 27, ...

### Numeri decimali
Possiamo usare il tipo float e il tipo double.
Double ha precisione doppia rispetto a float (può contentere numeri più lunghi).

### Caratteri
Usiamo il tipo char.
I caratteri vengono scritti tra apici singoli.
```C++
char c = 'a';
```
A ogni carattere corrisponde un numero, secondo la tabella ASCII.
Scrivere
```C++
char c = 'a';
```
o
```C++
char c = 45;
```
è equivalente.

![Tabella ASCII]([day1/asciiTable.svg])

### Valori di verità
Usiamo il tipo bool, che può avere solo due valori: true o false.
NB: il programma considera false il numero 0 e true ogni altro numero

### Tabella dei tipi di dato primitivi
TABELLA

## Operazioni con le variabili
```C++
#include<iostream>
using namespace std;

int main() {
    int a = 3, b = 2;
    int somma = a+b;
    int differenza = a-b;
    int prodotto = a*b;
    int rapporto = a/b;
    int resto = a%b;

    cout << somma << " " << differenza << " " << prodotto << " " << rapporto << " " << resto;
    
    return 0;
}
```

## Decisioni: costrutto if-else
CODICE

## Switch

## Input e output
### Input e output su/da file

## Iterazione
### While
### Do while
### For

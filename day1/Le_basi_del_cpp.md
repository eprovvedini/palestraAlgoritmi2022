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

Nota
- la libreria <bits/stdc++.h> contiene tutte le librerie standard del C++. Solitamente non si usa, ma in contesti competitivi è molto utile dato che non dovete perdere tempo a includere ogni libreria che vi serve

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

![Tabella ASCII](day1/asciiTable.svg)

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
A volte vogliamo che il nostro codice faccia cose diverse a seconda di una condizione.
Ad esempio vogliamo scrivere a video "pari" se un numero è pari o dispari altrimenti.

```C++
#include<iostream>
using namespace std;
  
if(CONDIZIONE){
  //Esegui il codice in questo blocco se la condizione è vera
}else{
  //Esegui il codice in questo blocco se la condizione è falsa
}
```
Nel nostro caso:
```C++
#include<iostream>
using namespace std;

int main() {
    int a = 2;
    if(a%2 == 0){
        cout << "pari";
    }else{
        cout << "dispari";
    }
    return 0;
}
```

Un if può avere più else, con diverse condizioni.
```C++
#include<iostream>
using namespace std;

int main() {
    int a = 2;
    if(a>0){
        cout << "positivo";
    }else if (a==0){
        cout << "zero";
    }else {
        cout << "negativo";
    }
    return 0;
}
```
 
NB: gli operatori di confronto in c++ sono < (minore), > (maggiore), <= (minore o uguale), >= (maggiore o uguale), == (uguale), != (diverso)
  
Possiamo anche avere più if-else annidati tra loro:
```C++
#include <iostream>
using namespace std;
  
int main() {
    int A = 2;
    int B = 3;
    int C = 4;
    if(A>B){
        if(A>C){
            cout << "A è il massimo";
        } else {
            cout << "C è il massimo";
        }
    }else {
        if(B>C){
            cout << "B è il maggiore";
        } else {
            cout << "C è il maggiore";
        }
    }
    return 0;
}
```

## Switch
Lo switch si usa per eseguire diverse istruzioni a seconda del valore di un'istruzione.
É un metodo più elegante di scrivere una sequenza di if.

Con l'if:
```C++
if(espressione == valore costante 1){
  //istruzioni1
} else if(espressione == valore costante 2){
  //istruzioni2
} else if(espressione == valore costante 3){
  //istruzioni3
} ...
```
Con lo switch
```C++
switch(espressione) { 
case (valore costante 1): 
    istruzioni1;
    break; 
case (valore costante 2):
    istruzioni2;
    break;  
...
default:    // è opzionale, viene eseguito se l'espressione non corrisponde a nessuno dei valori elencati
    istruzioni default;
 } 
```
Esempio pratico:
```C++
int giorno = 3;
switch(giorno) { 
case (1): 
    cout << "lunedì";
    break; 
case (2):
    cout << "martedi";
    break;  
...
default:
    cout << "giorno non valido";
 } 
```

## Input e output
```C++
#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Inserire a: ";
    cin >> a;
    cout << "\nInserire b: ";
    cin >> b;
    
    return 0;
}
```
L'istruzione cout stampa a video il contenuto della variabile o il testo tra apici.
L'istruzione cin >> A legge il valore inserito dall'utente e lo salva nella variabile A.

- Per andare a capo quando stampate, usate cout << "\n". cout << endl può rendere il programma più lento

### Input e output su/da file
```
#include<fstream>
using namespace std;

int main(){
	ifstream in ("input.txt");
	ofstream out ("output.txt");

	int a;
	in >> a; //inserisco quello che leggo nella variabile a

	out << "Ciao! La variabile a vale " << a;
	
	in.close();
	out.close();
    
	return 0;
}
```

Note:
- se il file non si trova nella stessa directory del programma, dovrete specificare il percorso
- se il file di output non esiste, il programma lo creerà in automatico

## Esercizi
Esercizi molto semplici su questi argomenti.
Potete usarli se siete ancora insicuri sulle basi o come ripasso.

1) Scrivere un programma che dati in input base e altezza di un rettangolo, calcoli e stampi l'area e il perimetro.
2) Riscrivere lo stesso programma, ma prendendo i dati in input da un file "input.txt" e scrivendo i risultati su un file "output.txt"
3) Scrivere un programma che inseriti N=5 numeri, ne stampi la somma
4) Scrivere un programma che inserito un numero di 4 cifre, stampi le migliaia, le centinaia, le decine e le unità dalle quali è composto. (E volendo stampi la somma delle cifre del numero).
5) Scrivere un programma che inseriti N=5 numeri, dica quanti sono divisibili per 3
6) Scrivere un programma che dati due interi A e B ed un'operazione (quindi un simbolo tra +, -, * ,/) stampi a video il risultato dell'operazione (A+B oppure A-B eccetera)

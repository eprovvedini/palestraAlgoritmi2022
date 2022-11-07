# Corso base di C++

## Introduzione
Come ambiente di sviluppo potete usare quello con cui siete più comodi.
Consiglio CodeBlocks, dato che è utilizzato anche durante le olimpiadi di informatica.
Potete scaricarlo [qui](https://www.codeblocks.org/downloads/binaries/)
Altre opzioni sono DevC++ o VisualStudio.

Se non ricordate come usare DevC++, nella cartella "day1" ho messo un breve tutorial.

Quando create un nuovo file ricordate di salvarlo con estensione .cpp (altrimenti verrà salvato come file in C).

### Hello world

```C++
#include<iostream>
using namespace std;

int main(){
  cout << "Hello World";
  return 0;
 }
```

Questa è la struttura base di un programma in c++.
Tutto il vostro codice deve essere all'interno del main. Alla fine del main serve il return 0. Il return 0 dice al programma di "ritornare" 0. Lo mettiamo alla fine del main: in questo modo se il nostro programma ritorna 0, significa che è arrivato fino a return 0 senza problemi, altrimenti qualcosa è andato storto.

using namespace std va messo sempre.

include iostream è l'inclusione della libreria iostream. Molti dei comandi che usiamo nel c++ sono funzioni, in questo caso per esempio "cout", serve per stampare a schermo, in questo caso "Hello World". cout è incluso nella libreria iostream. Se non aveste incluso iostream, cout non funzionerebbe.
Per informazioni in più sul cout vedi il capitolo su input e output.

Nota
- la libreria <bits/stdc++.h> contiene tutte le librerie standard del C++. Solitamente non si usa, ma in contesti competitivi è molto utile dato che non dovete perdere tempo a includere ogni libreria che vi serve, quindi vi consliglio di fare include <bits/stdc++.h>

## Variabili
Le variabili sono contenitori di valori, che possono cambiare durante il programma.
Ogni variabile pu avere un tipo, spiegati nel dettaglio più avanti. In questo caso usiamo il tipo int, che può contenere numeri interi positivi e negativi.

Una variabile va dichiarata prima di essere usata.
Per dichiarare la variabile scriviamo "tipo" "nome_variabile", ad esempio int a.
Possiamo assegnare un valore alla variabile con l'operatore "=". Possiamo farlo dopo averla dichiarata o mentre la stiamo dichiarando.

Stampando una variabile si può vedere cosa contiene in quel momento.
Nel seguente esempio la variabile x contiene prima 2 e poi 4, come si può vedere stampandola.

```C++
#include<iostream>
using namespace std;

int main() {
    int a = 2; //dichiaro la variabile a, di tipo int, e le assegno il valore 2
    cout << a << "\n"; //questa riga stampa 2
    a = 4; //cambio il valore della variabile a in 4
    cout << a << "\n"; //questa riga stampa 4

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

[Tabella ASCII](https://commons.wikimedia.org/wiki/File:ASCII-Table.svg)

### Valori di verità
Usiamo il tipo bool, che può avere solo due valori: true o false.
NB: il programma considera false il numero 0 e true ogni altro numero

### Tabella dei tipi di dato primitivi
[Tabella](https://www.codeguru.com/wp-content/uploads/2021/09/C-data-types.png)

## Operazioni con le variabili

```C++
#include<iostream>
using namespace std;

int main() {
    int a = 3, b = 2;
    int somma = a+b; //somma di a e b (quindi 5)
    int differenza = a-b; //differenza di a e b (quindi 1)
    int prodotto = a*b; //prodotto di a e b (quindi 6)
    int rapporto = a/b; //divisione di a e b (quindi 1)
    int resto = a%b; //resto della divisione tra a e b (quindi 1)

    cout << somma << " " << differenza << " " << prodotto << " " << rapporto << " " << resto;
    
    return 0;
}
```

Nota sulla divisione
- Se divido due interi, il risultato sarà sempre un intero, anche se lo salvo in un float
```C++
int a = 5;
int b = 2;
float c = a/b; //c è uguale a 2
```

- Se divido due float (o un float e un int) il risultato sarà un float, ma se lo salvo in un int, la parte con la virgola verrà troncata
```C++
float a = 5;
float b = 2;
float c = a/b; //c è uguale a 2,5
int d = a/b; //d è uguale a 2
```

- E se voglio dividere due interi ma voglio che il risultato sia con la virgola???
```C++
int a = 5;
int b = 2;
float c = (float)a/b; //c è uguale a 2,5
```
Questa operazione si chiama "cast". Il compilatore sa che deve trattare la variabile a come se fosse un float, quindi siamo nel caso di un float(a) e un int(b).

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

### Operatori di confronto
Gli operatori di confronto in c++ sono < (minore), > (maggiore), <= (minore o uguale), >= (maggiore o uguale), == (uguale), != (diverso)
Possiamo scrivere delle condizioni con questi operatori, ad esempio a==b sarà vero se le variabili a e b hanno lo stesso valore, falso altrimenti.
Possiamo scrivere anche condizioni più complesse, come a+b==5, che sarà vero se la somma di a e b è uguale a 5.

### Operatori logici
A volte vogliamo unire più condizioni.
Per esempio vogliamo che il programma vada nell'else se sono vere due condizioni, oppure se almeno una delle due è vera.
Questo si fa con gli operatori logici, che sono 3 in c++:
- Not. Il not si usa quando vogliamo negare una condizione. Il simbolo è ! e va messo davanti alla condizione da negare.
	Ad esempio "!a==3" è vero se a è diverso da 3 e falso se a è uguale a 3
- And. L'and si usa quando vogliamo che una condizione sia vera solo se le condizioni che la formano sono vere. Il simbolo è &&.
	Ad esempio "a==3 && b==4" è vera solo se a è uguale a 3 E b è uguale a 4. Se anche solo una delle due condizioni non è verificata, il tutto è falso.
- Or. L'or si usa quando vogliamo che una condizione sia vera solo se almeno una delle condizioni che la forma è vera. Il simbolo è ||.
	Ad esempio "a==3 || a==4 || a==5" è vera se a è uguale a 3, a 4 O a 5.

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
```C++
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

1) Scrivere un programma che dati in input base e altezza di un rettangolo, calcoli e stampi l'area e il perimetro.
2) Scrivere un programma che chieda all'utente 5 numeri, e ne stampi la somma
3) Scrivere un programma che inseriti N=5 numeri, dica quanti sono divisibili per 3
4) Scrivere un programma che inserito un numero di 4 cifre, stampi le migliaia, le centinaia, le decine e le unità dalle quali è composto. (E volendo stampi la somma delle cifre del numero).
5) Scriva un programma che dica qual è il numero maggiore tra 3 numeri inseriti dall'utente
6) Scrivere un programma che dati due interi A e B ed un'operazione (quindi un simbolo tra +, -, * ,/) stampi a video il risultato dell'operazione (A+B oppure A-B eccetera)
7) Riscrivere l'esercizio 1, ma prendendo i dati in input da un file "input.txt" e salvando il risultato su un file "output.txt"

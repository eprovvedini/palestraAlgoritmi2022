## Scope delle variabili (introduzione)

Scope = visibilità  
Lo scope di una variabile è la parte di programma in cui essa è visibile.

Prenderemo in considerazione 3 casi:  
1. Variabile dichiarata fuori dal main
2. Variabile dichiarata nel main
3. Variabile dichiarata dentro un blocco (ad esempio un ciclo o dentro un if)

Facciamo un esempio per capire meglio:  
```C++
int A = 10;

int main(){
  int B = 5;
  if(1<2){
    int C = 2;
    cout << C;
  }
}
```

In questo caso A è dichiarata prima del main. Viene detta <b>variabile globale</b>. A è visibile e utilizzabile in tutto il programma.  
B è dichiarata all'interno del blocco main. Sarà visibile e utilizzabile solo nel main.  
C è dichiarata all'interno dell'if. Sarà visibile e utilizzabile solo in quel blocco.  

Proviamo infatti a stampare la variabile C dopo l'if:
```C++
int A = 10;

int main(){
  int B = 5;
  if(1<2){
    int C = 2;
    cout << C;
  }
  cout << C;
}
```

Cosa succede? Il vostro codice non compila, perchè la variabile C viene distrutta quando finisce il blocco in cui è stata creata.

Cosa succede se dichiariamo una variabile all'interno di un ciclo for?
```C++
int main(){
	for(int i=0;i<10;i++) {
		int somma = 0;
		somma++;
		cout << somma << " ";
	}
}
```

Se provate ad eseguire questo codice, vedrete che somma è sempre 1. Perchè?  
Ogni volta che rientro nel blocco del for, la variabile somma viene creata (dichiarata).  
Ogni volta che il ciclo finisce però, la variabile viene distrutta.  
Se il ciclo viene eseguito di nuovo, viene ricreata.  

Notiamo che ia i invece continua ad essere incrementata normalmente.
Se dichiariamo una variabile tra le parentesi del for, questa continua ad esistere fino alla fine di tutto il for, non solo di un ciclo come somma, dichiarata tra le graffe.

State quindi attenti a dove dichiarate le variabili. Per ora, se siete in dubbio, vi basta dichiarare tutto all'inizio del main.

## Istruzioni break e continue

Ci sono due istruzioni utili che potete usare all'interno di un ciclo.

1. Break  
Conclude il ciclo.  
Ad esempio, dovete vedere se c'è un 4 all'interno di un array. Una volta che lo avete trovato, potete dire "sì, c'è" e smettere di controllare il resto dell'array.
```C++
for(i=0;i<numElem;i++){
  if(vet[i]==4){
    cout << "Trovato";
    break;
  }
}
```

2. continue
Va alla prossima esecuzione del ciclo. Meno usata del break, ma sappiate che esiste.

```C++
for(i=0;i<numElem;i++){
  if(vet[i]%2==0){
    continue;
  }
  cout << "Dispari\n";
}
```

## Piccola nota sulle parentesi graffe
Sia nell'if, sia nel for, se all'interno delle graffe avete una sola istruzione, potete togliere le graffe.

```C++
for(i=0;i<numElem;i++)
  cout << vet[i] << " ";
  
for(i=0;i<numElem;i++){
  cout << vet[i] << " ";
}
```
I due for fanno la stessa identica cosa. Attenzione perchè questo non vale con più istruzioni.  
```C++
for(i=0;i<numElem;i++)
  cout << vet[i] << " ";
  vet[i] = 2; //questa istruzione viene considerata fuori dal ciclo
  
for(i=0;i<numElem;i++){
  cout << vet[i] << " ";
  vet[i] = 2;
}
```
In questo caso invece i due for sono diversi.



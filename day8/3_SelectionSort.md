# Selection sort
Abbiamo visto come inserire in modo ordinato degli elementi in un array.  
Vogliamo ora vedere come ordinare un array in cui sono già inseriti degli elementi in ordine sparso.  
E no, non con la funzione sort :)  
Vedremo quindi come funziona l'algoritmo di selection sort, uno dei tanti algoritmi di ordinamento che esistono.  
Tranquilli, procederemo uno step alla volta.

## Swap di due variabili
Per il selection sort, dobbiamo sapere come scambiare di posto due variabili.
Ad esempio ho A=5 e B=3. Voglio A=3 e B=5.  
Come faccio?  
Suggerimento: usare altre variabili non è vietato.

## Swap di due elementi in un array
Stessa identica cosa di prima, ma ora ho due posizioni di un array e voglio scambiare gli elementi in quelle due posizioni.

## Trovare il minimo
Sappiamo tutti come trovare il minimo in un array, no?
Sapremmo anche come trovare il minimo solo a partire dalla posizione 2, o dalla posizione 5, semplicemente cambiando l'indice iniziale.

## Selection sort
Come funziona quindi questo selection sort?

Parto cercando il minimo in tutto l'array.  
Scambio il minimo con il primo elemento dell'array (posizione 0).  

Cerco di nuovo il minimo, ma questa volta parto dalla posizione 1.  
Scambio il minimo con il secondo elemento.  

Cerco di nuovo il minimo, ma questa volta parto dalla posizione 2.  
Scambio il minimo con il terzo elemento.  

E così via...

Esempio pratico:  
vet = {3, 6, 2, 8, 1, 9, 4}  
Il minimo è il numero 1, in posizione 4.  
Scambio minimo e primo elemento.  
vet = {1, 6, 2, 8, 3, 9, 4}  
Ora cerco il minimo, ma senza considerare l'1, che è già "ordinato", quindi partendo con la ricerca dalla posizione 1.  
Il minimo è 2, in posizione 2.  Scambio minimo e secondo elemento.  
vet = {1, 2, 6, 8, 3, 9, 4}  
Cerco il minimo senza considerare 1 e 2, quindi partendo con la ricerca dalla posizione 2.  
Il minimo è 3, in posizione 4. Scambio minimo e terzo elemento.  
vet = {1, 2, 3, 8, 6, 9, 4}  
E così via...  
vet = {1, 2, 3, 4, 6, 9, 8}  
vet = {1, 2, 3, 4, 6, 9, 8}  
vet = {1, 2, 3, 4, 6, 8, 9}

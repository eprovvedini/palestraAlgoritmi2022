# Grafi

Un grafo è una struttura formata da: 
- nodi (o vertici)
- archi: collegamenti tra i nodi
  
//immagine grafo  


Un grafo può essere orientato, cioè ogni arco ha una direzione di percorrenza. Nell'esempio sotto, dal nodo 1 si può raggiungere il 2, ma dal nodo 2 non si può raggiungere l'1.  
//immagine grafo orientato  

Un grafo pesato è un grafo in cui a ogni arco è associato un "peso", cioè un valore numerico. Questo peso può significare tante cose. Se consideriamo i nodi come città, allora il peso potrebbe essere il numero di km tra una città e l'altra.  
//immagine grafo pesato  

## Rappresentazione in memoria

Come rappresentiamo un grafo in memoria?  

Abbiamo due opzioni:
- matrice di adiacenza  
- vector di vector  

La matrice di adiacenza è una matrice in cui in ogni cella (x,y) viene messo:
- se il grafo non è pesato: 1 se esiste un arco tra x e y, 0 se non esiste
- se il grafo è pesato: il peso dell'arco tra x e y (-1 se non esiste)

//immagine

Questo metodo in realtà è usato meno del secondo.  

Il metodo più utilizzato è usare un vector di vector.

Come funziona?
Abbiamo il nostro vector iniziale. Possiamo immaginare che la posizione 0 sarà il nostro nodo 0, la posizione 1 il nodo 1 e così via. 
Sappiamo che come elemento di un vector possiamo avere un altro vector (così come una matrice è semplicemente un vettore di vettori).
Per ogni nodo avremmo quindi un vector alla sua posizione, che contiene i nodi a cui esso è collegato. Così potrebbe non risultare chiaro, quindi ecco un esempio grafico: 

//immagine

Il codice per implementare un grafo è in allegato.
Consiglio di provare a risolvere Sunnydale sul sito delle olimpiadi. Tra qualche giorno carico come si fa la visita di un grafo e la soluzione.

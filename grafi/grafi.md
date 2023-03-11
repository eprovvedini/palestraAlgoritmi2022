# Grafi

Un grafo è una struttura formata da: 
- nodi (o vertici)
- archi: collegamenti tra i nodi
  
![grafo](https://user-images.githubusercontent.com/94620199/224487842-6105521e-e89f-4b9d-afce-03c86859a5f8.png) 


Un grafo può essere orientato, cioè ogni arco ha una direzione di percorrenza. Nell'esempio sotto, dal nodo 1 si può raggiungere il 2, ma dal nodo 2 non si può raggiungere l'1.  
![grafo_orientato](https://user-images.githubusercontent.com/94620199/224487864-1cff67f8-f44b-40d2-af33-7f88ccd1b3c5.png) 
  

Un grafo pesato è un grafo in cui a ogni arco è associato un "peso", cioè un valore numerico. Questo peso può significare tante cose. Se consideriamo i nodi come città, allora il peso potrebbe essere il numero di km tra una città e l'altra.  
![grafo_pesato](https://user-images.githubusercontent.com/94620199/224487867-a1d66cae-f097-48a3-b429-19a5c08899f3.png) 

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

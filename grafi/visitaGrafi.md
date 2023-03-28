# Visitare un grafo
Ci sono due modi per visitare tutti i nodi di un grafo.

## BFS
BFS sta per Breadth First Search. Si parte da un nodo, diciamo il nodo 0 e si vanno a visitare tutti i suoi vicini. Poi si fa la stessa cosa con tutti i vicini visitati, ricorsivamente.  
Detto così potrebbe risultare poco chiaro, ma questa [gif](https://upload.wikimedia.org/wikipedia/commons/5/5d/Breadth-First-Search-Algorithm.gif?20100504223639) dovrebbe rendere abbastanza bene il concetto.  

## DFS
DFS sta per Depth First Search. In questo caso si parte dal nodo 0 e si va al primo dei suoi vicini, mettiamo il nodo 1, da cui si va al primo dei suoi vicini, diciamo 4. Se il nodo 4 non ha vicini, si passa al vicino successivo di 1. Se 1 non ha vicini, si passa al prossimo vicino di 0, mettiamo 2. Mettiamo che 2 non abbia vicini. Passiamo al prossimo vicino di 0, mettiamo 3. Se 3 non ha vicini, abbiamo finito.  
Anche in questo caso, una [gif](https://upload.wikimedia.org/wikipedia/commons/7/7f/Depth-First-Search.gif?20090326120256) spiega meglio di mille parole.

In allegato il codice commentato, che è la cosa più importante.  
Dopo averlo capito, consiglio alcuni esercizi di allenamento.  
- [barbablu](https://training.olinfo.it/#/task/barbablu/statement)
- [sentieri](https://training.olinfo.it/#/task/sentieri/statement)
- [dijkstra](https://training.olinfo.it/#/task/dijkstra/statement)
- [grasshopper](https://training.olinfo.it/#/task/ois_grasshopper/statement)

Allego anche le soluzioni, ma meglio provare prima a risolverli per conto proprio :)

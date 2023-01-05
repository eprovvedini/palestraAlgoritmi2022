# Bubble Sort

Un altro metodo di ordinare un array potrebbe essere di scorrere gli elementi da sinistra a destra e scambiarli di posto quando quello a destra è più piccolo di quello a sinistra.  

Esempio:  
{3,2,5,4,1}  
Parto dal 3, che è più grande del 2 -> scambio  
{2,3,5,4,1}  
Passo alla posizione successiva (che è sempre il 3, dato che l'ho scambiato!)  
3 e 5 sono già ordinati, quindi lascio così e passo al 5. 5 e 4 non sono ordinati -> scambio  
{2,3,4,5,1}  
Passo al 5. 5 e 1 non sono ordinati -> scambio  
{2,3,4,1,5}  
Sono alla fine dell'array.  

Se è ordinato ho finito.  
Se non è ancora tutto ordinato, parto da capo e rifaccio fin quando non è ordinato.  

Nel nostro caso:  
Alla seconda "passata" diventa {2,3,1,4,5}  
Alla terza: {2,1,3,4,5}  
Alla quarta: {1,2,3,4,5} -> è ordinato! Abbiamo finito 


Suggerimento: usare una variabile booleana per controllare se l'array è ordinato.  
Avrete un ciclo che va da 0 a n-1. Mettete la variabile a true all'inizio del ciclo. Se trovate una coppia da scambiare, la mettete a false (o viceversa, basta che poi facciate giusto nel controllo).  
Alla fine del ciclo controllate la variabile. Se è falsa, rimettete il vostro indice a 0, in modo da non uscire dal ciclo, ma ricominciare.  

# Inserimento ordinato

Abbiamo visto nello scorso esercizio come inserire un elemento in una posizione specifica dell'array.  
Immaginiamo ora di avere invece un array vuoto, da riempire, in ordine crescente.  
I numeri inseriti però saranno in ordine casuale.  

Esempio:  
- All'inizio l'array è vuoto. vett={}  
- Inserisco 27. vett={27}  
- Inserisco 3. vett={3,27}  
- Inserisco 15. vett={3,15,27}  
- Inserisco 18. vett={3,15,18,27}  
- Inserisco 1. vett={1,3,15,18,27}  
- Inserisco 7. vett={1,3,7,15,18,27}  
- E così via  

L'obiettivo è scrivere un programma che faccia questa cosa.  

Suggerimenti:  
- sapete già come inserire un elemento in una certa posizione. In questo caso dovete solo capire come trovare la posizione in cui inserire l'elemento e il gioco è fatto
- usate il template "InserimentoOrdinato.cpp"

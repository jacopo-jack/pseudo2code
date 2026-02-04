#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* Funzione per stampare una linea di separazione */
void form(){
    int i;  /* dichiarazione all'inizio del blocco */
    for(i = 0; i < 5; i++){
        printf("---");
    }
    printf(" --------\n");
}

/* Funzione per pulire lo schermo 
   clear screen function*/
void clrscr(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

/* Funzione per pulire lo schermo in vice  commentare la prima funzione clrsscr() affinché funzioni su VICE.
   Clear screen function in vice. Comment clrscrc() first function in order to work on VICE*/
    void clrscr();
/* Funzione per calcolare se una persona è maggiorenne */
void eta(){
    int eta;  /* dichiarazione all'inizio del blocco */
    form();
    printf("\nUna persona risulta maggiorenne se ha 18 anni o piu'\n");
    printf("eta': ");
    scanf("%d", &eta);

    if(eta >= 18){
        printf("Maggiorenne!\n");
    }else{
        printf("Minorenne!\n");
    }
}

/* Menu principale */
void options(){
    int scelta;  /* dichiarazioni all'inizio */
    int i;

    scelta = -1;  /* valore iniziale per permettere eventuale ciclo futuro */

    clrscr();

    /* Stampiamo il menu */
    for(i = 0; i < 5; i++){
        printf("---");
    }
    printf("Menu-------\n");
    printf("1) Maggiore eta'\n");
    printf("2) Cicli\n");
    printf("3) Operatori logici\n");
    printf("4) Dizionari\n");
    printf("5) Liste\n");
    printf("-------------------\n");
    printf("Scelta: ");

    scanf("%d", &scelta);

    if(scelta == 1){
        clrscr();
        eta();
    }

    /* Non c'è loop: menu esegue una sola volta, compatibile con cc65/C89 */
}

int main(){
    options();

    /* Attesa input finale */
    printf("\n\nPremi INVIO per uscire...");
    getchar(); /* cattura newline lasciato da scanf */
    getchar(); /* attende davvero l'input */

    return 0;
}

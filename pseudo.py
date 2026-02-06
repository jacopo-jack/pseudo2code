#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
import os
def form():
    for i in range(5):
        print("---")
        print(" --------")

def eta():
    print("Una persona risulta maggiorenne se ha 18 anni o piu'")
    eta = int(input("eta': "))
    if eta >= 18:
        print("Maggiorenne!")
    else:
        print("Minorenne!")
    input("\nPremi INVIO per continuare...")  # AGGIUNGI QUESTO
def menu():
    print("Menu-------")
    print("1) Maggiore eta'")
    print("2) Cicli")
    print("3) Operatori logici")
    print("4) Dizionari")
    print("5) Liste")
    print("6) Esci programma")
    print("-------------------")
# options richiama il menu 
# -------- funzione principale del programma--------- 
def principale():
 while True:
     menu() 
     scelta = input("Scelta: ")
     match scelta:
         case "1":
             eta()
         case "2":      
            pass
         case "3":
             pass
         case "4":
             pass
         case "5":
             pass
         case "6":
            print("alla prossima")  
            break
principale()
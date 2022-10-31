#import copy

class Osoba:
    licznik:int = 0
    def __init__(self, id:int = 0, imie:str="") -> None:
        self.__id = id
        self.__imie = imie
        Osoba.licznik+=1

    def kopiuj(self, osoba):
        self.__id = osoba.__id
        self.__imie = osoba.__imie

    def powitanie(self, gosc:str) -> None:
        if self.__imie != "": print(f"Czesc {gosc} mam na imie {self.__imie}")
        else: print("Brak danych")

print(f"Liczba zarejestrowanych osob to: {Osoba.licznik}")

osoba1 = Osoba()
#print(id(osoba1))
osoba2 = Osoba(5, "Tomek")
#print(id(osoba2))

#osoba3 = copy.deepcopy(osoba2)
osoba3 = Osoba()
#osoba3 = osoba2
osoba3.kopiuj(osoba2)
#print(id(osoba3))
#osoba3.imie = "Wojtek"

osoba1.powitanie("Jan")
osoba2.powitanie("Jan")
osoba3.powitanie("Jan")

print(f"Liczba zarejestrowanych osob to: {Osoba.licznik}")
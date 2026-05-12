#              start, stop, krok
for i in range(3, 15, 3):
    print(i, "Cześć")
    
lista = [4, 12, 9, 34, 1, 0, 167]

for i in lista:
    print(i, end=", ")

print()
klasa1 = ["Zosia", "Ala", "Tomek", "Wojtek", "Kasia"]

for imie in klasa1:
    print(imie)
    
print("--------------------")
for index, imie in enumerate(klasa1):
    print(index+1, imie)
    
tekst = "Dzisiaj mamy wtorek - pada"
for litera in tekst:
    print(litera, end="_")
print()

print("Liczby parzyste od 2 do 50")
for i in range(2, 51, 2):
    print(i, end=",")
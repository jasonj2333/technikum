# Napisz program, który sprawdza czy wprowadzona przez użytkownika
# liczba jest parzysta.
# 
# a % 2 == 0

liczba = int( input("Podaj liczbę: ") )

if liczba % 2 == 0:
    print("Podana liczba jest parzysta")
else:
    print("Podana liczba jest nieparzysta")
    
if liczba < 0:
    print("Liczba jest ujemna")
elif liczba == 0:
    print("0 nie jest ani dodatnie, ani ujemne")
else:
    print("Liczba jest dodatnia")
    
from math import sqrt

x = int( input("Podaj liczbę nieujemną: ") )

if x < 0:
    print("x jest mniejsze od zera")
else:
    p = sqrt(x)
    print(f"Pierwiastek kwadratowy z {x} wynosi {p:.5f}")

print("Koniec programu")


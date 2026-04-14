pkt = int( input("Podaj liczbę punktów zdobytych przez twoją klasę: ") )
f = float( input("Podaj frekwencję klasy w semestrze: ") )
so = float( input("Podaj średnią ocen klasy w semestrze: ") )

if f > 94 and so >= 4.0:
    pkt = pkt + 20

print(f"Aktualna liczba punktów klasy wynosi: {pkt}")

if f > 93 or so > 4.2:
    print("Klasa jedzie na wycieczkę !!!")
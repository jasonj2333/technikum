cena_komputera = 8000
konto = 0

for i in range(3):
    wplata = int(input("Podaj wysokosc wplaty: "))
    konto += wplata

print(f"Stan konta: {konto}")
if konto >= cena_komputera:
    print("Możesz kupić komputer")
else:
    print(f"Brakuje ci jeszcze {cena_komputera - konto} zł")
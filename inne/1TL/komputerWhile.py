cena_komputera = 8000
konto = 0

#dopóki konto > cena_komputera to powtarzaj
while konto < cena_komputera:
    wplata = int(input("Podaj wysokość wpłaty: "))
    if wplata > 0:
        konto += wplata
    else:
        print("Nie można wypłacać z konta")
    print(f"Stan konta: {konto}")

print("Idziemy do sklepu po komputer !!!")
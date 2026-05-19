liczby = [4, 5, 1, 3, 7, 87, 12, 12 ,56, 0, 2, 8, 9, 13]

suma = 0
maks = liczby[0]
minimum = liczby[0]
zawiera = False

for liczba in liczby:
    print(liczba, end=", ")
    suma += liczba
    if liczba > maks:
        maks = liczba
    if liczba < minimum:
        minimum = liczba
    if liczba == 0:
        zawiera = True

print()
print(f"Suma liczb na liście wynosi: {suma}")
srednia = round(suma / len(liczby), 3)
print(f"Średnia liczb na liście wynosi: {srednia}")
print(f"Największa liczba na liście to: {maks}")
print(f"Najmniejsza liczba na liście to: {minimum}")
if zawiera == True:
    print("Na liście jest liczba 0")
else:
    print("Na liście nie ma liczby 0")
liczby = [4, 5, 1, 3, 7, 87, 12, 12 ,56, 0, 2, 8, 9, 13]

suma = sum(liczby)
print(f"Suma liczb na liście wynosi: {suma}")
srednia = round(suma / len(liczby), 3)
print(f"Średnia liczb na liście wynosi: {srednia}")
print(f"Największa liczba na liście to: {max(liczby)}")
print(f"Najmniejsza liczba na liście to: {min(liczby)}")
if 0 in liczby:
    print("Na liście jest liczba 0")
else:
    print("Na liście nie ma liczby 0")
    
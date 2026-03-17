a = 5
imie = "Ania" #tworzę zmienną tekstową
nazwisko = "Kowalska"
b = 13
B = 15

#a = 12 #zmiana wartości zmiennej

print(f"{imie} uczy  się programować w Pythonie")
print(imie + " " + nazwisko)
print(a * b)
print(B - a)
print(B + a)
print(b / a)
print(b // a) #dzielenie całkowite
print(b % a) #reszta z dzielenia
print(a ** 3) #potęgowanie
print(25 ** (1/2)) #pierwiastek kwadratowy (bez dodatkowej biblioteki)
dzialanie = 75 - 3 * 2**2
print(dzialanie)

liczba1 = float( input("Podaj 1 liczbę: ") )
liczba2 = float( input("Podaj 2 liczbę: ") )
liczba3 = float( input("Podaj 3 liczbę: ") )
suma = liczba1 + liczba2 + liczba3
srednia = suma / 3
print(f"Suma podanych liczb wynosi: {suma:.2f}")
print(f"Średnia z podanych liczb wynosi: {srednia:.2f}")


print("Najmniejsza liczba")
a = int(input("Podaj pierwszą liczbę: "))
b = int(input("Podaj drugą liczbę: "))
c = int(input("Podaj trzecią liczbę: "))

if a < b:
    if a < c:
        minimum = a
    else:
        minimum = c
else:
    if b < c:
        minimum = b
    else:
        minimum = c

print(f"Najmniejsza liczba to {minimum}")

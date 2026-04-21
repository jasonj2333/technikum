suma = 0

# for i in ["Tomek", "Ala", "Zosia"]:
#     print(i)

n = int(input("Ile liczb chcesz zsumować? ")) 

for i in range(n): #[0, 1, 2, 3, 4...n-1]
    liczba = int( input(f"Podaj {i+1} liczbę: ") )
    suma = suma + liczba

print(f"Suma podanych liczb wynosi: {suma}")
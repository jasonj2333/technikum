o1 = int( input("Podaj liczbę osób uwzględnionych w przepisie: ") )
ns = input("Podaj nazwę składnika z przepisu: ")
s1 = float( input("Podaj ilość składnik z przepisu (kg): ") )
o2 = int( input("Podaj liczbę osób obecnych na spotkaniu: ") )
s2 = (s1 * o2) / o1

print(f"Dla {o2} osób potrzeba {s2:.2f} składnika - {ns}")
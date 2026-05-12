liczba = 7
imie = "Ania"

klasa1 = ["Zosia", "Ela", "Wojtek", "Tomek", "Ola"]
klasa2 = ["Ola", "Natalia", "Igor"]
print(klasa1[1])
print(klasa1[3])
#print(klasa1[5]) #blad indeks nie istnieje na liście
n = len(klasa1)
print(n)
print(klasa1[-1])
klasa1.append("Witek")
klasa1.append("Krzysiek")
klasa1.insert(1, "Krzysiek")
#klasa1.pop() #usuwa ostatni element
klasa1.pop(2) #usuwa element spod danego indeksu
klasa1.remove("Krzysiek") #usuwa pierwsze wystąpnie elementu na liście
#print(klasa1 + klasa2) #chwilowe polaczenie
klasa1.extend(klasa2) #rozszerzenie klasy1 o klase2
#klasa1.clear()
klasa1.sort()
klasa1.reverse()
print(klasa1)
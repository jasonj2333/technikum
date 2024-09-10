# bubbleSort(array)
#   for i <- 1 to indexOfLastUnsortedElement-1
#     if leftElement > rightElement
#       swap leftElement and rightElement
# end bubbleSort

names = []

with open('names.txt') as f:
    for line in f:
        names.append(line.strip())

# Dana jest lista nieuporządkowana 100 osób (nazwisko imię) wczytana z pliku names.txt
# Twoim zadaniem jest wyszukanie sprawdzenie czy ponizsze nazwiska znajdują się na wczytanej liście.
# Nazwiska do wyszukania:
#     - Tomasz Kowalski
#     - Turner Connor
#     - Donald Trump
#     - MacLeod Heather
#     - Welch Kimberly
#     - Anna Jantar
#     - Wilson Erica
# Jezeli tak to wypisz komunikat np. Wilson Erica została znaleziona na pozycji X.
# Jezeli nie to wypisz komunikat np. Wilson Erica nie została znaleziona na liście.

# Utwórz program wykorzystujący optymalny algorytm do tego zadania, jeśli uznasz to za 
# konieczne mozesz uporządkować listę przed wyszukiwaniem.
# Załoz, ze w przyszłości będzie wykorzystywał/a napisany program do kolejnych wyszukiwań.

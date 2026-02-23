## 📊 Porównanie algorytmów sortowania

| Algorytm             | Zasada działania                                            | Najlepszy przypadek | Średni przypadek | Najgorszy przypadek | Stabilny | Trudność |
| -------------------- | ----------------------------------------------------------- | ------------------- | ---------------- | ------------------- | -------- | -------- |
| **Bąbelkowe**        | Zamienia sąsiednie elementy                                 | O(n)                | O(n²)            | O(n²)               | ✔        | ⭐        |
| **Przez wybór**      | Wybiera najmniejszy element i wstawia na początek           | O(n²)               | O(n²)            | O(n²)               | ✖        | ⭐        |
| **Przez wstawianie** | Wstawia element w odpowiednie miejsce w posortowanej części | O(n)                | O(n²)            | O(n²)               | ✔        | ⭐⭐       |
| **Quick Sort**       | Dzieli tablicę względem pivota                              | O(n log n)          | O(n log n)       | O(n²)               | ✖        | ⭐⭐⭐      |
| **Merge Sort**       | Dzieli tablicę i scala posortowane części                   | O(n log n)          | O(n log n)       | O(n log n)          | ✔        | ⭐⭐⭐      |
| **Heap Sort**        | Wykorzystuje kopiec (heap)                                  | O(n log n)          | O(n log n)       | O(n log n)          | ✖        | ⭐⭐⭐      |

---

## 🧠 Kiedy który stosować?

| Sytuacja                | Najlepszy wybór         |
| ----------------------- | ----------------------- |
| Mała tablica            | Wstawianie              |
| Prawie posortowana      | Wstawianie              |
| Dużo danych             | Quick Sort / Merge Sort |
| Wymagana stabilność     | Merge Sort              |
| Mało pamięci dodatkowej | Quick Sort / Heap Sort  |

---

## 🎯 Szkolna klasyfikacja

### 🟢 Algorytmy proste (O(n²))

* Bąbelkowe
* Przez wybór
* Przez wstawianie

### 🔵 Algorytmy szybkie (O(n log n))

* Quick Sort
* Merge Sort
* Heap Sort

---

## 📌 Najważniejsze różnice w skrócie

* **Bąbelkowe** – najprostsze, ale najmniej praktyczne
* **Wybór** – zawsze O(n²), nawet gdy dane są posortowane
* **Wstawianie** – świetne dla małych lub prawie posortowanych danych
* **Quick Sort** – najszybszy w praktyce
* **Merge Sort** – stabilny i przewidywalny
* **Heap Sort** – dobre gwarancje czasowe, ale niestabilny

---


# 1️⃣ Sortowanie bąbelkowe (Bubble Sort)

```cpp
void bubbleSort(int tab[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(tab[j] > tab[j + 1])
            {
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}
```

---

# 2️⃣ Sortowanie przez wybór (Selection Sort)

```cpp
void selectionSort(int tab[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for(int j = i + 1; j < n; j++)
        {
            if(tab[j] < tab[minIndex])
                minIndex = j;
        }

        int temp = tab[i];
        tab[i] = tab[minIndex];
        tab[minIndex] = temp;
    }
}
```

---

# 3️⃣ Sortowanie przez wstawianie (Insertion Sort)


```cpp
void insertionSort(int tab[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int klucz = tab[i];
        int j = i - 1;

        while(j >= 0 && tab[j] > klucz)
        {
            tab[j + 1] = tab[j];
            j--;
        }

        tab[j + 1] = klucz;
    }
}
```

---

# 4️⃣ Quick Sort

```cpp
int partition(int tab[], int low, int high)
{
    int pivot = tab[high];
    int i = low - 1;

    for(int j = low; j < high; j++)
    {
        if(tab[j] < pivot)
        {
            i++;
            int temp = tab[i];
            tab[i] = tab[j];
            tab[j] = temp;
        }
    }

    int temp = tab[i + 1];
    tab[i + 1] = tab[high];
    tab[high] = temp;

    return i + 1;
}

void quickSort(int tab[], int low, int high)
{
    if(low < high)
    {
        int pi = partition(tab, low, high);
        quickSort(tab, low, pi - 1);
        quickSort(tab, pi + 1, high);
    }
}
```

---

# 5️⃣ Merge Sort

```cpp
void merge(int tab[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* L = new int[n1];
    int* R = new int[n2];

    for(int i = 0; i < n1; i++)
        L[i] = tab[left + i];

    for(int j = 0; j < n2; j++)
        R[j] = tab[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
            tab[k++] = L[i++];
        else
            tab[k++] = R[j++];
    }

    while(i < n1)
        tab[k++] = L[i++];

    while(j < n2)
        tab[k++] = R[j++];

    delete[] L;
    delete[] R;
}

void mergeSort(int tab[], int left, int right)
{
    if(left < right)
    {
        int mid = left + (right - left) / 2;

        mergeSort(tab, left, mid);
        mergeSort(tab, mid + 1, right);

        merge(tab, left, mid, right);
    }
}
```

---

# 6️⃣ Heap Sort

```cpp
void heapify(int tab[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if(left < n && tab[left] > tab[largest])
        largest = left;

    if(right < n && tab[right] > tab[largest])
        largest = right;

    if(largest != i)
    {
        int temp = tab[i];
        tab[i] = tab[largest];
        tab[largest] = temp;

        heapify(tab, n, largest);
    }
}

void heapSort(int tab[], int n)
{
    for(int i = n / 2 - 1; i >= 0; i--)
        heapify(tab, n, i);

    for(int i = n - 1; i > 0; i--)
    {
        int temp = tab[0];
        tab[0] = tab[i];
        tab[i] = temp;

        heapify(tab, i, 0);
    }
}
```


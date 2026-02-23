#include <iostream>
#include <ctime>
using namespace std;

// ===================== BUBBLE =====================
void bubbleSort(int tab[], int n, long long& por, long long& zam)
{
    por = 0; zam = 0;

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
        {
            por++;
            if (tab[j] > tab[j + 1])
            {
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
                zam++;
            }
        }
}

// ===================== SELECTION =====================
void selectionSort(int tab[], int n, long long& por, long long& zam)
{
    por = 0; zam = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            por++;
            if (tab[j] < tab[minIndex])
                minIndex = j;
        }

        if (minIndex != i)
        {
            int temp = tab[i];
            tab[i] = tab[minIndex];
            tab[minIndex] = temp;
            zam++;
        }
    }
}

// ===================== INSERTION =====================
void insertionSort(int tab[], int n, long long& por, long long& zam)
{
    por = 0; zam = 0;

    for (int i = 1; i < n; i++)
    {
        int key = tab[i];
        int j = i - 1;

        while (j >= 0)
        {
            por++;
            if (tab[j] > key)
            {
                tab[j + 1] = tab[j];
                zam++;
                j--;
            }
            else break;
        }
        tab[j + 1] = key;
    }
}

// ===================== QUICK =====================
int partition(int tab[], int low, int high, long long& por, long long& zam)
{
    int pivot = tab[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        por++;
        if (tab[j] < pivot)
        {
            i++;
            int temp = tab[i];
            tab[i] = tab[j];
            tab[j] = temp;
            zam++;
        }
    }

    int temp = tab[i + 1];
    tab[i + 1] = tab[high];
    tab[high] = temp;
    zam++;

    return i + 1;
}

void quickSort(int tab[], int low, int high, long long& por, long long& zam)
{
    if (low < high)
    {
        int pi = partition(tab, low, high, por, zam);
        quickSort(tab, low, pi - 1, por, zam);
        quickSort(tab, pi + 1, high, por, zam);
    }
}

// ===================== HEAP =====================
void heapify(int tab[], int n, int i, long long& por, long long& zam)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n)
    {
        por++;
        if (tab[left] > tab[largest])
            largest = left;
    }

    if (right < n)
    {
        por++;
        if (tab[right] > tab[largest])
            largest = right;
    }

    if (largest != i)
    {
        int temp = tab[i];
        tab[i] = tab[largest];
        tab[largest] = temp;
        zam++;
        heapify(tab, n, largest, por, zam);
    }
}

void heapSort(int tab[], int n, long long& por, long long& zam)
{
    por = 0; zam = 0;

    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(tab, n, i, por, zam);

    for (int i = n - 1; i > 0; i--)
    {
        int temp = tab[0];
        tab[0] = tab[i];
        tab[i] = temp;
        zam++;
        heapify(tab, i, 0, por, zam);
    }
}

// ===================== MERGE =====================
void merge(int tab[], int left, int mid, int right,
    long long& por, long long& zam)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* L = new int[n1];
    int* R = new int[n2];

    for (int i = 0; i < n1; i++)
        L[i] = tab[left + i];

    for (int j = 0; j < n2; j++)
        R[j] = tab[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2)
    {
        por++;
        if (L[i] <= R[j])
            tab[k++] = L[i++];
        else
            tab[k++] = R[j++];
        zam++;
    }

    while (i < n1)
    {
        tab[k++] = L[i++];
        zam++;
    }

    while (j < n2)
    {
        tab[k++] = R[j++];
        zam++;
    }

    delete[] L;
    delete[] R;
}

void mergeSort(int tab[], int left, int right,
    long long& por, long long& zam)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        mergeSort(tab, left, mid, por, zam);
        mergeSort(tab, mid + 1, right, por, zam);
        merge(tab, left, mid, right, por, zam);
    }
}

// ===================== MAIN =====================
//int main()
//{
//    const int n = 20000;
//    int baza[n], tab[n];
//
//    srand(time(NULL));
//    for (int i = 0; i < n; i++)
//        baza[i] = rand() % 100000;
//
//    long long por, zam;
//    clock_t start, stop;
//    double czas;
//
//    cout << "Algorytm\tPorownania\tZamiany\t\tCzas[s]\n";
//    cout << "-----------------------------------------------------------\n";
//
//#define TEST(ALG, NAME) \
//    for(int i=0;i<n;i++) tab[i]=baza[i]; \
//    start=clock(); \
//    ALG; \
//    stop=clock(); \
//    czas=(double)(stop-start)/CLOCKS_PER_SEC; \
//    cout<<NAME<<"\t"<<por<<"\t\t"<<zam<<"\t\t"<<czas<<endl;
//
//    TEST(bubbleSort(tab, n, por, zam), "Bubble")
//        TEST(selectionSort(tab, n, por, zam), "Selection")
//        TEST(insertionSort(tab, n, por, zam), "Insertion")
//        por = zam = 0; TEST(quickSort(tab, 0, n - 1, por, zam), "Quick")
//        TEST(heapSort(tab, n, por, zam), "Heap")
//        por = zam = 0; TEST(mergeSort(tab, 0, n - 1, por, zam), "Merge")
//
//        return 0;
//}

// ===================== MAIN =====================
int main()
{
    srand(time(NULL));

    int rozmiary[] = { 2000, 5000, 15000, 25000 };
    int ile = sizeof(rozmiary) / sizeof(rozmiary[0]);

    for (int r = 0; r < ile; r++)
    {
        int n = rozmiary[r];
        cout << "\n====== TEST DLA n = " << n << " ======\n";

        int* baza = new int[n];
        int* tab = new int[n];

        for (int i = 0; i < n; i++)
            baza[i] = rand() % 100000;

        long long por, zam;
        clock_t start, stop;
        double czas;

#define TEST(ALG, NAME) \
        for(int i=0;i<n;i++) tab[i]=baza[i]; \
        start=clock(); \
        ALG; \
        stop=clock(); \
        czas=(double)(stop-start)/CLOCKS_PER_SEC; \
        cout<<NAME<<"\t"<<por<<"\t"<<zam<<"\t"<<czas<<" s\n";

        TEST(bubbleSort(tab, n, por, zam), "Bubble")
            TEST(selectionSort(tab, n, por, zam), "Selection")
            TEST(insertionSort(tab, n, por, zam), "Insertion")
            por = zam = 0; TEST(quickSort(tab, 0, n - 1, por, zam), "Quick")
            TEST(heapSort(tab, n, por, zam), "Heap")
            por = zam = 0; TEST(mergeSort(tab, 0, n - 1, por, zam), "Merge")

            delete[] baza;
        delete[] tab;
    }

    return 0;
}
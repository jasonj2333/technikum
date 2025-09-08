#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SortArray {
private:
    static const int n = 20;
    int numbers[n];
    int searchMax(int);
    void swapElements(int i, int j);
    void randomNumbers();
public:
    void selectionSort();
    void bubbleSort();
    void bubbleSortClassic();
    void insertionSort();
    void quickSort(int left, int right);
    void inputNumbers();
    void outputNumbers();
    void speedTest();
};

void SortArray::inputNumbers() {
    for (int i = 0; i < n; i++)
    {
        cout << "Podaj " << i << " element tablicy: ";
        cin >> numbers[i];
    }
}

void SortArray::outputNumbers() {
    if (n < 100) {
        for (int i = 0; i < n; i++)
        {
            //cout << "Element [" << i << "] = " << numbers[i] << endl;
            cout << numbers[i] << " ";
        }
        cout << endl;
    }

}

void SortArray::randomNumbers() {
    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        numbers[i] = (rand() % 100) + 1;
        //numbers[i] = i;
    }
}


int SortArray::searchMax(int startIndex) {
    int maxNumberIndex = startIndex;
    for (int i = startIndex + 1; i < n; i++)
    {
        if (numbers[i] > numbers[maxNumberIndex]) maxNumberIndex = i;
    }
    return maxNumberIndex;
}

void SortArray::selectionSort() {
    for (int i = 0; i < n - 1; i++)
    {
        int temp = numbers[i];
        int searchIndex = searchMax(i);
        numbers[i] = numbers[searchIndex];
        numbers[searchIndex] = temp;
    }
}

void SortArray::bubbleSort() {

    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (numbers[j] < numbers[i]) {
                swapElements(i, j);
            }
        }
    }
}

void SortArray::bubbleSortClassic() {
    //randomNumbers();
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n - i; j++)
        {
            if (numbers[j - 1] > numbers[j]) {
                swapElements(j - 1, j);
            }
        }
    }
}

void SortArray::insertionSort() {
    int i, j;
    float temp;
    for (i = 1; i < n; i++)
    {
        temp = numbers[i];
        j = i - 1;
        while ((j >= 0) && (numbers[j] > temp))
        {
            numbers[j + 1] = numbers[j];
            j = j - 1;
        }
        numbers[j + 1] = temp;
    }
}

void SortArray::quickSort(int left, int right) {
    int pivot = numbers[(left + right) / 2];
    int i, j, x;
    i = left;
    j = right;

    do {
        while (numbers[i] < pivot) i++;
        while (numbers[j] > pivot) j--;
        if (i <= j)
        {

            x = numbers[i];
            numbers[i] = numbers[j];
            numbers[j] = x;
            i++;
            j--;
        }
    } while (i <= j);

    if (j > left) quickSort(left, j);
    if (i < right) quickSort(i, right);
}

void SortArray::swapElements(int index1, int index2) {
    float temp;
    temp = numbers[index1];
    numbers[index1] = numbers[index2];
    numbers[index2] = temp;
}

void SortArray::speedTest() {
    clock_t start, end;
    double time;
    randomNumbers();
    outputNumbers();

    cout << "Array elements: " << n << endl;

    //bubbleSort
    int* tempArray = new int[n];
    for (int i = 0; i < n; i++)
    {
        tempArray[i] = numbers[i];
    }
    cout << "Bubble sort, please wait! " << endl;
    start = clock();
    bubbleSort();
    end = clock();
    time = (double)(end - start) / CLOCKS_PER_SEC;
    cout << "Time: " << time << " s" << endl << endl;
    outputNumbers();

    //insertionSort
    for (int i = 0; i < n; i++)
    {
        numbers[i] = tempArray[i];
    }
    cout << "Insertion sort, please wait! " << endl;
    start = clock();
    insertionSort();
    end = clock();
    time = (double)(end - start) / CLOCKS_PER_SEC;
    cout << "Time: " << time << " s" << endl << endl;

    //selectionSort
    for (int i = 0; i < n; i++)
    {
        numbers[i] = tempArray[i];
    }
    cout << "Selection sort, please wait! " << endl;
    start = clock();
    selectionSort();
    end = clock();
    time = (double)(end - start) / CLOCKS_PER_SEC;
    cout << "Time: " << time << " s" << endl << endl;

    //quickSort
    for (int i = 0; i < n; i++)
    {
        numbers[i] = tempArray[i];
    }
    cout << "Quick sort, please wait! " << endl;
    start = clock();
    quickSort(0, n - 1);
    end = clock();
    time = (double)(end - start) / CLOCKS_PER_SEC;
    cout << "Time: " << time << " s" << endl << endl;

    delete[] tempArray;

}

int main()
{
    SortArray myArray;
    //myArray.inputNumbers();
    myArray.speedTest();
    /*myArray.selectionSort();*/
    //myArray.outputNumbers();
}
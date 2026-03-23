#include <iostream>
#include <vector>
#include <ctime>;
#include<algorithm>

using namespace std;

class Search {
    vector<int> numbers;
    int n = 20;
public:
    void randomNumbers() {
        srand(time(0));
        int number;
        for (int i = 0; i < n; i++) {
            number = rand() % 20 + 1;
            numbers.push_back(number);
        }
    }

    void outputNumbers() {
        for (int i = 0; i < numbers.size(); i++) {     
            cout << i << "-" << numbers[i] << "\t ";
        }
        cout << endl;
    }

    void sortArray() {
        sort(numbers.begin(), numbers.end());
    }

    int linear(int value) {
        for (int i = 0; i < numbers.size(); i++)
        {
            if (numbers[i] == value) return i;
        }
        return -1;
    }

    int sentinel(int value) {
        numbers.push_back(value);
        int i = 0;
        while (numbers[i] != value) i++;
        int result = -1;
        if (i < n) result = i;
        numbers.pop_back();
        return result;
    }

    int binarySearch(int value) {
        int start = 0;
        int end = numbers.size() - 1;
        int mid = (start + end) / 2;

        while (start <= end) {
            if (numbers[mid] == value) return mid;

            if (numbers[mid] > value) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
            mid = (start + end) / 2;
        }
        return -1;
    }
};

int main()
{
    Search numbers;
    numbers.randomNumbers();
    numbers.outputNumbers();
    numbers.sortArray();
    numbers.outputNumbers();
    
    //cout << numbers.linear(10) << endl;
    //cout << numbers.sentinel(10) << endl;
    cout << numbers.binarySearch(17) << endl;

    numbers.outputNumbers();
}

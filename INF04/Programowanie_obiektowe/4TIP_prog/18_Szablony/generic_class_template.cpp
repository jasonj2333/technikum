#include<iostream>
using namespace std;

template <class T, int length>
class Array{
public:
    T array[length];

    void fill(T value){
        for (int i = 0; i < length; i++)
        {
            array[i] = value;
        }
        
    }

    void list(){
        for (int i = 0; i < length; i++)
        {
           cout << "Arr[" << i << "]: " << array[i] << endl;
        }
    }

    T& at(int index){
        return array[index];
    }
};

int main()
{
    Array<int, 9> intArray;
    intArray.fill(2);
    cout << "intArray[4]: " << intArray.at(4) << endl;

    Array<string, 5> strArray;
    strArray.fill("C++");
    cout << "strArray[4]: " << strArray.at(4) << endl;
    strArray.at(4) = "PHP";
    strArray.list();
    return 0;
}
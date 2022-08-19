#include <iostream>
using namespace std;

class ArrAdt
{
private:
    int capacity;
    int lastIndex;
    int *array;

public:
    ArrAdt()
    {
        capacity=0;
        lastIndex = -1;
        array = NULL;
    }
    void display(int arr[]);
    void createArray(int cap);
};
void ArrAdt::createArray(int cap)
{   
    capacity=cap;
    lastIndex=-1;
    array = new int[cap];
}
void ArrAdt:: display(int arr[])
{
    
}
int main()
{
    ArrAdt MyArr;
    int size;
    MyArr.createArray(size);

    return 0;
}
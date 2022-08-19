#include <iostream>
using namespace std;
class Static
{

    int emp;
    static int id;

public:
    void setData()
    {
        cout << "Enter emp no" << endl;
        cin >> emp;
        id++;
    }
    void getData()
    {
        cout << "The Employee number is " << emp << " and id no. is " << id << endl;
    }

} a, b, c;
int Static::id = 100;
int main()
{
    a.setData();
    a.getData();
    b.setData();
    b.getData();
    c.setData();
    c.getData();

    return 0;
}
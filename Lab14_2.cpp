#include <iostream>
using namespace std;



//7.Напишите небольшую программу с объявлением класса, имеющего одну переменную-член  и одну статическую переменную-член. 
//Пусть конструктор инициализирует переменную-член и инкрементирует статическую переменную член, а деструктор – декрементирует ее.

class abs
{
private:
    int a_value;
    static int b_value;
public:
    abs(int value):a_value(value) { b_value++; }
    virtual  ~abs() { b_value--; }
    virtual void Set_b_value(int value) { b_value = value; }
    virtual int Get_b_value() { return b_value; }
    virtual int Get_a_value() { return a_value; }
};
int abs::b_value = 10;


//8.Напишите драйвер к yп.7, в котором создается три объекта и на экран выводятся значения обычной и статической переменных членов класса. 
//Уничтожьте эти объекты и проследите как будет меняться значение статической переменной члена

int main()
{
    const int MaxNumber = 3;
    abs* Numbers[MaxNumber];
    for (int i = 0; i < MaxNumber; i++)
    {
        Numbers[i] = new abs(i);
    }
    for (int i = 0; i < MaxNumber; i++)
    {
        cout << Numbers[i]->Get_a_value()+1;
        cout << Numbers[i]->Get_b_value();
        delete Numbers[i];
        Numbers[i] = 0;
    }
    return 0;
}
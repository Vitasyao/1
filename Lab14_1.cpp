#include <iostream>
using namespace std;


class Car
{
public:
	//1.�������� ���������� ����������� ���������� � �����.
	static int max_speed;//�� ��������� ����� 0.
	//������� ��� 5-�� ������
	long Avg_Speed1(int min_speed)
	{
		long avg_speed = (Car::max_speed + min_speed) / 2;
		return avg_speed;
	}
	long Avg_Speed2(int min_speed)
	{
		long avg_speed = (Car::max_speed + min_speed) / 2;
		return avg_speed;
	}
	long Avg_Speed3(int min_speed)
	{
		long avg_speed = (Car::max_speed + min_speed) / 2;
		return avg_speed;
	}
};

int Car::max_speed = 240; //2.�������� ����������� ����������� ���������� � �����.
typedef long Avg_Speed_t;



//3.�������� ���������� ��������� �� �������, ������������ long � ����������� �����.
long Avg_Speed(int min_speed)
{
	long avg_speed = (Car::max_speed + min_speed) / 2;
	return avg_speed;
}
int main()
{
	long (*fcnPtr)(int);
	fcnPtr = Avg_Speed;
}
*/


//4.�������� y�.3 ���, ��� ���� �� ������� ���� ������ ������  Car
class Car
{
public:
	static int max_speed;//�� ��������� ����� 0.
	long Avg_Speed(int min_speed)
	{
		long avg_speed = (Car::max_speed + min_speed) / 2;
		return avg_speed;
	}
};


int main()
{
	long (Car::* fcnPtr)(int);
	fcnPtr = Car::Avg_Speed;
}
*/


int main()
{
	//5.��������  ���������� ������� 10 ���������� y�.4.
	long(Car:: * fncPtr[])(int) =
	{ Car::Avg_Speed1, Car::Avg_Speed2, Car::Avg_Speed3 /*� ��� �� 10 */ };	
	//6.���������� �.5, ��������� �������� typedef.
	Avg_Speed_t(Car:: * fncPtr[])(int) =
	{ Car::Avg_Speed1, Car::Avg_Speed2, Car::Avg_Speed3 /*� ��� �� 10 */ };
	return 0;
}
#include <iostream>
using namespace std;


class Car
{
public:
	//1.Ќапишите объ€вление статической переменной Ц члена.
	static int max_speed;//по умолчанию равно 0.
	//‘ункции дл€ 5-го пункта
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

int Car::max_speed = 240; //2.Ќапишите определение статической переменной Ц члена.
typedef long Avg_Speed_t;



//3.Ќапишите объ€вление указател€ на функцию, возвращающую long и принимающую целое.
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


//4.»змените yп.3 так, как если бы функци€ была членом класса  Car
class Car
{
public:
	static int max_speed;//по умолчанию равно 0.
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
	//5.Ќапишите  объ€вление массива 10 указателей yп.4.
	long(Car:: * fncPtr[])(int) =
	{ Car::Avg_Speed1, Car::Avg_Speed2, Car::Avg_Speed3 /*и так до 10 */ };	
	//6.–еализуйте п.5, использу€ оператор typedef.
	Avg_Speed_t(Car:: * fncPtr[])(int) =
	{ Car::Avg_Speed1, Car::Avg_Speed2, Car::Avg_Speed3 /*и так до 10 */ };
	return 0;
}
#include <iostream>
using namespace std;


class Transport
{
protected:
	string model;
	float weight;
	float speed;
	
public:
	virtual void Set_Model() {}
	string Get_model() { return model; }
	virtual void Set_weight() { }
	float Get_weight() { return weight; }
	virtual void Set_speed() { }
	float Get_speed() { return speed; }
	Transport()
	{

	}
	Transport(string Model, float Weight, float Speed)
		:model(Model), weight(Weight), speed(Speed)
	{

	}
	~Transport() {}
};


class Car : virtual Transport
{
protected:
	float trunk;
public:
	void Set_trunk(float Trunk) { trunk = Trunk; }
	string Get_model() { return model; }
	virtual void Set_model(string Model) { model = Model; }
	virtual void Set_weight(float Weight) { weight = Weight; }
	virtual void Set_speed(float Speed) { speed = Speed; }
	Car() {}
	Car(string Model, float Weight, float Speed, float Trunk)
		:trunk(Trunk), Transport(Model, Weight, Speed)
	{ }
	~Car() { }
};


class Bus : virtual Transport
{
public:
	int passenger_capacity;
	virtual void Set_model(string Model) { model = Model; }
	virtual void Set_weight(float Weight) { weight = Weight; }
	virtual void Set_speed(float Speed) { speed = Speed; }
	Bus() { }
	Bus(string Model, float Weight, float Speed, int Passenger_capacity)
		:passenger_capacity(Passenger_capacity), Transport(Model, Weight, Speed)
	{ }
	~Bus() { }
};


class MicroBus : public Car, public Bus
{
public:
	MicroBus() { }
	MicroBus(string Model, float Weight, float Speed, int Passenger_capacity, float Trunk)
		:Car(Model, Weight, Speed, Trunk), Bus(Model, Weight, Speed, Passenger_capacity)
	{ }
	~MicroBus() { }
};


class SportCar : virtual Car
{
protected: 
	float max_speed;
public:
	SportCar() { }
	SportCar(float Max_speed, string Model, float Weight, float Speed, float Trunk)
		:Car(Model, Weight, Speed, Trunk), max_speed(Max_speed)
	{ }
	~SportCar() {}
};


class Vagon : virtual Car
{
protected:
	float max_weight;
public:
	Vagon() { }
	Vagon(float Max_Weight, string Model, float Weight, float Speed, float Trunk)
		:Car(Model, Weight, Speed, Trunk), max_weight(Max_Weight)
	{ }
	~Vagon() { }
};


int main()
{
	return 0;
} 
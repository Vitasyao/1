#include <iostream>
using namespace std;


class Rocket
{
	protected:
		float jet_thrust;
	public:
		void  Set_jet_thrust(float Jet_thrust) { jet_thrust = Jet_thrust; }
		float Get_jet_thrust() { return jet_thrust; }
		Rocket()
		{

		}
		Rocket(float Jet_thrust)
		{
			jet_thrust = Jet_thrust;
		}
		~Rocket() { }
};


class AirPlane
{
	protected:
		float speed;
		string model;
		float weight;
		float wingspan;
	public:
		void Set_speed(float Speed) { speed = Speed; }
		float Get_speed() { return speed; }
		void Set_model(string Model) { model = Model; }
		string Get_model() { return model; }
		void Set_weight(float Weight) { weight = Weight; }
		float Get_weight() { return weight; }
		void  Set_wingspan(float Wingspan) { wingspan = Wingspan; }
		float Get_wingspan() { return wingspan; }
		AirPlane()
		{

		}
		AirPlane(float Speed, string Model, float Weight, float Wingspan)
		{
			speed = Speed;
			model = Model;
			weight = Weight;
			wingspan = Wingspan;
		}
		~AirPlane() { }
};


class JetPlane : public Rocket, public AirPlane
{
	protected:
		string type;
	public:
		void Set_type(string Type) { type = Type; }
		string Get_type() { return type; }
		JetPlane()
		{

		}
		JetPlane(string Type, float Speed, float Weight, string Model, float Wingspan, float Jet_thrust) 
			: AirPlane(Speed, Model, Weight, Wingspan), Rocket (Jet_thrust)
		{
			type = Type;
		}
		~JetPlane() { }
};


class B747 : JetPlane
{
public:
	B747()
	{

	}
	B747(string Type, float Speed, string Model, float Weight,float Wingspan, float Jet_trhust)
		:JetPlane(Type, Speed, Weight, Model, Wingspan, Jet_trhust)
	{
		Model = "B747";
	}
};


int main()
{
	return 0;
}
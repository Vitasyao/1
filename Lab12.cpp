#include <iostream>
using namespace std;


class Shape
{
protected: 
	string color;
	float line_thickness;
public:
	void setColor(string Color) { color = Color; }
	string getColor() { return color; }
	void setLine_thickness(float Line_thickness) { line_thickness = Line_thickness; }
	float getLine_thickness() { return line_thickness; }
	float Area() { }
	float Perimeter() { }
	Shape() {  }
	Shape(string Color, float Line_thickness) {
		color = Color;
		line_thickness = Line_thickness;
	}
	~Shape() { }
};


class Square : virtual Shape
{
protected:
	float side_a;
public:
	void setSide_a(float Side_a) { side_a = Side_a; }
	float getSide_a() { return side_a; }
	float Area(float Side_a)
	{
		return Side_a * Side_a;
	}
	float Perimeter(float Side_a)
	{
		return 4 * Side_a;
	}
	Square(string Color, float Line_thickness, float Side_a) : Shape(Color, Line_thickness)
	{
		side_a = Side_a;
	}
	~Square() { }
};



class Rectangle : virtual Square
{
protected:
	float side_b;
public:
	void setSide_b(float Side_b) { side_b = Side_b; }
	float getSide_b() { return side_b; }
	float Area(float Side_a, float Side_b)
	{
		return Side_a * Side_b;
	}
	float Perimeter(float Side_a, float Side_b)
	{
		return 2 * (Side_a + Side_b);
	}
	Rectangle(string Color, float Line_thickness, float Side_a, float Side_b) : Square(Color, Line_thickness, Side_a)
	{
		side_b = Side_b;
	}
	~Rectangle() { }
};


int main()
{
	string Color, a;
	float Line_thickness, Side_a, Side_b;
	cout << "хотите создать квадрат или пр€моугольник?(¬ведите ""к"" или ""т"")" << endl;
	cin >> a;
	if (a == "к")
	{
		cout << "÷вет ввода, толщина линии, длина стороны: " << endl;
		cin >> Color >> Line_thickness >> Side_a;
		Square square = Square(Color, Line_thickness, Side_a);
		cout << "ѕлощадь и периметр квадрата равны: " << square.Area(Side_a) << ", " << square.Perimeter(Side_a) << endl;
	}
	else if (a == "т")
	{
		cout << "÷вет ввода, толщина линии, высота и ширина: " << endl;
		cin >> Color >> Line_thickness >> Side_a >> Side_b;
		Rectangle rectangle = Rectangle(Color, Line_thickness, Side_a, Side_b);
		cout << "The area and perimeter of the square are equal: " << rectangle.Area(Side_a, Side_b) << ", " << rectangle.Perimeter(Side_a, Side_b) << endl;
	}
	else
	{
		cout << "¬ведите только ""т"" или ""к""!!!" << endl;
	}
	cin.get();
	return 0;
}
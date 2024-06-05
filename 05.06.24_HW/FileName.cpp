#include <iostream>
using namespace std;

class Fract
{
	int a;
	int b;
public:
	Fract()
	{
		a = b = 0;
	}
	Fract(int A, int B)
	{
		a = A;
		b = B;
	}
	void Print()
	{
		cout << a << "/" << b << endl;
	}
	Fract operator+(Fract& b)
	{
		Fract c;
		c.b = this->b * b.b;
		c.a = this->a * b.b + b.a * this->b;
		if (c.b != 0)
		{
			return c;
		}
	}
	Fract operator-(Fract& b)
	{
		Fract c;
		c.b = this->b * b.b;
		c.a = this->a * b.b - b.a * this->b;
		if (c.b != 0)
		{
			return c;
		}
	}
	Fract operator*(Fract& b)
	{
		Fract c;
		c.b = this->b * b.b;
		c.a = this->a * b.a;
		if (c.b != 0)
		{
			return c;
		}
	}
	Fract operator/(Fract& b)
	{
		Fract c;
		c.b = this->b * b.a;
		c.a = this->a * b.b;
		if (c.b != 0)
		{
			return c;
		}
	}
};



int main()
{
	Fract a(1, 3), b(4, 2);
	Fract c = a * b;
	c.Print();
	c = a / b;
	c.Print();

}
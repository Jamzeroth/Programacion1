#include<iostream>
#include<math.h>
using namespace std;

class triangulo{
	private:
		int lado1;
		int lado2;
		int lado3;
	public:
	triangulo(int a, int b, int c);
	float area();
	void tipodeTriangulo();
};

triangulo::triangulo(int a, int b, int c)
		{
			lado1 = a;
			lado2 = b;
			lado3 = c;
		}

float triangulo::area()
{
	float perimetro, area;
	perimetro = (lado1+lado2+lado3)/2;
	area = sqrt(perimetro*(perimetro-lado1)*(perimetro-lado2)*(perimetro-lado3));

	return area;
}

void triangulo::tipodeTriangulo()
{
	if(lado1 == lado2 == lado3)
		cout << "Triangulo Equilatero";
		else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
				cout << "Triangulo Isosceles";
				else
					cout << "Trinagulo escaleno";
}

int main()
{
	int a,b,c;

	cout << "Primer lado:";
	cin >> a;
	cout << "Segundo lado:";
	cin >> b;
	cout << "Tercer lado:";
	cin >> c;
	triangulo z = triangulo (a, b, c);
	cout << "Area: " << z.area() << endl;
	cout << "Tipo de Triangulo: ";
	z.tipodeTriangulo();

	return 0;
}


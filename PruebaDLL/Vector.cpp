#include "Vector.h"

Vector::Vector(int tam) : _tam{ tam }
{
	_vector = new int[tam];
}

void Vector::insertar(int elemento, int pos)
{
	if (pos < _tam)
		_vector[pos] = elemento;
}

int Vector::elemento(int pos) const
{
	if (pos < _tam)
		return _vector[pos];
}

Vector::~Vector()
{
	delete[] _vector;
}

Vector& Vector::operator =(const Vector& V)
{
	delete[] _vector;
	_tam = V._tam;
	_vector = new int[_tam];

	return *this;
}

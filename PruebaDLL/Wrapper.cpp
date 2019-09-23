#include "Wrapper.h"
#include "Vector.h"

// Instancia de vector
static Vector vector;

// Funciones del wrapper
void ConVector(int tam)
{
	vector = Vector(tam);
}

void insertar(int elemento, int pos)
{
	vector.insertar(elemento, pos);
}

int elemento(int pos)
{
	return vector.elemento(pos);
}

int tam()
{
	return vector.tam();
}

void DesVector()
{
	vector.~Vector();
}

#ifndef VECTOR_H
#define VECTOR_H

class Vector {
public:

	// Constructores
	Vector() {};
	Vector(int);

	// Modificadores
	void insertar(int, int);
	
	// Observadores
	int elemento(int) const;
	inline int tam() const { return _tam; }

	// Operadores
	Vector& operator =(const Vector&);

	// Destructor
	~Vector();

private:

	int* _vector;
	int _tam;

};


#endif


# pragma once
# include <iostream>

template <typename T>
class Array
{
	private:
		T* elements; // Puntero a la memoria donde se almacenan los elementos
		size_t length; // Numero de elementos del array
	public:
		Array();
		Array(size_t n);
		Array(Array const &obj);
		Array &operator=(Array const &rhs);
		~Array();

    T& operator[](size_t index);          // Acceso a elementos con []
    const T& operator[](size_t index) const;  // Versión constante de []

    size_t size() const;  // Devuelve el número de elementos
};
#include "Array.tpp"

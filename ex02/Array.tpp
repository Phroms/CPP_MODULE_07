# include "Array.hpp"
# include <iostream>

template <typename T>
Array<T>::Array()
{
	elements = NULL;
	length = 0;
}

template <typename T>
Array<T>::Array(size_t n)
		: length(n)
{
	elements = new T[n](); // Asigna memoria 'n' elementos, inicializamos
}

template <typename T>
Array<T>::Array(Array<T> const &obj)
	: length(obj.length)
{
	elements = new T[length]; // Asigna nueva memoria
	for (size_t i = 0; i < length; i++)
		elements[i] = obj.elements[i]; // Copia de cada elemento
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> const &rhs)
{
	if (this != &rhs)
		delete[] elements;

	length = rhs.length;
	elements = new T[length];
	for (size_t i = 0; i < length; i++)
	{
		elements[i] = rhs.elements[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array() 
{
	delete[] elements;
}

template <typename T>
T& Array<T>::operator[](size_t index)
{
	if (index >= length)
		throw std::range_error ("Error"); // Si el índice está fuera de rango, lanza una excepción
	return elements[index]; // Devuelve el elemento en la posición indicada
}

template <typename T>
size_t Array<T>::size() const
{
	return length; // Retorna la cantidad del elemento
}

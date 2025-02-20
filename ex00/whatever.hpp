# pragma once
# include <iostream>

/* Template para intercambiar valores */
template <typename T> // Definicion que acepta cualquier tipo de dato
void swap(T &a, T &b) // Se pasan las variables por referencia para modificarlas
{
	T middleman;

	middleman = a;
	a = b;
	b = middleman;
}

/* Template para encontrar el minimo de dos valores */
template <typename T>
T min(T &x, T &y) // Se envia por referencia para no hacer copias innecesarias
{
	return (x < y) ? x : y; // Devuelve el menor de los dos valores
}

template <typename T> 
T max(T &x, T &y)
{
	return (x > y) ? x : y; // Devuelve el mayor de los dos valores
}

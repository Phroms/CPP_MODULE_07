# pragma once
#include <filesystem>
# include <iostream>

/* Template iter: Aplica una funcion para cada elemento del array */
template <typename T, typename F> // T: tipo de dato del array, F: tipo de la funcion
void iter(T *address, size_t &len_str, F function)
{
	if (!address)
	{
		std::cout << "Error: Array is empty" << std::endl;
		return ;
	}
	for (size_t i = 0; i < len_str; i++) // Recorremos todo el tamano del array
		function(address[i]); // Aplicamos function a cada elemento del array
}

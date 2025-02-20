# pragma once
# include <iostream>

template <typename T, typename F> 
void iter(T *address, size_t &len_str, F function)
{
	for (size_t i = 0; i < len_str; i++)
		function(address[i]);
}

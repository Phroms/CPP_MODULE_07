# include "iter.hpp"

void incrementInt(int &x)
{
	x = x + 2;
}

template <typename T>
void printArray(T &elements)
{
	std::cout << elements << std::endl;
}

int main()
{
	std::cout << "\033[93m\n----Test with int----\n\033[0m" << std::endl;

	int array[] = {1, 2, 3, 4, 5};
	size_t size = sizeof(array) / sizeof(array[0]);
	::iter(array, size, printArray<int>);

	std::cout << "\033[93m\n----Test increment int----\n\033[0m" << std::endl;

	int array2[] = {10, 20, 40, 50, 80};
	size_t size_2 = sizeof(array) / sizeof(array2[0]);
	::iter(array2, size_2, incrementInt);
	::iter(array2, size_2, printArray<int>);

	std::cout << "\n" << std::endl;
}

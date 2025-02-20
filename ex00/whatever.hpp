# pragma once
# include <iostream>

template <typename T> void swap(T &a, T &b)
{
	T middleman;

	middleman = a;
	a = b;
	b = middleman;
}

template <typename T> T min(T &x, T &y)
{
	return (x < y) ? x : y;
}

template <typename T> T max(T &x, T &y)
{
	return (x > y) ? x : y;
}

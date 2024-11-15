// ███████╗████████╗     ██████╗ ██╗   ██╗████████╗ ██████╗██╗  ██╗ █████╗ ██████╗
// ██╔════╝╚══██╔══╝     ██╔══██╗██║   ██║╚══██╔══╝██╔════╝██║  ██║██╔══██╗██╔══██╗
// █████╗     ██║        ██████╔╝██║   ██║   ██║   ██║     ███████║███████║██████╔╝
// ██╔══╝     ██║        ██╔═══╝ ██║   ██║   ██║   ██║     ██╔══██║██╔══██║██╔══██╗
// ██║        ██║███████╗██║     ╚██████╔╝   ██║   ╚██████╗██║  ██║██║  ██║██║  ██║
// ╚═╝        ╚═╝╚══════╝╚═╝      ╚═════╝    ╚═╝    ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝
//
// <<main.cpp>>

#include "iter.hpp"
#include <iostream>

#define _ALEN 5
#define _BLEN 4

static inline void	inc(int &n);
static inline void	dec(int &n);
static inline void	incl(long &n);
static inline void	decl(long &n);

int	main(void)
{
	int		a[_ALEN] = {2, 5, 2, -23, 42};
	long	b[_BLEN] = {5731853735, 213, 414151532, -214721};
	size_t	i;

	std::cout << "a: ";
	for (i = 0; i < _ALEN; i++)
		std::cout << a[i] << " ";
	std::cout << "\n";
	std::cout << "b: ";
	for (i = 0; i < _BLEN; i++)
		std::cout << b[i] << " ";
	std::cout << "\n";

	std::cout << "\e[38;5;42;1mItering...\e[m\n";

	::iter(a, _ALEN, inc);
	::iter(b, _BLEN, decl);

	std::cout << "a: ";
	for (i = 0; i < _ALEN; i++)
		std::cout << a[i] << " ";
	std::cout << "\n";
	std::cout << "b: ";
	for (i = 0; i < _BLEN; i++)
		std::cout << b[i] << " ";
	std::cout << "\n";

	std::cout << "\e[38;5;42;1mItering...\e[m\n";

	::iter(a, _ALEN, dec);
	::iter(b, _BLEN, incl);

	std::cout << "a: ";
	for (i = 0; i < _ALEN; i++)
		std::cout << a[i] << " ";
	std::cout << "\n";
	std::cout << "b: ";
	for (i = 0; i < _BLEN; i++)
		std::cout << b[i] << " ";
	std::cout << "\n";

	return 0;
}

static inline void	inc(int &n)
{
	n++;
}

static inline void	dec(int &n)
{
	n--;
}

static inline void	incl(long &n)
{
	n++;
}

static inline void	decl(long &n)
{
	n--;
}

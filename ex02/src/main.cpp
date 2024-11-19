// ███████╗████████╗     ██████╗ ██╗   ██╗████████╗ ██████╗██╗  ██╗ █████╗ ██████╗
// ██╔════╝╚══██╔══╝     ██╔══██╗██║   ██║╚══██╔══╝██╔════╝██║  ██║██╔══██╗██╔══██╗
// █████╗     ██║        ██████╔╝██║   ██║   ██║   ██║     ███████║███████║██████╔╝
// ██╔══╝     ██║        ██╔═══╝ ██║   ██║   ██║   ██║     ██╔══██║██╔══██║██╔══██╗
// ██║        ██║███████╗██║     ╚██████╔╝   ██║   ╚██████╗██║  ██║██║  ██║██║  ██║
// ╚═╝        ╚═╝╚══════╝╚═╝      ╚═════╝    ╚═╝    ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝
//
// <<main.cpp>>

#include <iostream>
#include "Array.hpp"

int	main(void)
{
	try {
		size_t			i;
		Array<int>		a(5);
		Array<char>		b(3);
		Array<float>	c(4);
		Array<double>	d;
		Array<int>		e;

		for (i = 0; i < a.size(); i++)
			a[i] = i;
		for (i = 0; i < b.size(); i++)
			b[i] = i + 0x40;
		for (i = 0; i < c.size(); i++)
			c[i] = static_cast<float>(i) * 3.14f;

		try {
			for (i = 0;; i++)
				std::cout << "a[" << i << "]: " << a[i] << "\n";
		} catch (std::exception &e) {
			std::cout << e.what() << "\n";
		}
		try {
			for (i = 0;; i++)
				std::cout << "b[" << i << "]: " << b[i] << "\n";
		} catch (std::exception &e) {
			std::cout << e.what() << "\n";
		}
		try {
			for (i = 0;; i++)
				std::cout << "c[" << i << "]: " << c[i] << "\n";
		} catch (std::exception &e) {
			std::cout << e.what() << "\n";
		}
		try {
			for (i = 0;; i++)
				std::cout << "d[" << i << "]: " << d[i] << "\n";
		} catch (std::exception &e) {
			std::cout << e.what() << "\n";
		}

		e = a;
		for (i = 0; i < e.size(); i++)
			e[i] *= 3;
		try {
			for (i = 0;; i++)
				std::cout << "a[" << i << "]: " << a[i] << "\n";
		} catch (std::exception &e) {
			std::cout << e.what() << "\n";
		}
		try {
			for (i = 0;; i++)
				std::cout << "e[" << i << "]: " << e[i] << "\n";
		} catch (std::exception &e) {
			std::cout << e.what() << "\n";
		}

		return 0;
	} catch (std::exception &e) {
		std::cout << "arr: " << e.what() << "\n";
	}
	return 1;
}
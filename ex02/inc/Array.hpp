// ███████╗████████╗     ██████╗ ██╗   ██╗████████╗ ██████╗██╗  ██╗ █████╗ ██████╗
// ██╔════╝╚══██╔══╝     ██╔══██╗██║   ██║╚══██╔══╝██╔════╝██║  ██║██╔══██╗██╔══██╗
// █████╗     ██║        ██████╔╝██║   ██║   ██║   ██║     ███████║███████║██████╔╝
// ██╔══╝     ██║        ██╔═══╝ ██║   ██║   ██║   ██║     ██╔══██║██╔══██║██╔══██╗
// ██║        ██║███████╗██║     ╚██████╔╝   ██║   ╚██████╗██║  ██║██║  ██║██║  ██║
// ╚═╝        ╚═╝╚══════╝╚═╝      ╚═════╝    ╚═╝    ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝
//
// <<Array.hpp>>

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template <typename T> class Array
{
	private:
		T*		_arr;
		size_t	_size;

	public:

		Array(void);
		Array(const size_t &size);
		Array(const Array &copy);
		Array &operator=(const Array &copy);
		~Array(void);

		// overload
		T	&operator[](const size_t &i) const;

		// misc
		const size_t	&size(void) const;

		// exception
		class IndexOutOfBoundsException: public std::exception {
			const char	*what(void) const noexcept;
		};
};

# include "Array.tpp"

#endif

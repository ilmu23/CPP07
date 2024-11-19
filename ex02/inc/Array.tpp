// ███████╗████████╗     ██████╗ ██╗   ██╗████████╗ ██████╗██╗  ██╗ █████╗ ██████╗
// ██╔════╝╚══██╔══╝     ██╔══██╗██║   ██║╚══██╔══╝██╔════╝██║  ██║██╔══██╗██╔══██╗
// █████╗     ██║        ██████╔╝██║   ██║   ██║   ██║     ███████║███████║██████╔╝
// ██╔══╝     ██║        ██╔═══╝ ██║   ██║   ██║   ██║     ██╔══██║██╔══██║██╔══██╗
// ██║        ██║███████╗██║     ╚██████╔╝   ██║   ╚██████╗██║  ██║██║  ██║██║  ██║
// ╚═╝        ╚═╝╚══════╝╚═╝      ╚═════╝    ╚═╝    ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝
//
// <<Array.tpp>>

template <typename T> Array<T>::Array(void): _arr(nullptr), _size(0) {}

template <typename T> Array<T>::Array(const size_t &size): _arr(new T[size]), _size(size) {}

template <typename T> Array<T>::Array(const Array<T> &copy)
{
	*this = copy;
}

template <typename T> Array<T>	&Array<T>::operator=(const Array<T> &copy)
{
	size_t	i;

	if (this == &copy)
		return *this;
	delete[] this->_arr;
	this->_arr = new T[copy._size];
	for (i = 0; i < copy._size; i++)
		this->_arr[i] = copy._arr[i];
	this->_size = copy._size;
	return *this;
}

template <typename T> Array<T>::~Array(void)
{
	delete[] this->_arr;
}

// overload

template <typename T> T	&Array<T>::operator[](const size_t &i) const
{
	if (i >= this->_size)
		throw Array<T>::IndexOutOfBoundsException();
	return this->_arr[i];
}

// misc

template <typename T> const size_t	&Array<T>::size(void) const
{
	return this->_size;
}

// exception

template <typename T> const char	*Array<T>::IndexOutOfBoundsException::what(void) const noexcept
{
	return "Index out of bounds";
}

#pragma once
template<class T, size_t N>
class FixedList
{
	size_t size;
	std::list<N> container;

public:
	FixedVector() : container(std::list<T>(size_t, T(0))) {};
	~FixedVector() {};
	const T& get(unsigned int index) const {
		int count = 0;
		for (std::list<T>::iterator it = container.begin(); it != container.end(); ++it)
			if (count == index) {
				return it;
			}
		count++;
	}
	T& operator[](unsigned int index) {
		int count = 0;
		for (std::list<T>::iterator it = container.begin(); it != container.end(); ++it)
			if (count == index) {
				return it;
			}
		count++;
	}
	int getFirstIndex(const T& t) const {
		int count = 0;
		for (std::list<T>::iterator it = container.begin(); it != container.end(); ++it)
			if (it == t) {
				return count;
			}
		return -1;
	}
	size_t size() const {
		int count = 0;
		for (std::list<T>::iterator it = container.begin(); it != container.end(); ++it) {
			
		}
		return count;
	}

	size_t capacity() const {
	
	}
	bool add(const T& t) {
		container.push_back(t);
	}

	T remove(const T& t) {
		int count = 0;
		for (std::list<T>::iterator it = container.begin(); it != container.end(); ++it)
			if (it == t) {
				container.erase(it);
				return it;
			}
	}
};
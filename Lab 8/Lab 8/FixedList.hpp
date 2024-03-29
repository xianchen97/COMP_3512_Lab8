#pragma once
#include <array>
#include <iterator>
#include <iostream>
template<class T, size_t N>
class FixedList
{
	size_t size = 0;
	size_t capacity{ N };
	std::array<T, N> container;

public:
	/* Constructor to be set using template parameter */
	FixedList<T, N>::FixedList()
	{
	}

	FixedList<T, N>::~FixedList()
	{
	}



	/*
	Returns the value at the index.
	PRECONDTION: The list has to be initiated.
	POSTCONDITION: Returns the value at the index.
	*/
	const T& get(unsigned int index) const {
		int count = 0;
		for (auto it = container.begin(); it != container.end(); ++it) {
			if (count == index) {
				return *it;
			}
			count++;
		}
	}
	/* Overloading the subscript operator
	PRECONDITION: A list has to be initiated.
	Value must exist in the list.
	*/
	T& operator[](unsigned int index) {
		return container[int];
	}

	/**
	Return the first index of the first occurence of an element in the list.
	PRECONDITION: List must be initiated.
	The value must exist in the list.
	POSTCONDITION: Returns the index of the first occurrence of an element in the list.
	**/
	int getFirstIndex(const T& t) const {
		int count = 0;
		for (auto it = container.begin(); it != container.end(); ++it) {
			if (count == index) {
				*it == t;
				return count;
			}
			count++;
		}
		return count;
	}

	/**
	Return the current number of elements in the list.
	PRECONDITION: The list is created.
	List is at least of size 1.
	POSTCONDITION: Returns the current number of elements in the list.
	**/
	size_t sizeCalc() const {
		return size;
	}

	/**
	Return the max size of the list.
	PRECONDITON: The list has been created.
	POSTCONDITION: Returns the number of elements in the list.
	**/
	size_t capacityCalc() const {
		return capacity;
	}

	/*
	Adds an element to the back of the list.
	PRECONDITION: List has been created.
	List cannot be full.
	POSTCONDITION: Element has been pushed to the back of the list.
	*/
	 bool add(const T & t)
	{
		if (size == capacity) {
			return false;
		}
		else {
			container[size] = t;
			std::cout << t << endl;
			size++;
			return true;
		}	
	}

	/*
	Removes the first occurence of an element in the list and returns the value.
	PRECONDITION: The list has been created.
	Value exists in the list.
	POSTCONDITION: Returns the value that was removed;
	*/
	T remove(const T& t) {
		for (std::array<T>::iterator it = container.begin(); it != container.end(); ++it) {
			if ((T)it == t) {
				container.erase(it);
				size--;
				return it;
			}
		}

	}
};


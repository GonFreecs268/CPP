/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:05:02 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/08 19:21:09 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

/* ************************************************************************** */
/*                     Constructeurs & Destructeurs                   		  */
/* ************************************************************************** */

template<typename T>
Array<T>::Array() {
	
	this->_array = NULL;
	this->_size = 0;
	std::cout << _YELLOW "Default Constructor called: Array" _END << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n) {
	
	_array = new T[n];
	if (!_array)
		throw std::exception();
	std::cout << _YELLOW "Parametric Constructor called: Array" _END << std::endl;
}

template<typename T>
Array<T>::Array(Array<T> const &src) {

	_size = src._size;
	if (_size == 0)
	{
		_array = NULL;
		return ;
	}
	else
	{
		_array = new T[size];
		if (!_array)
			throw std::exception();
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = src._array[i];
	}
	std::cout << _YELLOW "Copy Constructor called: Array" _END << std::endl;
}

template<typename T>
Array<T>::~Array() {

	if (_array != NULL)
		delete [] _array;
	std::cout << _YELLOW "Destructor called: Array" _END << std::endl;
}

/* ************************************************************************** */
/*                     Surcharges d'opérateurs                  		      */
/* ************************************************************************** */

template<typename T>
Array<T> &Array<T>::operator=(Array<T> const &rhs) {
	
	if (this != &rhs)
	{
		if (_array)
			delete _array;
		_size = rhs.__size;
		if (_size == 0)
			_array = NULL;
		else
		{
			_array = new T[_size];
			if (!_array)
				throw std::exception();
			for (unsigned int i = 0; i < _size, i++)
				_array[i] = rhs._array[i];
		}
	}
	std::cout << _YELLOW "Assignment Operator called: Array" _END << std::endl;
	return (*this);
}

template<typename T>
T	&Array<T>::operator[](unsigned int n) const {

	if (n >= size)
	{
		throw Array<T>::WrongIndex();
	}
	return (_array[n]);
}

/* ************************************************************************** */
/*                   			  Méthodes                 		              */
/* ************************************************************************** */

template<typename T>
unsigned int	Array<T>::size() const {

	return (_size);
}

/* ************************************************************************** */
/*                   			  Exception                 		          */
/* ************************************************************************** */

template<typename T>
const char *Array<T>::WrongIndex::what() const throw() {

	return ("IMVALID INDEX");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:55:52 by jaristil          #+#    #+#             */
/*   Updated: 2024/03/01 17:53:17 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/PmergeMe.hpp"

/* ************************************************************************** */
/*                     Constructeurs & Destructeurs                   		  */
/* ************************************************************************** */

PmergeMe::PmergeMe() {

	std::cout << _YELLOW "Default Constructor called: PmergeMe" _END << std::endl;
}

PmergeMe::PmergeMe(PmergeMe const &src) {

	std::cout << _YELLOW "Copy Constructor called: PmergeMe" _END << std::endl;
	*this = src;
}

PmergeMe::~PmergeMe() {

	std::cout << _YELLOW "Destructor called: PmergeMe" _END << std::endl;
}

/* ************************************************************************** */
/*                     Surcharges d'opérateurs                  		      */
/* ************************************************************************** */

PmergeMe&	PmergeMe::operator=(PmergeMe const &rhs) {
	
	std::cout << _YELLOW "Assignment Operator called: PmergeMe" _END << std::endl;
	if (this != &rhs)
	{
		_Vsort = rhs._Vsort;
		_Dsort = rhs._Dsort;
	}
	return (*this);
}

/* ************************************************************************** */
/*                    		 Getters & Setters                  		      */
/* ************************************************************************** */

// size_t	PmergeMe::getSize() const {

// 	return (_Vsort.size());
// }

// int	PmergeMe::getElement(size_t index) const {

// 	if (index < _Vsort.size())
// 		return (_Vsort[index]);
// 	else
// 		return -1;
// }

/* ************************************************************************** */
/*                   			  Méthodes                 		              */
/* ************************************************************************** */

void	PmergeMe::addElement(int value) {

	_Vsort.push_back(value);
	_Dsort.push_back(value);;
}

unsigned int	PmergeMe::jacobsthal(unsigned int n) {

	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return jacobsthal(n - 1) + 2 * jacobsthal(n - 2);
}

void	PmergeMe::binarySearchInsert(std::vector<int> &container, int value) {

	int	low = 0;
	int	high = container.size() - 1;

	while (low <= high)
	{
		int mid = low + (high - low) / 2;
		if (container[mid] == value)
			return ;
		else if (container[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	container.insert(container.begin() + low, value);
}

void	PmergeMe::binarySearchInsert(std::deque<int> &container, int value) {

	int	low = 0;
	int	high = container.size() - 1;

	while (low <= high)
	{
		int mid = low + (high - low) / 2;
		if (container[mid] == value)
			return ;
		else if (container[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	container.insert(container.begin() + low, value);
}

void PmergeMe::ford_johnson_vector(std::vector<int> &Vsort) {
	
	std::vector<int>	main;
	std::vector<int>	pend;
	std::vector<int>::iterator end = Vsort.end();
	
	// Step 1 : Group the element of vec into (n/2) pair
	// Step 2 : Perform (n/2) comparaisons to determine the larger
	for (std::vector<int>::iterator it = Vsort.begin() ; it < end - 1; it += 2)
	{
		if (*it > *(it + 1))
			std::swap(*it, *(it + 1));
	}
	if (Vsort.size() > 2)
	{
		for (std::vector<int>::iterator it = Vsort.begin() ; it < end; it += 2)
		{
			main.push_back(*it);
			if (it < end - 1)
				pend.push_back(*(it + 1));

		}

		// Step 3 : Recursively sort the (n/2) larger elements from each pair creating a sorted sequence
		ford_johnson_vector(pend);
	
		size_t size_main = main.size();
		for (size_t index = 0; index < size_main; index++)
		{
			size_t i_jack = 0;
			size_t sortIndex = 0;
			for (;  jacobsthal(i_jack) < index; i_jack++) {}
			if (i_jack)
			{
				if (jacobsthal(i_jack) >= size_main - 1)
					sortIndex = size_main - (index - jacobsthal(i_jack - 1));
				else
					sortIndex = jacobsthal(i_jack) + 1 - (index - jacobsthal(i_jack - 1));
			}
			binarySearchInsert(pend, main[sortIndex]);
		}
		Vsort = pend;
	}
}

void PmergeMe::ford_johnson_deque(std::deque<int> &Dsort) {
	
	std::deque<int>	main;
	std::deque<int>	pend;
	std::deque<int>::iterator end = Dsort.end();
	
	for (std::deque<int>::iterator it = Dsort.begin() ; it < end - 1; it += 2)
	{
		if (*it > *(it + 1))
			std::swap(*it, *(it + 1));
	}
	if (Dsort.size() > 2)
	{
		for (std::deque<int>::iterator it = Dsort.begin() ; it < end; it += 2)
		{
			main.push_back(*it);
			if (it < end - 1)
				pend.push_back(*(it + 1));

		}

		ford_johnson_deque(pend);
	
		size_t size_main = main.size();
		for (size_t index = 0; index < size_main; index++)
		{
			size_t i_jack = 0;
			size_t sortIndex = 0;
			for (;  jacobsthal(i_jack) < index; i_jack++) {}
			if (i_jack)
			{
				if (jacobsthal(i_jack) >= size_main - 1)
					sortIndex = size_main - (index - jacobsthal(i_jack - 1));
				else
					sortIndex = jacobsthal(i_jack) + 1 - (index - jacobsthal(i_jack - 1));
			}
			binarySearchInsert(pend, main[sortIndex]);
		}
		Dsort = pend;
	}
}

void	PmergeMe::ford_johnson_vector() {

	if (_Vsort.size() > 1)
		ford_johnson_vector(_Vsort);
}

void	PmergeMe::ford_johnson_deque() {

	if (_Dsort.size() > 1)
		ford_johnson_deque(_Dsort);
}

void PmergeMe::print_sequence(const std::string& message, const std::vector<int> &vec) const {

        std::cout << message << ": ";
        for (std::vector<int>::const_iterator it = vec.begin(); it < vec.end(); ++it) 
            std::cout << *it << " ";
        std::cout << std::endl;
}

void PmergeMe::print_sequence(const std::string& message, const std::deque<int> &deq) const {

        std::cout << message << ": ";
        for (std::deque<int>::const_iterator it = deq.begin(); it < deq.end(); ++it) 
            std::cout << *it << " ";
        std::cout << std::endl;
}

bool estTrie(std::vector<int>& vec) {
	
    for (size_t i = 0; i < vec.size() - 1; ++i) 
	{
        if (vec[i] > vec[i + 1])
            return (false);
    }
    return (true);
}

void	PmergeMe::sort_and_print() {

	print_sequence("Before", _Vsort);

    timeval start_time, end_time;
    gettimeofday(&start_time, NULL); // Initiate time before execution for vector

    ford_johnson_vector();

    gettimeofday(&end_time, NULL); // Initiate time after execution for vector
    long long vec_duration = (end_time.tv_sec - start_time.tv_sec) * 1000000LL + (end_time.tv_usec - start_time.tv_usec);

    gettimeofday(&start_time, NULL); // Initiate time before execution for deque

	ford_johnson_deque();

	gettimeofday(&end_time, NULL); // Initiate time after execution for deque
    long long deq_duration = (end_time.tv_sec - start_time.tv_sec) * 1000000LL + (end_time.tv_usec - start_time.tv_usec);
	
    print_sequence("After ", _Vsort);
	
    std::cout << "Time to process a range of " << _Vsort.size() << " elements with std::vector : " << vec_duration << " us" << std::endl;
	std::cout << "Time to process a range of " << _Dsort.size() << " elements with std::deque : " << deq_duration << " us" << std::endl;

	if (estTrie(_Vsort))
	{
		std::cout << _FOREST_GREEN "SEQUENCE SORTED" _END << std::endl;
	}
	else
	{
		std::cout << _RED "SEQUENCE NOT SORTED" _END <<std::endl;
	}	
}

/* ************************************************************************** */
/*                   			  Exception                 		          */
/* ************************************************************************** */



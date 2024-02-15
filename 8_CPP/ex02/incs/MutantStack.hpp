/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:06:30 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/14 18:02:37 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <algorithm>
#include <iostream>
#include <list>

template<typename T>
class MutantStack : public std::stack<T> {
	
	public :
	
	// fait référence au type iterator du conteneur sous-jacent utilisé par la classe std::stack pour stocker ses éléments
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

    MutantStack() {}
    virtual ~MutantStack() {}
    MutantStack(const MutantStack &src) : std::stack<T>(src) {}
	
    MutantStack& operator=(const MutantStack &src) {
		
        if (this != &src) {
            std::stack<T>::operator=(src);
        }
        return (*this);
    }

    iterator begin() {return std::stack<T>::c.begin();}
    const_iterator begin() const {return std::stack<T>::c.cbegin();}
    iterator end() { return std::stack<T>::c.end();}
    const_iterator end() const {return std::stack<T>::c.cend();}

    reverse_iterator rbegin() {return std::stack<T>::c.rbegin();}
    const_reverse_iterator rbegin() const {return std::stack<T>::c.crbegin();}
    reverse_iterator rend() {return std::stack<T>::c.rend();}
    const_reverse_iterator rend() const {return std::stack<T>::c.crend();}
};

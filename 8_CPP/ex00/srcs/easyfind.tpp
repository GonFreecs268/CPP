/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:06:01 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/12 14:57:59 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/easyfind.hpp"

template< typename T >
typename T::iterator easyfind(T &container, const int nb_to_find) {

	typename T::iterator it = find(container.begin(), container.end(), nb_to_find);
	if (it == container.end())
		throw NoMatchFound();
	else
		return (it);
}

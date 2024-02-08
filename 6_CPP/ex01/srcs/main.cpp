/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:55:31 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/07 17:49:39 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Serializer.hpp"

int main(void) {

	Data*		data;
	uintptr_t	ptrData = 0;
	Data*		newData = NULL;

	data = new Data;
	data->value = 1305;

	std::cout << _YELLOW "data:\t\t" << data << _END <<std::endl;
	std::cout << _YELLOW "data->value:\t" << data->value << _END <<std::endl;

	std::cout << _YELLOW << "Calling serialize on data" << _END << std::endl;

	ptrData = Serializer::serialize(data);

	std::cout << _FOREST_GREEN "ptrdata:\t" << ptrData << _END << std::endl;

	std::cout << _YELLOW << "Calling deserialize on newData" << _END << std::endl;

	newData = Serializer::deserialize(ptrData);
	std::cout << _FOREST_GREEN "newData:\t" << newData << _END << std::endl;
	std::cout << _FOREST_GREEN "newData->value:\t" << newData->value << _END <<std::endl;

	delete data;

}
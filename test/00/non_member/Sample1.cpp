/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qho <qho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 16:14:41 by qho               #+#    #+#             */
/*   Updated: 2017/07/03 17:18:07 by qho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.hpp"

Sample::Sample( void ) {

	std::cout << "Constructor" << std::endl;
	Sample::_nbInst++;
	return ;
}

Sample::~Sample( void ) {

	std::cout << "Destructor" << std::endl;
	Sample::_nbInst--;
	return ;
}

int		Sample::getNbInst( void ) {

	return Sample::_nbInst;
}

int		Sample::_nbInst = 0;

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qho <qho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 16:14:41 by qho               #+#    #+#             */
/*   Updated: 2017/07/03 17:05:11 by qho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.hpp"

Sample::Sample( int v ) : _foo( v ) {

	std::cout << "Constructor" << std::endl;
	return ;
}

Sample::~Sample( void ) {

	std::cout << "Destructor" << std::endl;
	return ;
}

int		Sample::getFoo( void ) const {

	return this->_foo;
}

int	Sample::compare( Sample *other ) const {

	if ( this->_foo < other->getFoo())
		return -1;
	else if (this->_foo > other->getFoo())
		return 1;
	return 0;
}

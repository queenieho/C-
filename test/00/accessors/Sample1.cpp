/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qho <qho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 16:14:41 by qho               #+#    #+#             */
/*   Updated: 2017/07/03 16:29:59 by qho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.hpp"

Sample::Sample( void ) {

	std::cout << "Constructor" << std::endl;

	this->setFoo( 0 );
	std::cout << "this->getFoo(): " << this->getFoo() << std::endl;

	return ;
}

Sample::~Sample( void ) {

	std::cout << "Destructor" << std::endl;
	return ;
}

int		Sample::getFoo( void ) const {

	return this->_foo;
}

void	Sample::setFoo( int v ) {

	if ( v >= 0 )
		this->_foo = v;

	return;
}

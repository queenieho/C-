/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qho <qho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 16:14:41 by qho               #+#    #+#             */
/*   Updated: 2017/07/04 19:59:53 by qho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.hpp"

Sample::Sample( void ) : foo( 0 ) {

	std::cout << "Constructor" << std::endl;
	return ;
}

Sample::~Sample( void ) {

	std::cout << "Destructor" << std::endl;
	return ;
}

void Sample::bar( void ) const{

	std::cout << "Member function bar called" << std::endl;
	return ;
}

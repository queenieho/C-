/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qho <qho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 16:30:05 by qho               #+#    #+#             */
/*   Updated: 2017/07/03 17:51:00 by qho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.hpp"

int main() {

	Sample	instance;
	Sample	*instancep = &instance;

	int		Sample::*p = NULL; //pointer to foo variable in Sample class
	void	(Sample::*f)(void) const; // pointer for a function in Sample class

	p = &Sample::foo;

	std::cout << "value of member foo: " << instance.foo << std::endl;
	instance.*p = 21;
	std::cout << "value of member foo: " << instance.foo << std::endl;
	instancep->*p = 42;
	std::cout << "value of member foo: " << instance.foo << std::endl;

	f = &Sample::bar; // point to bar function in Sample class

	(instance.*f)();
	(instancep->*f)();

	return 0;
}

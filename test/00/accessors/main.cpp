/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qho <qho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 16:30:05 by qho               #+#    #+#             */
/*   Updated: 2017/07/03 16:31:53 by qho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.hpp"

int main() {

	Sample instance;

	instance.setFoo(42);
	std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;

	instance.setFoo(-42);
	std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;
	return 0;
}

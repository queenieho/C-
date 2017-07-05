/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qho <qho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 16:30:05 by qho               #+#    #+#             */
/*   Updated: 2017/07/03 17:03:07 by qho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.hpp"

int main() {

	Sample instance1(42);
	Sample instance2(42);

	if (&instance1 == &instance1)
		std::cout << "instance 1 and instance 1 are physically equal" << std::endl;
	else
		std::cout << "instance 1 and instance 1 are NOT physically equal" << std::endl;

	if (&instance1 == &instance2)
		std::cout << "\ninstance 1 and instance 2 are physically equal" << std::endl;
	else
		std::cout << "\ninstance 1 and instance 2 are NOT physically equal" << std::endl;

	if (instance1.compare( &instance1 ) == 0)
		std::cout << "\ninstance 1 and instance 1 are structurally equal" << std::endl;
	else
		std::cout << "\ninstance 1 and instance 1 are NOT structurally equal" << std::endl;

	if (instance1.compare( &instance2 ) == 0)
		std::cout << "\ninstance 1 and instance 2 are structurally equal" << std::endl;
	else
		std::cout << "\ninstance 1 and instance 2 are NOT structurally equal" << std::endl;

	return 0;
}

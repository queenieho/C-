/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qho <qho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 16:30:05 by qho               #+#    #+#             */
/*   Updated: 2017/07/03 17:21:38 by qho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.hpp"

void	f0() {

	Sample instance;

	std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;
	
	return ;
}


void	f1() {

	Sample instance;

	std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;
	f0();

	return ;
}

int main() {

	std::cout << "MAIN: Number of instances: " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "MAIN: Number of instances: " << Sample::getNbInst() << std::endl;
	return 0;
}

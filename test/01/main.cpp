/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qho <qho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 16:30:05 by qho               #+#    #+#             */
/*   Updated: 2017/07/04 21:41:01 by qho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main()
{
	std::ifstream	ifs("numbers"); //open the file named numbers
	unsigned int	dst;
	unsigned int	dst2;
	ifs >> dst >> dst2;

	std::cout << dst << " " << dst2 << std::endl;
	ifs.close();

	std::ofstream	ofs("test.out");

	ofs << "i like ponies a whole damn lot" << std::endl;
	ofs.close();
}

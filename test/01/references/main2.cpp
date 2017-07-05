/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qho <qho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 16:30:05 by qho               #+#    #+#             */
/*   Updated: 2017/07/04 20:59:19 by qho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	byPtr(std::string *str)
{
	*str += " and ponies";
}

void byConstPtr(std::string const *str)
{
	std::cout << *str << std::endl;
}

void	byRef(std::string &str)
{
	str+= " and ponies";
}

void	byConstRef(std::string const &str)
{
	std::cout << str << std::endl;
}

int main()
{
	std::string str = "I like butterflies";

	std::cout << str << std::endl;
	byPtr(&str);
	byConstPtr(&str);

	str = "i like otters";

	std::cout << str << std::endl;
	byRef(str);
	byConstRef(str);


	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qho <qho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 16:30:05 by qho               #+#    #+#             */
/*   Updated: 2017/07/04 21:12:36 by qho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student
{
private:
	std::string _login;

public:
	Student(std::string const &login) : _login(login)
	{

	}

	std::string &getLoginRef()
	{
		return this->_login;
	}

	std::string const &getLoginRefConst() const
	{
		return this->_login;
	}

	std::string *getLoginPtr()
	{
		return &(this->_login);
	}

	std::string const *getLoginPtrConst() const
	{
		return &(this->_login);
	}
};

int main()
{
	Student bob = Student("bfubar");
	Student const jim = Student("jfubar");

	std::cout << bob.getLoginRefConst() << " " << jim.getLoginRefConst() << std::endl;
	std::cout << *(bob.getLoginPtrConst()) << *(jim.getLoginPtrConst()) << std::endl;

	bob.getLoginRef() = "bobfubar";
	std::cout << bob.getLoginRefConst() << std::endl;

	*(bob.getLoginPtr()) = "bobbyfubar";
	std::cout << bob.getLoginRefConst() << std::endl;

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qho <qho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 16:30:05 by qho               #+#    #+#             */
/*   Updated: 2017/07/04 20:03:50 by qho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student
{
private:
	std::string _login;

public:
	Student(std::string login) : _login(login)
	{
		std::cout << "Student " << this->_login << " is born" << std::endl;
	}

	~Student()
	{
		std::cout << "Student " << this->_login << " died" << std::endl;
	}
};

int main()
{
	Student bob = Student("bfubar");
	Student *jim = new Student("jfubar");

	//Do something

	delete jim; //jim is destroyed
	return (0);
}

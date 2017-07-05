/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qho <qho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 11:38:46 by qho               #+#    #+#             */
/*   Updated: 2017/07/03 16:08:29 by qho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int gl_var = 1;
// int f(void) { return 2; }

// namespace Foo {
	
// 	int gl_var = 3;
// 	int f(void) { return 4; }

// }

// namespace Bar {
	
// 	int gl_var = 5;
// 	int f(void) { return 6; }

// }

// namespace Muf = Bar;

// int main (void) {

// 	printf("gl_var:		[%d]\n", gl_var);
// 	printf("f():		[%d]\n\n", f());

// 	printf("Foo::gl_var:		[%d]\n", Foo::gl_var);
// 	printf("Foo::f():		[%d]\n\n", Foo::f());

// 	printf("Bar::gl_var:		[%d]\n", Bar::gl_var);
// 	printf("Bar::f():		[%d]\n\n", Bar::f());

// 	printf("Muf::gl_var:		[%d]\n", Muf::gl_var);
// 	printf("Muf::f():		[%d]\n\n", Muf::f());

// 	printf("::gl_var:		[%d]\n", ::gl_var);
// 	printf("::f():		[%d]\n\n", ::f());

// 	return 0;
// }


/* ************************************************************************** */


// #include <iostream>

// int main (void) {

// 	char buff[512];

// 	std::cout << "Hello World!" << std::endl;

// 	std::cout << "Input a word :";
// 	std::cin >> buff;
// 	std::cout << "you entered: [" << buff << "]" << std::endl;
// 	return 0;
// }


// /* ************************************************************************** */


// #include <iostream>
// #include "header.h"

// Sample::Sample( void ) {

// 	std::cout << "Constructor called" << std::endl;
// 	return ; //not necessary, since they dont have return type
// }

// Sample::~Sample( void ) {

// 	std::cout << "Destructor called" << std::endl;
// 	return ; //not necessary, since they dont have return type
// }

// void	Sample::bar( void ) {

// 	std::cout << "Member function bar called" << std::endl;
// 	return ;
// }

// int main( void ) {

// 	Sample instance; // variable called "instance" of the type Sample class

// 	instance.foo = 42;
// 	std::cout << "instance.foo: " << instance.foo << std::endl;

// 	instance.bar();

// 	return 0;

// }


/* ************************************************************************** */
/* ADDING CODE TO THE CONSTRUCTOR */


// #include <iostream>
// #include "header.h"

// Sample::Sample( void ) {

// 	std::cout << "Constructor called" << std::endl;

// 	this->foo = 42;
// 	std::cout << "\nthis->foo: " << this->foo << std::endl;

// 	this->bar();

// 	return ; //not necessary, since they dont have return type
// }

// Sample::~Sample( void ) {

// 	std::cout << "Destructor called" << std::endl;
// 	return ; //not necessary, since they dont have return type
// }

// void	Sample::bar( void ) {

// 	std::cout << "Member function bar called" << std::endl;
// 	return ;
// }

// int main( void ) {

// 	Sample instance; // variable called "instance" of the type Sample class


// 	std::cout << "instance.foo: " << instance.foo << std::endl;
// 	instance.foo = 84;
// 	std::cout << "instance.foo: " << instance.foo << std::endl;

// 	instance.bar();

// 	return 0;

// }


/* ************************************************************************** */
/* INIT LIST */


// #include <iostream>
// #include "header.h"

// Sample1::Sample1( char p1, int p2, float p3 ) {

// 	std::cout << "Constructor called" << std::endl;

// 	this->a1 = p1;
// 	std::cout << "\nthis->a1: " << this->a1 << std::endl;

// 	this->a2 = p2;
// 	std::cout << "\nthis->a2: " << this->a2 << std::endl;

// 	this->a3 = p3;
// 	std::cout << "\nthis->a3: " << this->a3 << std::endl;

// 	return ; //not necessary, since they dont have return type
// }

// Sample1::~Sample1( void ) {

// 	std::cout << "Destructor called" << std::endl;
// 	return ; //not necessary, since they dont have return type
// }

// Sample2::Sample2( char p1, int p2, float p3 ) : a1(p1), a2(p2), a3(p3) { 
// // THIS IS HOW IT SHOULD BE DONE
// //after the parameters, theres an init list, similar to using "this"
// //can be arranged whichever way, or have nl


// 	std::cout << "Constructor called" << std::endl;

// 	std::cout << "\nthis->a1: " << this->a1 << std::endl;
// 	std::cout << "\nthis->a2: " << this->a2 << std::endl;
// 	std::cout << "\nthis->a3: " << this->a3 << std::endl;

// 	return ; //not necessary, since they dont have return type
// }

// Sample2::~Sample2( void ) {

// 	std::cout << "Destructor called" << std::endl;
// 	return ; //not necessary, since they dont have return type
// }




// int main( void ) {

// 	Sample1 instance1('a', 42, 4.2f); // variable called "instance" of the type Sample class

// 	Sample2 instance2('z', 23, 3.14f);

// 	return 0;

// }



/* ************************************************************************** */
/* CONST */

// #include <iostream>
// #include "header.h"

// Sample::Sample( float const f) : pi( f ), qd( 42 ) {

// 	std::cout << "Constructor called" << std::endl;
// 	return ;
// }

// Sample::~Sample( void ) {

// 	std::cout << "Destructor called" << std::endl;
// 	return ; //not necessary, since they dont have return type
// }

// void	Sample::bar( void ) const {

// 	std::cout << "this->pi = " << this->pi << std::endl;
// 	std::cout << "this->qd = " << this->qd << std::endl;

// 	return ;
// }

// int main ( void ) {

// 	Sample instance(3.14f);
// 	instance.bar();

// 	Sample instance2(3.1416f);
// 	instance2.bar();
// 	return 0;
// }


/* ************************************************************************** */
/* VISIBILITY */

#include <iostream>
#include "header.h"


Sample::Sample( void ) {

	std::cout << "Constructor called" << std::endl;

	this->publicFoo = 0;
	std::cout << "this->publicFoo: " << this->publicFoo << std::endl;

	this->_privateFoo = 0;
	std::cout << "this->_privateFoo: " << this->_privateFoo << std::endl;

	this->publicBar();
	this->_privateBar();

	return ;
}

Sample::~Sample( void ) {

	std::cout << "Destructor called" << std::endl;
	return ; //not necessary, since they dont have return type
}

void	Sample::publicBar( void ) const {

	std::cout << "Member function publicBar called" << std::endl;
	return ;
}

void	Sample::_privateBar( void ) const {

	std::cout << "Member function _privateBar called" << std::endl;
	return ;
}

int main ( void ) {

	Sample instance;

	// instance.publicFoo = 42;
	// std::cout << "instance.publicFoo: " << instance.publicFoo << std::endl;

	instance._privateFoo = 42;
	std::cout << "instance._privateFoo: " << instance._privateFoo << std::endl;

	// instance.publicBar();
	instance._privateBar();
	return 0;
}











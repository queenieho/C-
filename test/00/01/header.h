/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qho <qho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 12:05:51 by qho               #+#    #+#             */
/*   Updated: 2017/07/03 16:07:31 by qho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef HEADER_H
// # define HEADER_H

// class Sample {

// public:

// 	int foo;

// 	Sample( void );
// 	~Sample( void );

// 	void bar( void );
// };

// #endif



/* ************************************************************************** */
/* INIT LIST */

// #ifndef HEADER_H
// # define HEADER_H

// class Sample1 {

// public:
	
// 	char	a1;
// 	int		a2;
// 	float	a3;

// 	Sample1( char p1, int p2, float p3 );
// 	~Sample1( void );

// };

// class Sample2 {

// public:
	
// 	char	a1;
// 	int		a2;
// 	float	a3;

// 	Sample2( char p1, int p2, float p3 );
// 	~Sample2( void );

// };

// #endif




// /* ************************************************************************** */
// /* CONST */

// #ifndef HEADER_H
// # define HEADER_H

// class Sample {

// public:
	
// 	float const pi;
// 	int			qd;

// 	Sample( float const f );
// 	~Sample( void );

// 	void	bar( void ) const;

// };

// #endif


/* ************************************************************************** */
/* VISIBILITY */

#ifndef HEADER_H
# define HEADER_H

class Sample {

public:
	
	int		publicFoo;

	Sample( void );
	~Sample( void );

	void	publicBar( void ) const;


private:

	int		_privateFoo;

	void	_privateBar( void ) const;

};

#endif









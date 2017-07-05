/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qho <qho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 16:14:46 by qho               #+#    #+#             */
/*   Updated: 2017/07/03 16:39:39 by qho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE1_H
# define SAMPLE1_H

class	Sample {

public:

	Sample( int v );
	~Sample( void );

	int 	getFoo( void ) const;
	int		compare( Sample *other ) const; // compares current instance and the one being passed

private:

	int		_foo;

};

#endif
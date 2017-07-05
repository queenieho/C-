/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qho <qho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 16:14:46 by qho               #+#    #+#             */
/*   Updated: 2017/07/03 16:32:53 by qho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE1_H
# define SAMPLE1_H

class	Sample {

public:

	int		foo;

	Sample( void );
	~Sample( void );

	int 	getFoo( void ) const;
	void	setFoo( int v );

private:

	int		_foo;

};

#endif
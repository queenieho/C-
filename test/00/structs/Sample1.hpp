/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qho <qho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 16:14:46 by qho               #+#    #+#             */
/*   Updated: 2017/07/03 16:15:51 by qho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE1_H
# define SAMPLE1_H

struct	Sample1 {

	int		foo;

	Sample1( void );
	~Sample1( void );

	void bar( void ) const;
};

#endif
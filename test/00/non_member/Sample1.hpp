/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qho <qho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 16:14:46 by qho               #+#    #+#             */
/*   Updated: 2017/07/03 17:20:53 by qho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE1_H
# define SAMPLE1_H

class	Sample {

public:

	Sample( void );
	~Sample( void );

	static int	getNbInst( void );

private:

	static int	_nbInst; // non-member static integer

};

#endif
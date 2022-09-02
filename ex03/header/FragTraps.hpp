/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTraps.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:41:58 by steh              #+#    #+#             */
/*   Updated: 2022/09/02 19:59:52 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
 #define FRAG_TRAP_HPP

#include "ClapTraps.hpp"

class FragTraps : virtual public ClapTraps
{
	private:
		/* data */
	public:
		FragTraps(void);
		FragTraps(string const & name);
		FragTraps(FragTraps const & src);
		FragTraps & operator=(FragTraps const & rhs);
		~FragTraps(void);

		void	highFivesGuys(void);
};

#endif

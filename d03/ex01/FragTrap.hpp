/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 04:50:35 by jripoute          #+#    #+#             */
/*   Updated: 2015/11/03 06:01:26 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <iostream>

class FragTrap {

public:
	FragTrap( std::string name );
	FragTrap( FragTrap const & src);
	~FragTrap( void );

	void			rangedAttack( std::string const & target ) const;
	void			meleeAttack( std::string const & target ) const;
	void			takeDamage( unsigned int amount );
	void			beRepaired( unsigned int amount );

	void			debugDisplay( void ) const;
	void			vaulthunter_dot_exe( std::string const & target);

	FragTrap &		operator=( FragTrap const & rhs );


private:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_maxHitPoints;
	unsigned int	_energyPoints;
	unsigned int	_maxEnergyPoints;
	unsigned int	_level;
	unsigned int	_meleeAtkDmg;
	unsigned int	_rangedAtkDmg;
	unsigned int	_armorDmgReduc;
};

std::ostream &		operator<<( std::ostream & o, FragTrap const & rhs );

#endif

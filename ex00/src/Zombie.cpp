/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoumill <ssoumill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 18:20:19 by ssoumill          #+#    #+#             */
/*   Updated: 2025/07/19 17:21:06 by ssoumill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie()
{
    
};

Zombie::~Zombie()
{
    
};

void Zombie::announce()
{
    std::cout << get_name() << ": >: BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie :: get_name() const
{
    return this->name;
}
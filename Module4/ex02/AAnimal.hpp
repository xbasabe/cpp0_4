/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:31:40 by xbasabe-          #+#    #+#             */
/*   Updated: 2024/04/16 14:31:40 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>
#include<iostream>

class AAnimal{
protected:
	std::string _type;
	
public:
	AAnimal();
	AAnimal(std::string);
	AAnimal(AAnimal&);//constructor copia
	//¿constructores a protected para no ser instanciable?
	AAnimal& operator= (AAnimal&);
	virtual ~AAnimal();
	virtual void makeSound() const = 0;
	std::string getType() const;
	void setType(std::string);
};

#endif

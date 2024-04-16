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

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include<iostream>

class Animal{
protected:
	std::string _type;
public:
	Animal();
	Animal(std::string);
	Animal(Animal&);//constructor copia
	Animal& operator= (Animal&);
	virtual ~Animal();
	virtual void makeSound() const;
	std::string getType() const;
	void setType(std::string);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:09:12 by xbasabe-          #+#    #+#             */
/*   Updated: 2024/04/16 16:09:12 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include"Animal.hpp"
//#include <iostream>

class Dog : public Animal{
//protected:
//	std::string _type;
public:
	Dog();
	Dog(Dog&);
	Dog& operator= (Dog&);
	~Dog();
	void makeSound() const;
	std::string getType() const;
	void setType(std::string);
};

#endif

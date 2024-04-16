/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:09:49 by xbasabe-          #+#    #+#             */
/*   Updated: 2024/04/16 16:09:49 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
//#include <iostream>

class Cat : public Animal {
private:
	Brain* catbrain;
public:
	Cat();
	Cat(Cat&);
	Cat& operator= (Cat&);
	~Cat();
	void makeSound() const;
	std::string getType();
	void setType(std::string);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 14:13:22 by xbasabe-          #+#    #+#             */
/*   Updated: 2024/04/02 16:25:33 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string>


class ClapTrap{

private:
    std::string _name;
    unsigned int _hit_points;
    unsigned int _energy_points;
    unsigned int _attack_damage;

public:

    //constructors
    ClapTrap(); // default constructor that initializes the fixed-point number value to 0.
    ClapTrap(std::string str); //constructor wiyh string parameter
    ClapTrap(const ClapTrap&);//copy constructor.
    
    //operators overloaded
    ClapTrap& operator = (const ClapTrap& other);//copy assignment operator overload.
    
    //public methods
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    //setters
    void setName(std::string);
    void setHit(unsigned int);
    void setEnergy(unsigned int);
    void setDamage(unsigned int);
    //getters
    std::string getName();
    int getHit();
    int getEnergy();
    int getDamage();

    //destructor
    ~ClapTrap();//destructor.
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 14:13:24 by xbasabe-          #+#    #+#             */
/*   Updated: 2024/04/02 18:58:42 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include<iostream>

ClapTrap::ClapTrap(void){
    std::cout << "ClapTrap created by default" <<std::endl;
    this->setDamage(20);
    this->setEnergy(50);
    this->setHit(100);
}

ClapTrap::ClapTrap(std::string str){
    this->setName(str);
    std::cout << "ClapTrap " << getName() << " created" <<std::endl;
    this->setDamage(20);
    this->setEnergy(50);
    this->setHit(100);
}

ClapTrap::ClapTrap(const ClapTrap& copy){
    *this = copy;  
}

//operators overloaded
ClapTrap& ClapTrap::operator=(const ClapTrap& other){
    std::cout << "Copy assignment operator called" << std::endl;
    this->setName(other._name);
    this->setHit(other._hit_points);
    this->setEnergy(other._energy_points);
    this->setDamage(other._attack_damage);
    return *this;
}
    
//public methods
void ClapTrap::attack(const std::string& target){
    this->setEnergy(getEnergy() - 1); // expends 1 energi point
    if (this->getEnergy() > 0 && this->getHit() > 0)
    {
        std::cout << "ClapTrap " << this->getName() << " attacks " << target <<", causing " << this->_attack_damage << " points of damage!" << std::endl;
        //search for <target> name Clap Trap and target.takedamage(this->getDamage);
    }
    else
        std::cout << "no energy to attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
this->setHit(getHit() - amount); //looses <amount> hit points.
std::cout << "ClapTrap " << this->getName() << " hurted with a " << amount << " attack!. Only " << this->getHit() << " points remain."<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    this->setEnergy(getEnergy() - 1); // expends 1 energi point
    if (this->getEnergy() > 0)
       {
        this->setHit(getHit() + amount);
        std::cout << "ClapTrap " << this->getName() << " repaired." << this->getHit() <<" hit points now!" << std::endl;
       }
    else
        std::cout << "No energy to repair." << std::endl;
}

//setters
void ClapTrap::setName(std::string str){
    this->_name = str;
}
void ClapTrap::setHit(unsigned int h){
    this->_hit_points = h;
}
void ClapTrap::setEnergy(unsigned int e){
    this->_energy_points = e;
}
void ClapTrap::setDamage(unsigned int d){
    this->_attack_damage = d;
}

//getters
std::string ClapTrap::getName(){
    return this->_name;
}
int ClapTrap::getHit(){
    return this->_hit_points;
}
int ClapTrap::getEnergy(){
    return this->_energy_points;
}
int ClapTrap::getDamage(){
    return this->_attack_damage;
}


//destructor
ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap " << getName() << " destructed" <<std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:47:29 by xbasabe-          #+#    #+#             */
/*   Updated: 2024/04/16 18:45:53 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include<string>

class Brain{
protected:
    std::string _ideas[100];
public:
    Brain();
    ~Brain();
    Brain(Brain&);
    Brain& operator= (Brain&);
    void setIdeas(std::string*);
    std::string* getIdeas();
};

#endif

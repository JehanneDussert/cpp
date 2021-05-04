/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehannedussert <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:39:37 by jehannedu         #+#    #+#             */
/*   Updated: 2021/05/04 16:39:38 by jehannedu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::cout << str << std::endl;
    std::string* strPtr = &str;
    std::cout << *strPtr << std::endl;
    std::string& strRef = str;
    std::cout << strRef << std::endl;
}

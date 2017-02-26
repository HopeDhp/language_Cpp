/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "feature_cpp11.h"
#include <vector>
#include <iostream>


/*1. List Initialization
 2. The auto Type Specifier
 3. Range for Statement*/
void List_Init()
{
    std::vector<unsigned int> v = {1,2,3,4};
    for (auto item : v)
    {
        std::cout << item << " " ;
    }
    std::cout << std::endl;
}


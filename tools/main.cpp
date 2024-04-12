//
// Created by Ibrahima tely Barry on 12/04/24.
//
#include <iostream>
#include "list.cpp"

int main(){
    list<double> l;
    if(l.empty()){
        std::cout<<""<<std::endl;
    }
    l.push_back(3434.423);
    l.pop_back(-98.2);

    std::cout<<l<<std::endl;
    l.pop_back(-18.2);
    std::cout<<l<<std::endl;


    while(!l.empty()){
        pop_back();
        std::cout<<l<<std::endl;

    }
    list<double>g;
    g.push_front(2);
    g.push_front(1);
    std::cout<<l<<std::endl;

}
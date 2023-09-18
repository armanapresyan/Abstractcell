#include "abstractcell.h"
#include <sstream>
#include <iostream>

Intcell::Intcell(){
    m_value = 0;
}

Intcell::Intcell(int num){
    m_value = num;
}

void Intcell::set(int value){
    m_value = value;
}

void Intcell::set(std::string value){
    int num;
    std::stringstream ss(value);
    if (!(ss >> num)) {
        throw std::runtime_error("Cannot convert cell value to int.");
    }
    m_value = num;
}

std::string Intcell::getString() const {
    return std::to_string(m_value);
}


Doublecell::Doublecell(){
    m_value = 0;
}

Doublecell::Doublecell(double num){
    m_value = num;
}

void Doublecell::set(double value){
    m_value = value;
}

void Doublecell::set(std::string value){
    double num;
    std::stringstream ss(value);
    if (!(ss >> num)) {
        throw std::runtime_error("Cannot convert cell value to int.");
    }
    m_value = num;
}

std::string Doublecell::getString() const {
    return std::to_string(m_value);
}


Stringcell::Stringcell(){
    m_value = "";
}

Stringcell::Stringcell(const std::string& str){
    m_value = str;
}


void Stringcell::set(std::string value){
    
    m_value = value;
}

std::string Stringcell::getString() const {
    return m_value;
}


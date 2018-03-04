//
//  main.cpp
//  project 1
//
//  Created by Vincent Hoang on 3/3/18.
//

#include <iostream>
#include <string>
#include "PersonType.h"

int main() {
    PersonType person1("Vincent", "Hoang", 123456789);
    person1.printPersonInfo();
    
    PersonType person2(987654321);
    person2.printPersonInfo();
    
    PersonType person3(15);
    person3.printPersonInfo();
}


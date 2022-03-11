#include <string>
#include <iostream>
#include <regex>

std::string pig_it (std::string str) {
    // Create variable to hold the modified string 
    std::string new_str;
    bool first_letter = true;
    char temp;

    // 
    for (char c : str) {
        if (first_letter) {
            if (!isalpha(c)) { 
                new_str.push_back(c);
            } else {
                temp = c;
                first_letter = false;
            }
        } else {
            if (!isalpha(c)) {
                first_letter = true;
                new_str.push_back(temp);
                new_str.push_back('a');
                new_str.push_back('y');
            } 
            new_str.push_back(c);
        }
    }
    
    if (isalpha(temp) && !first_letter) {
        new_str.push_back(temp);
        new_str.push_back('a');
        new_str.push_back('y');
    }
    

    return new_str;
}

std::string pig_it_reg (std::string str) {

    std::regex reg("(\w)(\w*)(\s$)");

    
    
}


int main() {
    std::string str = "Pig latin is cool";

    std::string pig_str = pig_it(str);
    
    std::cout << pig_str << std::endl;
    std::cout << "?" << std::endl;

    return 0;
}



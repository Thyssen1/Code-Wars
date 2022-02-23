// Include pre-processor directives
#include <iostream>
#include <string>
#include <map>

const std::map<char, char> dna_map =  {
    {'A', 'T'},
    {'T', 'A'},
    {'C', 'G'},
    {'G', 'C'},
};

std::string DNAStrand (std::string dna) {
    std::string comp_dna = dna;

    // Iterate through characters in dna string
    for (char& c : comp_dna) {
        if (dna_map.find(c) != dna_map.end()) {
            c = dna_map.at(c);
        } else {
            std::cout << "Error! String contains letters other than A, G, T and C!" << std::endl;
            return dna;
        }
    }

    return comp_dna;
}
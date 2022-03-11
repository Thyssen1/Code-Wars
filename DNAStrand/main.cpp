// Include pre-processor directives
#include <iostream>
#include "dna.h"

// Main program
int main() {
    // Define DNA and compute complementary strand
    std::string dna = "GTATE";
    std::string comp_dna = DNAStrand(dna);

    std::cout << comp_dna << std::endl;

    // Return 0 for succesful program execution
    return 0;
}
#include <iostream>
#include <cctype>

std::string to_alternating_case(const std::string& str)
{
	std::string result = str;

    for (char& c : result){
        if (std::isalpha(c)){
            if (std::islower(c))
                c = std::toupper(c);
            else
                c = std::tolower(c);
        }
    }
    
    return result;
}
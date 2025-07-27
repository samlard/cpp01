#include "Harl.hpp"

void complain(std::string level) {
    Harl harl;

    if (level == "DEBUG") {
        harl.debug();
    } else if (level == "INFO") {
        harl.info();
    } else if (level == "WARNING") {
        harl.warning();
    } else if (level == "ERROR") {
        harl.error();
    } else {
        std::cerr << "Unknown level: " << level << std::endl;
    }
}
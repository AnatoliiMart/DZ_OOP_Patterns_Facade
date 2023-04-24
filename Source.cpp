#include <iostream>

class WashingMachine {
public:
    void powerOn() {
        std::cout << "Truning on washing machine: " << std::endl;
    }

    void selectProgram(int program) {
        switch (program) {
        case 1:
            std::cout << "Fast washing selected" << std::endl;
            break;
        case 2:
            std::cout << "Selected cotton washing" << std::endl;
            break;
        case 3:
            std::cout << "Selected wool washing" << std::endl;
            break;
        case 4:
            std::cout << "Delayed start selected" << std::endl;
            break;
        default:
            std::cout << "Error!!! Wrong programm choosing" << std::endl;
            break;
        }
    }

    void addDetergent() { std::cout << "Adding detergent" << std::endl; }

    void startWashing() { std::cout << "Start washing" << std::endl; }
    void EndWashing()   { std::cout << "Washing ends" << std::endl; }
};

class WashingMachineFacade {
public:
    void start(int program) {
        washingMachine_.powerOn();
        washingMachine_.selectProgram(program);
        washingMachine_.addDetergent();
        washingMachine_.startWashing();
        washingMachine_.EndWashing();
    }

private:
    WashingMachine washingMachine_;
};

void menu()
{
    std::cout << "Washing machine menu:" << std::endl;
    std::cout << "1. Fast washing" << std::endl;
    std::cout << "2. Cotton washing" << std::endl;
    std::cout << "3. Wool washing" << std::endl;
    std::cout << "4. Delayed start" << std::endl;
    std::cout << "Select a washing program: ";
}

int main() {
    WashingMachineFacade facade;
    menu();
    int program;
    std::cin >> program;
    std::cout << std::endl;
    facade.start(program);
    return 0;
}

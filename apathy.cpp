#include <iostream>
#include <cstdlib>

void clearScreen();
int main() {
    clearScreen();
    std::cout << "welcome to apachat, the apathetic c++ chatbot\n";

    std::string input;
    while (true) {
        std::cout << "\nQ: ";
        std::getline(std::cin, input);
                                                // re/generate random integer
        int ran = 1 + (rand() % 4);
        switch(ran) {                           // "randomize" answer
            case 1:
                std::cout << "A: ok.";
                break;
            case 2:
                std::cout << "A: idk";
                break;
            case 3:
                std::cout << "A: cool";
                break;
            case 4:
                std::cout << "A: ok, i guess.";
                break;
            default:                            // shouldn't really ever happen
                std::cerr << "an error occurred, i guess.";
                return -1;
        }
    } return 0;
}
                                                // cross-compatible clear screen function
#ifdef __WIN32
void clearScreen() {system("cls");}
#endif
#ifdef __unix
void clearScreen() {system("clear");}
#endif

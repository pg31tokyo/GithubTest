#include <string>
#include <iostream>

int main(int argc, char* argv[]) {

    if (argc > 1) {
        std::string str(argv[1]);

        if (str == "124CR0000" || str == "124CR0008") {
            std::cout << str << std::endl;
        }
    }

    return 0;
}

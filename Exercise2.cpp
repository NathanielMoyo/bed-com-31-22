#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int daysUntilExpiration = rand() % 12;

    switch (daysUntilExpiration) {
        case 0:
            std::cout << "Your subscription has expired." << std::endl;
            break;
        case 1:
            std::cout << "Your subscription expires within a day!\nRenew now and save 20%!" << std::endl;
            break;
        case 2: case 3: case 4: case 5:
            std::cout << "Your subscription expires in " << daysUntilExpiration << " days.\nRenew now and save 10%!" << std::endl;
            break;
        case 6: case 7: case 8: case 9: case 10:
            std::cout << "Your subscription will expire soon. Renew now!" << std::endl;
            break;
        default:
            std::cout << "You have an active subscription." << std::endl;
    }

    return 0;
}

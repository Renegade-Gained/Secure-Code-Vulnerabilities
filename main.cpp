#include "ImmutableData.h"

#include <iostream>

void immutableDataSim();
void printImmutableMenu();

int main()
{
    immutableDataSim();
	return 0;
}

void immutableDataSim()
{
    int input = 0;
    std::string buf = "";
    bool done = false;
    char exit = ' ';

    ImmutableData data;

    while (input != 3)
    {
        printImmutableMenu();
        std::cin >> input;
        switch (input)
        {
        case 1:
            if (data.getIsMutable() == true)
            {

                while (done == false)
                {
                    std::cout << "Enter Data: ";
                    std::cin >> buf;

                    data.addData(buf);
                    buf = "";

                    std::cout << "\n Continue? (Y/N)";
                    std::cin >> exit;

                    if (exit == 'N' || exit == 'n')
                    {
                        done = true;
                        data.dataDone();
                    }
                }
            }
            else
            {
                std::cout << "Data is No Longer Mutable, Cannot Modify\n" << std::endl;
            }
            break;
        case 2:
            if (data.getIsMutable() == false)
            {
                std::cout << data.allDataToString();
            }
            else
            {
                std::cout << "Data is Mutable, Cannot Retrieve\n";
            }
            break;
        case 3:
            std::cout << "Exiting Immutable Data Sim\n";
            break;
        default:
            std::cout << "Not an option\n";
        }
    }
}

void printImmutableMenu()
{
    std::cout << "1. Add Data\n";
    std::cout << "2. Print Data\n";
    std::cout << "3. Quit\n";
    std::cout << "Enter Option: ";
}
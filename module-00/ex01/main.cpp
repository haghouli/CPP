#include "PhoneBook.hpp"

int main()
{
    PhoneBook f1;
    std::string str;

    while (str.compare("EXIT") && !std::cin.eof())
    {
        std::cout << "put action (ADD, SEARCH or EXIT) : " ;
        getline(std::cin, str);
        if(!str.compare("SEARCH")) {
            f1.list_phone_books();
            here :
            std::string index;
            std::cout << "put index : " ;
            getline(std::cin, index);
            if(std::cin.eof())
                exit(0);
            if(!is_digit(index))
            {
                std::cout << "invalid pls put a digit" << std::endl;
                goto here;
            }
            f1.search(stoi(index));
        } else if(!str.compare("ADD"))
            f1.add_phone_book();
        else if (!str.compare("EXIT"))
            continue;
        else
            std::cout << "invalid action" << std::endl;
    }
    return (0);
}
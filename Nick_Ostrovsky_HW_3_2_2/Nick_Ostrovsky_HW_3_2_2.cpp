// Nick_Ostrovsky_HW_3_2_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct account
{
    int anumber;
    double money;
    std::string name;

};
void money_operation(account& user, double bax);
int main()
{
    double new_money;
    std::cout << "Hello World!\n";
    account ind_acc;
    std::cout << "\n\t Please, enter account number:" << std::endl;
    std::cin >> ind_acc.anumber;
    std::cout << "\n\t Please, enter account owner name:" << std::endl;
    std::cin >> ind_acc.name;
    std::cout << "\n\t Please, enter summ of money:" << std::endl;
    std::cin >> ind_acc.money;
    std::cout << "\n\t Please, enter NEW summ of money:" << std::endl;
    std::cin >> new_money;
    money_operation(ind_acc, new_money);
    std::cout << "\n\t Your account is:\t" << "\t Account number:\t" << ind_acc.anumber << "\t Amount of money\t" << ind_acc.money << "\t Owner's name:\t" << ind_acc.name << std::endl;


}

void money_operation(account &user, double bax)
{
    user.money = bax;

}


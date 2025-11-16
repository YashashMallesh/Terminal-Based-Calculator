#include <iostream>
#include <unistd.h>

long long ans;
char sel;
long long fir;
long long sec;

void first();
void second();
void operatordis();
void add();
void sub();
void mul();
void div();

int main()
{

    /*                       |variable declaration Table|
    ------------------------------------------------------------------------------
       1) int ans         = ans of numbers that is shown on calculator screen.
       2) char sel        = to display operators
       3) long long ans;  = ans of numbers that is shown on calculator screen.
       4) char sel;       = to display operators
       5) long long fir;  = first number that is to be operated on calculator screen.
       6) long long sec;  = second number that is to be operated on calculator screen.
    ------------------------------------------------------------------------------*/

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "             |======================================================|" << std::endl;
    std::cout << "             ||                    |CALCULATOR|                    ||" << std::endl;
    std::cout << "             ||                  |--------------|                  ||" << std::endl;
    std::cout << "             ||[MADE BY R.H]     [Terminal Based]     [VERSION 1.0]||" << std::endl;
    std::cout << "             |======================================================|" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    while (1)
    {
        ans = 0;
        sel = '.';
        fir = 0;
        sec = 0;

        std::cout << std::endl;
        std::cout << std::endl;
        first();
        std::cout << "Enter The [FIRST NUMBER] To Be Operated: ";
        std::cin >> fir;
        std::cout << std::endl;
        first();
        
        std::cout << std::endl;
        std::cout << std::endl;
        second();
        std::cout << "Enter The [SECOND NUMBER] To Be Operated: ";
        std::cin >> sec;
        std::cout << std::endl;
        second();

        std::cout << std::endl;
        std::cout << std::endl;
        operatordis();
        std::cout << "Enter The Operator [+] [-] [X] [/] TO BE Operator: ";
        std::cin >> sel;

        if (sel == '+')
        {
            add();
            sleep(3);
        }

        else if (sel == '-')
        {
            sub();
            sleep(3);
        }

        else if (sel == 'X' | sel == 'x')
        {
            mul();
            sleep(3);
        }

        else if (sel == '/')
        {
            div();
            sleep(3);
        }

        else
        {
            std::cout << "Invalid!! Operator Selected...Please Try Again!!";
        }
        std::cout<<"Thank you"<<std::endl;
    }

    return 0;
}

void first()
{
    std::cout << "_________________________________" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|   |=======================|   |" << std::endl;
    std::cout << "|   |       <R3yhan/>       |   |" << std::endl;
    std::cout << "|   |=======================|   |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|-------------------------------|" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|           OPERATORS           |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|  | + |  | - |   | X |  | / |  |" << std::endl;
    std::cout << "|  [Add]  [Sub]   [Mul]  [Div]  |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|-------------------------------|" << std::endl;
    std::cout << "|>> 1st Number [" << fir << "]   " << std::endl;
    std::cout << "|   OPERATOR   [ ]               " << std::endl;
    std::cout << "|   2nd Number [" << sec << "]   " << std::endl;
    std::cout << "|_______________________________|" << std::endl;
}

void second()
{
    std::cout << "_________________________________" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|   |=======================|   |" << std::endl;
    std::cout << "|   |       <R3yhan/>       |   |" << std::endl;
    std::cout << "|   |=======================|   |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|-------------------------------|" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|           OPERATORS           |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|  | + |  | - |   | X |  | / |  |" << std::endl;
    std::cout << "|  [Add]  [Sub]   [Mul]  [Div]  |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|-------------------------------|" << std::endl;
    std::cout << "|   1st Number [" << fir << "]   " << std::endl;
    std::cout << "|   OPERATOR   [ ]               " << std::endl;
    std::cout << "|>> 2nd Number [" << sec << "]   " << std::endl;
    std::cout << "|_______________________________|" << std::endl;
}

void operatordis()
{
    std::cout << "_________________________________" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|   |=======================|   |" << std::endl;
    std::cout << "|   |       <R3yhan/>       |   |" << std::endl;
    std::cout << "|   |=======================|   |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|-------------------------------|" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|           OPERATORS           |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|  | + |  | - |   | X |  | / |  |" << std::endl;
    std::cout << "|  [Add]  [Sub]   [Mul]  [Div]  |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|-------------------------------|" << std::endl;
    std::cout << "|   1st Number [" << fir << "]   " << std::endl;
    std::cout << "|>> OPERATOR   [" << sel << "]   " << std::endl;
    std::cout << "|   2nd Number [" << sec << "]   " << std::endl;
    std::cout << "|_______________________________|" << std::endl;
}

void add()
{
    ans = fir + sec;
    std::cout << "_________________________________" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|   |=======================|   |" << std::endl;
    std::cout << "     " << ans << std::endl;
    std::cout << "|   |=======================|   |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|-------------------------------|" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|           OPERATORS           |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|    *                          |" << std::endl;
    std::cout << "|  | + |  | - |   | X |  | / |  |" << std::endl;
    std::cout << "|  [Add]  [Sub]   [Mul]  [Div]  |" << std::endl;
    std::cout << "|   ^^^                         |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|-------------------------------|" << std::endl;
    std::cout << "|   1st Number [" << fir << "]   " << std::endl;
    std::cout << "|>> OPERATOR   [ + ]             " << std::endl;
    std::cout << "|   2nd Number [" << sec << "]   " << std::endl;
    std::cout << "|_______________________________|" << std::endl;
    std::cout << "CALCULATED ANSWER: " << ans << std::endl;
}

void sub()
{
    ans = fir - sec;
    std::cout << "_________________________________" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|   |=======================|   |" << std::endl;
    std::cout << "     " << ans << std::endl;
    std::cout << "|   |=======================|   |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|-------------------------------|" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|           OPERATORS           |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|           *                   |" << std::endl;
    std::cout << "|  | + |  | - |   | X |  | / |  |" << std::endl;
    std::cout << "|  [Add]  [Sub]   [Mul]  [Div]  |" << std::endl;
    std::cout << "|          ^^^                  |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|-------------------------------|" << std::endl;
    std::cout << "|   1st Number [" << fir << "]   " << std::endl;
    std::cout << "|>> OPERATOR   [ - ]             " << std::endl;
    std::cout << "|   2nd Number [" << sec << "]   " << std::endl;
    std::cout << "|_______________________________|" << std::endl;
    std::cout << "CALCULATED ANSWER: " << ans << std::endl;
}

void mul()
{
    ans = fir * sec;
    std::cout << "_________________________________" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|   |=======================|   |" << std::endl;
    std::cout << "     " << ans << std::endl;
    std::cout << "|   |=======================|   |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|-------------------------------|" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|          OPERATORS            |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|                   *           |" << std::endl;
    std::cout << "|  | + |  | - |   | X |  | / |  |" << std::endl;
    std::cout << "|  [Add]  [Sub]   [Mul]  [Div]  |" << std::endl;
    std::cout << "|                  ^^^          |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|-------------------------------|" << std::endl;
    std::cout << "|   1st Number [" << fir << "]   " << std::endl;
    std::cout << "|>> OPERATOR   [ x ]             " << std::endl;
    std::cout << "|   2nd Number [" << sec << "]   " << std::endl;
    std::cout << "|_______________________________|" << std::endl;
    std::cout << "CALCULATED ANSWER: " << ans << std::endl;
}

void div()
{
    ans = fir / sec;
    std::cout << "_________________________________" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|   |=======================|   |" << std::endl;
    std::cout << "     " << ans << std::endl;
    std::cout << "|   |=======================|   |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|-------------------------------|" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|          OPERATORS            |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|                          *    |" << std::endl;
    std::cout << "|  | + |  | - |   | X |  | / |  |" << std::endl;
    std::cout << "|  [Add]  [Sub]   [Mul]  [Div]  |" << std::endl;
    std::cout << "|                         ^^^   |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|                               |" << std::endl;
    std::cout << "|-------------------------------|" << std::endl;
    std::cout << "|   1st Number [" << fir << "]   " << std::endl;
    std::cout << "|>> OPERATOR   [ / ]             " << std::endl;
    std::cout << "|   2nd Number [" << sec << "]   " << std::endl;
    std::cout << "|_______________________________|" << std::endl;
    std::cout << "CALCULATED ANSWER: " << ans << std::endl;
}


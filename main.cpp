// Testando a classe CommissionEmployee.
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "CommissionEmployee.h" // Definição da classe CommissionEmployee

int main()
{
    // Instancia um objeto CommissionEmployee
    CommissionEmployee employee(
        "Sue", "Jones", "222-22-2222", 10000, .06
    );

    // Configura a formatação de saída de ponto flutuante
    cout << fixed << setprecision(2);

    // Obtém os dados do empregado comissionado
    cout << "Employee information obtained by get functions: \n"
         << "\nFirst name is " << employee.getFirstName()
         << "\nLast name is " << employee.getLastName()
         << "\nSocial security number is "
         << employee.getSocialSecurityNumber()
         << "\nGross sales is " << employee.getGrossSales()
         << "\nCommission rate is " << employee.getCommissionRate() << endl;

    employee.setGrossSales(8000); // Configura as vendas brutas
    employee.setCommissionRate(.1); // Configura a taxa de comissão

    cout << "\nUpdated employee information output by print function: \n"
         << endl;
    employee.print(); // Exibe as novas informações do empregado

    // Exibe os rendimentos do empregado
    cout << "\n\nEmployee’s earnings: $" << employee.earnings() << endl;

    return 0;
} // Fim de main
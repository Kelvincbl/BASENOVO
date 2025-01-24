// Definições de função-membro da classe CommissionEmployee.
#include <iostream>
using std::cout;

#include "CommissionEmployee.h" // Definição da classe CommissionEmployee

// Construtor
CommissionEmployee::CommissionEmployee(
    const string &first, const string &last, const string &ssn,
    double sales, double rate )
{
    firstName = first; // deve validar
    lastName = last; // deve validar
    socialSecurityNumber = ssn; // deve validar
    setGrossSales( sales ); // valida e armazena as vendas brutas
    setCommissionRate( rate ); // valida e armazena a taxa de comissão
} // fim do construtor CommissionEmployee

// Configura o nome
void CommissionEmployee::setFirstName( const string &first )
{
    firstName = first; // deve validar
} // fim da função setFirstName

// Retorna o nome
string CommissionEmployee::getFirstName() const
{
    return firstName;
} // fim da função getFirstName

// Configura o sobrenome
void CommissionEmployee::setLastName( const string &last )
{
    lastName = last; // deve validar
} // fim da função setLastName

// Retorna o sobrenome
string CommissionEmployee::getLastName() const
{
    return lastName;
} // fim da função getLastName

// Configura o SSN
void CommissionEmployee::setSocialSecurityNumber( const string &ssn )
{
    socialSecurityNumber = ssn; // deve validar
} // fim da função setSocialSecurityNumber

// Retorna o SSN
string CommissionEmployee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
} // fim da função getSocialSecurityNumber

// Configura a quantidade de vendas brutas
void CommissionEmployee::setGrossSales( double sales )
{
    grossSales = ( sales < 0.0 ) ? 0.0 : sales;
} // fim da função setGrossSales

// Retorna a quantidade de vendas brutas
double CommissionEmployee::getGrossSales() const
{
    return grossSales;
} // fim da função getGrossSales

// Configura a taxa de comissão
void CommissionEmployee::setCommissionRate( double rate )
{
    commissionRate = ( rate > 0.0 && rate < 1.0 ) ? rate : 0.0;
} // fim da função setCommissionRate

// Retorna a taxa de comissão
double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
} // fim da função getCommissionRate

// Calcula os rendimentos
double CommissionEmployee::earnings() const
{
    return commissionRate * grossSales;
} // fim da função earnings

// Imprime o objeto CommissionEmployee
void CommissionEmployee::print() const
{
    cout << "commission employee: " << firstName << ' ' << lastName
         << "\nsocial security number: " << socialSecurityNumber
         << "\ngross sales: " << grossSales
         << "\ncommission rate: " << commissionRate;
} // fim da função print
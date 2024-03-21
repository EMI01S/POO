#include "pch.h"
#include "stdafx.h"

#include "CreditCardAccount.h"


using namespace System;

CreditCardAccount::CreditCardAccount()
{
    // de aici adaugi valori
    accountNumber = 122; 
    currentBalance = 0;
    creditLimit = 100000; 
}

void CreditCardAccount::SetCreditLimit(double amount)
{
    creditLimit = amount;
}

bool CreditCardAccount::MakePurchase(double amount)
{
    if (currentBalance + amount > creditLimit)
    {
        return false;
    }
    else
    {
        currentBalance += amount;
        return true;
    }
}

void CreditCardAccount::MakeRepayment(double amount)
{
    currentBalance -= amount;
}

void CreditCardAccount::PrintStatement()
{
    Console::Write("Current balance: ");
    Console::WriteLine(currentBalance);
}

long CreditCardAccount::GetAccountNumber()
{
    return accountNumber;
}

#include "pch.h"
#include "stdafx.h"
#include "CreditCardAccount.h"


using namespace System;

int main(array<System::String^>^ args)
{
    CreditCardAccount^ myAccount = gcnew CreditCardAccount();
    myAccount->SetCreditLimit(1000); 
    myAccount->MakePurchase(1000); 
    myAccount->MakeRepayment(700); 
    myAccount->PrintStatement(); 

    long num = myAccount->GetAccountNumber();
    Console::Write("Account number: ");
    Console::WriteLine(num);

    return 0;
}

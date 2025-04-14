#include <iostream>
#include "Bank.h"
#include "Account.h"
#include "Client.h"
#include "CreditAccount.h"
#include <vector>

int main()
{
    Account* a;

    Bank* bank = new Bank(2, 2);
    Client* john = bank->CreateClient(1, "John");
    Client* barbara = bank->CreateClient(1, "Barbara");
    Account* personal = bank->CreateAccount(1, john);
    PartnerAccount* partnerAcc = bank->CreatePartnerAccount(2, john, barbara);
    a = partnerAcc;

    //personal->Deposit(2000.0);
    //cout << personal->GetBalance() << endl;
    //personal->Withdraw(1000.0);


    /* ------------ TEST OVERRIDING -------------- */

    CreditAccount* creditAcc = new CreditAccount(1, john, 1000);
    cout << "Current Balance: " << creditAcc->GetBalance() << endl;

    cout << "Deposit 2000" << endl;
    creditAcc->Deposit(2000.0);
    cout << "Current Balance: " << creditAcc->GetBalance() << endl;
    cout << "------------" << endl;

    string text = creditAcc->CanWithdraw(3000) ? "yes" : "no";
    cout << "Can Withdraw 3000? " << text << endl;
    cout << "Current Balance: " << creditAcc->GetBalance() << endl;
    cout << "------------" << endl;

    cout << "Withdraw 1000" << endl;
    creditAcc->Withdraw(1000.0);
    cout << "Current Balance: " << creditAcc->GetBalance() << endl;
    cout << "------------" << endl;


    cout << "Assign to variable of parent type and call method." << endl;
    Account* b = creditAcc;
    b->Withdraw(1000.0);

    return 0;
}

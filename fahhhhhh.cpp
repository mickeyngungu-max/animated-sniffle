

 #include <iostream>
using namespace std;
int main() {
    double balance, amount_to_send;

   
    cout << "Enter your M-Pesa account balance (KSh): ";
    cin >> balance;

   cout << "Enter the amount you want to send (KSh): ";
   cin >> amount_to_send;

    
    if (balance >= 100 && (amount_to_send > 0 && amount_to_send <= balance)) {
        std::cout << "Transaction approved." << std::endl;
    } 
    else {
        cout << "Transaction declined. Reason: ";
   }
   return 0;
   
   }
 

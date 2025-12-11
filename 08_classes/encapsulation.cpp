/*
 * encapsulation.cpp
 * Encapsulation: data hiding using private members
 * Demonstrates: private members, getters, setters, data validation
 */

#include <iostream>

class BankAccount {
    private:
        double balance;  // Private member - cannot be accessed directly
        
    public:
        // Constructor
        BankAccount(double initial_balance) {
            if (initial_balance >= 0) {
                balance = initial_balance;
            } else {
                balance = 0;
            }
        }
        
        // Getter
        double getBalance() {
            return balance;
        }
        
        // Setter with validation
        void deposit(double amount) {
            if (amount > 0) {
                balance += amount;
                std::cout << "Deposited: $" << amount << "\n";
            } else {
                std::cout << "Invalid deposit amount\n";
            }
        }
        
        bool withdraw(double amount) {
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                std::cout << "Withdrawn: $" << amount << "\n";
                return true;
            } else {
                std::cout << "Invalid withdrawal\n";
                return false;
            }
        }
};

int main() {
    
    BankAccount account(1000.0);
    
    std::cout << "Initial balance: $" << account.getBalance() << "\n\n";
    
    account.deposit(500.0);
    std::cout << "Current balance: $" << account.getBalance() << "\n\n";
    
    account.withdraw(200.0);
    std::cout << "Current balance: $" << account.getBalance() << "\n\n";
    
    account.withdraw(2000.0);  // Should fail
    std::cout << "Final balance: $" << account.getBalance() << "\n";
    
    return 0;
}

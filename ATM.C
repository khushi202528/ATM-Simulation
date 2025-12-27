#include <stdio.h>

int main() {
    int pin = 1234, enteredPin;
    int choice;
    float balance = 5000.0, amount;

    printf("===== WELCOME TO ATM =====\n");

    // PIN Verification
    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("❌ Incorrect PIN. Access Denied.\n");
        return 0;
    }

    printf("✅ PIN Verified Successfully!\n");

    do {
        printf("\n----- ATM MENU -----\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("💰 Current Balance: ₹%.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ₹");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("✅ Deposit Successful!\n");
                } else {
                    printf("❌ Invalid Amount!\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ₹");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("✅ Withdrawal Successful!\n");
                } else {
                    printf("❌ Insufficient Balance or Invalid Amount!\n");
                }
                break;

            case 4:
                printf("🙏 Thank you for using ATM. Goodbye!\n");
                break;

            default:
                printf("❌ Invalid Choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}

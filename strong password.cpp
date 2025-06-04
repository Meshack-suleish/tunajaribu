// Common criteria for a strong password include:

//At least 8 characters long.
///Contains both uppercase and lowercase characters.
/////Contains special characters (e.g., !@#$%^&*).
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isStrongPassword(string password) {// define a boolean function
    if (password.length() < 8) {
        return false;
    }

    bool hasUpper = false, hasLower = false, hasSpecial = false;

    for (char ch : password) {//check all characters of a password
        if (isupper(ch)) {    //here,isupper,islower and ispunct are built_in functions
            hasUpper = true;
        } else if (islower(ch)) {
            hasLower = true;
        } 
         else if (ispunct(ch)) {
            hasSpecial = true;
        }

        // If all criteria are met, we can break early
        if (hasUpper && hasLower && hasSpecial) {
            return true;
        }
    }

    return hasUpper && hasLower && hasSpecial;
}

int main() {
    string password;

    cout << "Enter password to check: ";
    cin >> password;
    
//calling the function:
    if (isStrongPassword(password)) {//if a password is strong display message
        cout << "The password is strong." << endl;
    } else {
        cout << "The password is not strong enough." <<endl;
    }

    return 0;
}

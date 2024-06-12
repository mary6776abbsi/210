#include <iostream>
#include <regex>
using namespace std;

// تابع برای اعتبارسنجی شماره تلفن همراه
bool validateMobileNumber(string number) {
    // الگوی شماره تلفن همراه به کمک عبارت منظم
    regex pattern("(09)(\\d{9})");

    // بررسی مطابقت شماره با الگو
    return regex_match(number, pattern);
}

int main() {
    string mobileNumber;

    // دریافت شماره تلفن همراه از کاربر
    cout << "Enter your mobile number (e.g., 09123456789): ";
    cin >> mobileNumber;

    // اعتبارسنجی شماره تلفن همراه و چاپ نتیجه
    if (validateMobileNumber(mobileNumber)) {
        cout << "Valid mobile number!" << endl;
    }
    else {
        cout << "Invalid mobile number!" << endl;
    }

    return 0;
}


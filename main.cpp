#include <iostream>
#include <string>
#include <limits>
int main()
{
    std::string fullName;

    std::cout << "Enter your full name: ";

    if (!std::getline(std::cin, fullName)) {
        std::cerr << "Error reading input.\n";
        return 1;
    }

    if (!fullName.empty()) {
        size_t start = fullName.find_first_not_of(" \t");
        size_t end = fullName.find_last_not_of(" \t");
        if (start != std::string::npos && end != std::string::npos) {
            fullName = fullName.substr(start, end - start + 1);
        }
    }

    std::cout << "Hello, " << fullName << "!\n";


    int month = 0, day = 0;

    std::cout << "Enter your birth month (1–12): ";
    if (!(std::cin >> month) || month < 1 || month > 12) {
        std::cerr << "Invalid month. Please enter a number between 1 and 12.\n";
        return 1; // Exit with error
    }

    std::cout << "Enter your birth day: ";
    if (!(std::cin >> day) || day < 1 || day > 31) {
        std::cerr << "Invalid day. Please enter a number between 1 and 31.\n";
        return 1; // Exit with error
    }

    std::cout << "You were born on " << month << "/" << day << ".\n";

#include <iostream>

        std::string getZodiacSign(int month, int day);
        std::string zodiac;
        {
            // Aries: March 21 – April 19
            if ((month == 3 && day >= 21 && day <= 31) || (month == 4 && day <= 19))
                zodiac = "Aries";
            // Taurus: April 20 – May 20
            else if ((month == 4 && day >= 20 && day <= 30) || (month == 5 && day <= 20))
                zodiac = "Taurus";
            // Gemini: May 21 – June 20
            else if ((month == 5 && day >= 21 && day <= 31) || (month == 6 && day <= 20))
                zodiac = "Gemini";
            // Cancer: June 21 – July 22
            else if ((month == 6 && day >= 21 && day <= 30) || (month == 7 && day <= 22))
                zodiac = "Cancer";
            // Leo: July 23 – August 22
            else if ((month == 7 && day >= 23 && day <= 31) || (month == 8 && day <= 22))
                zodiac = "leo";
            // Virgo: August 23 – September 22
            else if ((month == 8 && day >= 23 && day <= 31) || (month == 9 && day <= 22))
                zodiac = "Virgo";
            // Libra: September 23 – October 22
            else if ((month == 9 && day >= 23 && day <= 30) || (month == 10 && day <= 22))
                zodiac = "Libra";
            // Scorpio: October 23 – November 21
            else if ((month == 10 && day >= 23 && day <= 31) || (month == 11 && day <= 21))
                zodiac = "Scorpio";
            // Sagittarius: November 22 – December 21
            else if ((month == 11 && day >= 22 && day <= 30) || (month == 12 && day <= 21))
                zodiac = "Sagittarius";
            // Capricorn: December 22 – January 19
            else if ((month == 12 && day >= 22 && day <= 31) || (month == 1 && day <= 19))
                zodiac = "Capricorn";
            // Aquarius: January 20 – February 18
            else if ((month == 1 && day >= 20 && day <= 31) || (month == 2 && day <= 18))
                 zodiac = "Aquarius";
            // Pisces: February 19 – March 20
            else if ((month == 2 && day >= 19 && day <= 29) || (month == 3 && day <= 20))
                zodiac = "Pisces";
            else
                return *"Invalid date";
        std::cout << "Hello, " << fullName << "!\n";
        std::cout << "Your zodiac sign is "<< zodiac<< std::endl;
        }
        return 0;
    }






    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
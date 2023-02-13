#include <iostream>

#define DAY_0 "Monday"
#define DAY_1 "Tuesday"
#define DAY_2 "Wednesday"
#define DAY_3 "Thursday"
#define DAY_4 "Friday"
#define DAY_5 "Saturday"
#define DAY_6 "Sunday"
#define CURRENT_DAY(count) DAY_ ## count



int main() {
	int data;
	std::cout << "Enter number of a day: ";
	std::cin >> data;

	std::cout << CURRENT_DAY(day);

}

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

	switch(data)
	{
		case 0:
			std::cout << CURRENT_DAY(0);
			break;
		case 1:
			std::cout << CURRENT_DAY(1);
			break;
		case 2:
			std::cout << CURRENT_DAY(2);
			break;
		case 3:
			std::cout << CURRENT_DAY(3);
			break;
		case 4:
			std::cout << CURRENT_DAY(4);
			break;
		case 5:
			std::cout << CURRENT_DAY(5);
			break;
		case 6:
			std::cout << CURRENT_DAY(6);
			break;
		
	}
	
}

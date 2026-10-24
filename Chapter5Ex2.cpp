 
/*
* Write a program that generates a random number between 1 and 100 and 
asks the user to guess what the number is.If the user’s guess is higher 
than the random number, the program should display “Too high.Try again.” If the user’s guess is lower than the random number, the program should display “Too low.Try again.” The program should use a loop that repeats until the user correctly guesses the random number.
Then the program should display “Congratulations.You figured out my number.”
*/


#include <iostream>
#include <random>

using namespace std;

int main()
{
	// non object oriented
	srand(time(0));
	//generate 1-6)

	for (int count = 0; count < 10; count++)
		cout << rand() % 6 +1<< endl;

	std::random_device rd;

	// 2. Initialize the standard Mersenne Twister engine with the seed
	std::mt19937 gen(rd());

	// 3. Define the distribution range (inclusive, e.g., 1 to 6 for a dice roll)
	std::uniform_int_distribution<int> distrib(1, 6);

	// 4. Generate random numbers
	std::cout << "Rolling a 6-sided die 5 times:\n";
	for (int i = 0; i < 5; ++i) {
		std::cout << distrib(gen) << " ";
	}

}

 
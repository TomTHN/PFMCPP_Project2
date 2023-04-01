#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
int 
bool  
char
double 
float 
unsigned int
 

 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int age = 25;
    int money = 1000;
    int amountOfCars = 100;
    bool right = true;
    bool matkatMakesGoodVideos = true;
    bool lvlUpProgramming = true;
    char mathGrade = 'A';
    char sportGrade = 'A';
    char scienceGrade = 'A';
    double numberOne = 1.0;
    double numberTwo = 2.0;
    double numberThree = 3.0;
    float numberFour = 4.0f;
    float numberFive = 5.0f;
    float numberSix = 6.0f;
    unsigned int one = 1;
    unsigned int two = 2;
    unsigned int three = 3;

    
    ignoreUnused(number, age, money, amountOfCars, right, matkatMakesGoodVideos, lvlUpProgramming, mathGrade, sportGrade, scienceGrade, numberFour, numberFive, numberSix, one, two, three); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
bool buyACar(int price = 50000, bool used)
{
    ignoreUnused(price, used);
    return {};
}

/*
 2)
 */
int openFrontDoor(bool gotTheKey , int amountOfLocks)
{
    ignoreUnused(gotTheKey, amountOfLocks);
    return {};
}

/*
 3)
 */
float flyToBerlin(int ticketPrice, int flightNumber, int seats = 3)
{
    ignoreUnused(ticketPrice, flightNumber, seats);
    return {};
}

/*
 4)
 */
bool swimInSee(bool speedosOn = true, int sunScreen)
{
    ignoreUnused(speedosOn, sunScreen);
    return {};
}

/*
 5)
 */
void makeCoffee(int coffeeType, bool milk)
{
    ignoreUnused(coffeeType, milk);
}

/*
 6)
 */
void washHair(int waterTemp = 38, bool blowDryer)
{
    ignoreUnused(coffeeType, blowDryer);
}

/*
 7)
 */
int goToSleep(bool teethBrushed, bool tired)
{
    ignoreUnused(teethBrushed, tired);
    return {};
}

/*
 8)
 */
int cookDinner(int ingredients = 20, int cookingDuration)
{
    ignoreUnused(ingredients, cookingDuration);
    return {};
}

/*
 9)
 */
int writingFunctions(int dataType, int parameters)
{
    ignoreUnused(dataType, parameters);
    return {};
}

/*
 10)
 */
int learningProgramming(int duration, bool withMatkat = true)
{
    ignoreUnused(duration, withMatkat);
    return {};
}


/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto carBought = buyACar(100000, false);

    //2)
    auto doorOpen = openFrontDoor(true , 4);

    //3)
    auto ticketsBought = flyToBerlin(100, 12345, 3);

    //4)
    auto swim = swimInSee(true, 30);

    //5)
    makeCoffee(2, true);

    //6)
    washHair(40, false);

    //7)
    auto closeEyes = goToSleep(true, true);

    //8)
    auto whatToEat = cookDinner(50, 20);

    //9)
    auto functionWritten = writingFunctions(1, 2);

    //10)
    auto programming = learningProgramming(30, true);
    
    ignoreUnused(carRented, carBought, doorOpen, ticketsBought, swim, closeEyes, whatToEat, functionWritten, programming);

    std::cout << "good to go!" << std::endl;
    return 0;    
}

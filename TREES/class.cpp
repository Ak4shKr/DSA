/*WAP TO RETURN MIULTIPLE VALUES*/

#include <iostream>
using namespace std;

// Define a class to hold multiple values
class MultipleValues
{
public:
    int value1;
    double value2;
    char value3;
};

// Function that returns an instance of the class with multiple values
MultipleValues getMultipleValues()
{
    MultipleValues values;
    values.value1 = 42;
    values.value2 = 3.14159;
    values.value3 = 'A';
    return values;
}

int main()
{
    // Call the function to get multiple values
    MultipleValues result = getMultipleValues();

    // Access the returned values
    cout << "Value 1: " << result.value1 << endl;
    cout << "Value 2: " << result.value2 << endl;
    cout << "Value 3: " << result.value3 << endl;

    return 0;
}

/*to set double precision*/

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     double doubleValue = 3.141592653589793;
//     float floatValue = 3.141592653589793f; // Notice the 'f' suffix

//     cout << "double : " << doubleValue << endl;
//     cout << fixed << setprecision(10) << "Number with ten decimal places: " << doubleValue << endl;
//     cout << "Float: " << floatValue << endl;

//     return 0;
// }

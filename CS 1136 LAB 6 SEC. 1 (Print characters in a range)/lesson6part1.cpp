// This program will print characters with ASCII codes 32 through
// 126 in a tabular form based on the user's selected range.

#include <iostream>

using namespace std ;

int main()
{
        // Declare variables.
    unsigned int LowerAsciiValue ;  // The smaller ASCII code selection by the user.
    unsigned int UpperAsciiValue ;  // The larger ASCII code selection by the user.
    unsigned int CurrentAsciiValue ;  // Counter variable that is updated when going
                                      // through the range of the user's selections.

        // Ask the user for the smaller and larger ASCII codes.
    cout << "Enter lower and upper values" ;
    cin >> LowerAsciiValue >> UpperAsciiValue ;
    cout << endl ;

        // Validate the user's input.
        // Check if the selection is outside the range or if the larger ASCII code is less than the smaller.
    while ( ( LowerAsciiValue < 32 || UpperAsciiValue > 126 ) || ( LowerAsciiValue > UpperAsciiValue ) )
    {
            // Display error message.
        cout << "Values must be in range 32 to 126 inclusive" << endl ;

            // Ask the user again for the smaller and larger ASCII codes.
        cout << "Enter lower and upper values" ;
        cin >> LowerAsciiValue >> UpperAsciiValue ;
        cout << endl ;
    }

        // Display the top of the table to the user.
    cout <<"Characters for ASCII values between " ;
    cout << LowerAsciiValue << " and " << UpperAsciiValue << endl ;
    cout << "----+----+----+----+" << endl ;

        // Assign to the loop control variable, the smaller ASCII code selection.
    CurrentAsciiValue = LowerAsciiValue ;

        // Check if the current ASCII code is between the user's specified range.
    while ( CurrentAsciiValue >= LowerAsciiValue && CurrentAsciiValue <= UpperAsciiValue )
    {
            // Convert the current ASCII value to its character and display the result.
        cout << static_cast <char> ( CurrentAsciiValue ) ;

            // Check if the last character on a row is up to a multiple of 20.
        if ( ( CurrentAsciiValue - ( LowerAsciiValue - 1 ) ) % 20 == 0 )
        {
                // Go to a new row when a row is filled up (not considering if the final row is filled).

                // Check if the current ASCII code is less than the larger ASCII code selection.
            if ( CurrentAsciiValue < UpperAsciiValue )
            {
                    // Go to a new line.
                cout << endl ;
            }

                // Display output when there is an exact number of filled lines of output.
                // (to prevent an extra new line from being displayed at the bottom of the table).

                // Check if the current ASCII code is the larger ASCII code selection.
            else
            {
                    // When the last row is filled up, do not go to a new line.
                cout << "" ;
            }

        }

            // Increment the current ASCII value in each iteration.
        CurrentAsciiValue++ ;
    }

        // Display the bottom of the table to the user (go to a new line).
    cout << endl << "----+----+----+----+" << endl ;

    return 0 ;
}

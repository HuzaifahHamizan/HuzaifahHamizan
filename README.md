#include <iostream>
#include <iomanip>
#include <string>
#include <locale>
#include <Player.h>


using namespace std;

int main()
{
    locale loc;
    int start;
    string name, temps, tempf, gender, temp2;

    cout << setfill('*') << setw(65) << '\n';
    cout << setfill(' ') << setw(65) << '\n';
    cout << setfill(' ') << setw(48);
    cout << "Hello! Welcome to our Golf Course!" << endl;
    cout << setfill(' ') << setw(65) << '\n';
    cout << setfill('*') << setw(65) << '\n';


    cout << "What is your surname? ";
    cin >> temps;
    cout << "What is your forename? ";
    cin >> tempf;
    cout << setfill(' ') << setw(65) << '\n';
    cout << setfill('*') << setw(65) << '\n';
    cout << setfill(' ') << setw(65) << '\n';
    cout << setfill(' ') << setw(26);

    cout << "Welcome ";
    Player myPlayer(temps, tempf);
    cout << endl;


    /*
    for (string::size_type i=0; i<tempf.length(); ++i){
        temp2 = tolower(tempf[i],loc);
        name.append(temp2);
    }
    temp2 = "";
    name.append(" ");
    for (string::size_type i=0; i<temps.length(); ++i){
        temp2 = tolower(temps[i],loc);
        name.append(temp2);
    }
    cout << name;
    */
    cout << setfill(' ') << setw(65) << '\n';
    cout << setfill('*') << setw(65) << '\n';
    cout << "Option 1. Create a scorecard \n";
    cout << "Option 2. Manage \n";
    cout << setfill(' ') << setw(65) << '\n';
    cout << "What would you like to do? (1 or 2) \n";
    cin >> start;
    system("CLS");
    while (start == 1){

            cout << "\nA new scorecard for player named " << name << " has been created!" << endl;
            start++;
    }


    return 0;

}

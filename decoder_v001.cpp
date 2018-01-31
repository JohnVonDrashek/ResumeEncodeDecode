//code for encoder:

    #include <iostream>
    #include <fstream>
    using namespace std;

    string name;
    cout << "What is your name?" << endl;
    getline(cin, name);

    string phoneNumber;
    cout << "What is your phone number?" << endl;
    getline(cin, phoneNumber);

    string emailAddress;
    cout << "What is your email address?" << endl;
    getline(cin, emailAddress);

    string address;
    cout << "What is your address?" << endl;
    cout << "Enter first address line: ";
    getline(cin, address);

    string city;
    cout << "Enter the name of the city you live in: ";
    getline(cin, city);

    string state;
    cout << "Enter the name of the state you live in: ";
    getline(cin, state);

    string zipCode;
    cout << "Enter your zip code: ";
    getline(cin, zipCode);

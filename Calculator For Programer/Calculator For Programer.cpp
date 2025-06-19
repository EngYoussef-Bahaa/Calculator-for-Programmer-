#include <iostream>
# include<cmath>     
# include<string>     
using namespace std;
enum enTypeOfNumerialSystem { Binary = 1, Decimal = 2, HexaDecimal = 3, Octal = 4 };
short ReadNumber1oftypeofNumerialSystem()
{
    short NumTybe;
    cout << "\n===========================================================================================\n\n";
    cout << "                                    Programming Calculator                    \n";
    cout << "\n===========================================================================================\n\n\n";
    cout << "            Binary[1]                                                Decimal[2]         \n\n";
    cout << "            Hexa Decimal[3]                                            Octal[4]         \n\n";
    cout << "\n===========================================================================================\n\n";
    do
    {
        cout << "Enter the number of the number system you will be converting from ^_^ \n\n";
        cin >> NumTybe;
        if (NumTybe < 1 || NumTybe>4)
        {
            system("color 4F");
        }
        else  if (NumTybe == 1)
        {
            system("color 5F");
        }
        else  if (NumTybe == 2)
        {

            system("color 2F");
        }
        else  if (NumTybe == 3)
        {

            system("color 8F");
        }
        else
        {
            system("color 9F");

        }

    } while (NumTybe < 1 || NumTybe>4);
    return NumTybe;
}
short ReadNumber2oftypeofNumerialSystem()
{
    short NumType;
    do
    {
        cout << "Enter the number of the number system you will be converting To ^_^ \n\n";
        cin >> NumType;
        if (NumType < 1 || NumType>4)
        {
            system("color 4F");
        }
        else  if (NumType == 1)
        {
            system("color 5F");
        }
        else  if (NumType == 2)
        {

            system("color 2F");
        }
        else  if (NumType == 3)
        {

            system("color 8F");
        }
        else
        {
            system("color 9F");

        }

    } while (NumType < 1 || NumType>4);
    return NumType;
}
long long ConverFromBinarytoDecimal(string Binary)
{
    long long Decimal;
    Decimal = 0;
    int Power = 0;
    for (int i = Binary.length() - 1; i >= 0; i--)
    {
        if (Binary[i] == '1')
        {
            Decimal = Decimal + pow(2, Power);
        }
        Power++;
    }
    return Decimal;
}
string ConvertFromDecimalToBinary(long long Decimal)
{
    string Binary, FinalBinary;
    long long Reminder = 0;
    while (Decimal > 0)
    {
        Reminder = Decimal % 2;
        if (Reminder == 1)
        {
            Binary += "1";
        }
        else
        {

            Binary += "0";
        }
        Decimal = Decimal / 2;
    }
    for (int i = Binary.length() - 1; i >= 0; i--)
    {
        FinalBinary += Binary[i];
    }
    return FinalBinary;

}
string ConvertFromDecimalToOctal(long long Decimal)
{
    string Octal, FinalOctal;
    long long Reminder = 0;
    while (Decimal > 0)
    {
        Reminder = Decimal % 8;
        Octal += to_string(Reminder);
        Decimal = Decimal / 8;
    }
    for (int i = Octal.length() - 1; i >= 0; i--)
    {
        FinalOctal += Octal[i];
    }
    return FinalOctal;

}
string ConvertFromDecimalToHexaDecimal(long long Decimal)
{
    string HexaDecimal, FinalHexaDecimal;
    long long Reminder = 0;
    while (Decimal > 0)
    {
        char MyRemin;
        Reminder = Decimal % 16;
        MyRemin = char(Reminder);
        if (Reminder == 1)
            MyRemin = '1';
        else if (Reminder == 2)
            MyRemin = '2';
        else if (Reminder == 3)
            MyRemin = '3';
        else if (Reminder == 4)
            MyRemin = '4';
        else if (Reminder == 5)
            MyRemin = '5';
        else if (Reminder == 6)
            MyRemin = '6';
        else if (Reminder == 7)
            MyRemin = '7';
        else if (Reminder == 8)
            MyRemin = '8';
        else if (Reminder == 9)
            MyRemin = '9';
        else if (Reminder == 10)
            MyRemin = 'A';
        else if (Reminder == 11)
            MyRemin = 'B';
        else if (Reminder == 12)
            MyRemin = 'C';
        else if (Reminder == 13)
            MyRemin = 'D';
        else if (Reminder == 14)
            MyRemin = 'E';
        else if (Reminder == 15)
            MyRemin = 'F';
        HexaDecimal += MyRemin;
        Decimal = Decimal / 16;
    }
    for (int i = HexaDecimal.length() - 1; i >= 0; i--)
    {
        FinalHexaDecimal += HexaDecimal[i];
    }
    return FinalHexaDecimal;

}
long long ConverFromOctaltoDecimal(long long Octal)
{
    long long Decimal = 0;
    short Reminder, Power = 0;
    while (Octal > 0)
    {
        Reminder = Octal % 10;
        Decimal = Decimal + pow(8, Power) * Reminder;
        Octal /= 10;
        Power++;
    }
    return Decimal;
}
long long ConverFromHexaDecimaltoDecimal(string HexaDecimal)
{
    long long Decimal;
    Decimal = 0;
    int Power = 0;
    for (int i = HexaDecimal.length() - 1; i >= 0; i--)
    {
        int Reminder;
        char MyRemin = HexaDecimal[i];
        if (MyRemin == '1')
            Reminder = 1;
        else if (MyRemin == '2')
            Reminder = 2;
        else if (MyRemin == '3')
            Reminder = 3;
        else if (MyRemin == '4')
            Reminder = 4;
        else if (MyRemin == '5')
            Reminder = 5;
        else if (MyRemin == '6')
            Reminder = 6;
        else if (MyRemin == '7')
            Reminder = 7;
        else if (MyRemin == '8')
            Reminder = 8;
        else if (MyRemin == '9')
            Reminder = 9;
        else if (MyRemin == 'A')
            Reminder = 10;
        else if (MyRemin == 'B')
            Reminder = 11;
        else if (MyRemin == 'C')
            Reminder = 12;
        else if (MyRemin == 'D')
            Reminder = 13;
        else if (MyRemin == 'E')
            Reminder = 14;
        else if (MyRemin == 'F')
            Reminder = 15;


        Decimal = Decimal + (pow(16, Power) * Reminder);
        Power++;
    }
    return Decimal;
}
int main()
{
    short NumerialSystemFrom = ReadNumber1oftypeofNumerialSystem();
    short NumerialSystemTo = ReadNumber2oftypeofNumerialSystem();
    string Binary, Hexadecimal;
    long long Decimal, Octal;
    if (NumerialSystemFrom == enTypeOfNumerialSystem::Binary)
    {
        cout << "\nEnter Binary Number :) \n\n";
        cin >> Binary;
        if (NumerialSystemTo == enTypeOfNumerialSystem::Decimal)
        {
            cout << "\n Decimal : " << ConverFromBinarytoDecimal(Binary);
        }
        else if (NumerialSystemTo == enTypeOfNumerialSystem::HexaDecimal)
        {

            cout << "\n Hexa Decimal : " << ConvertFromDecimalToHexaDecimal(ConverFromBinarytoDecimal(Binary));

        }
        else if (NumerialSystemTo == enTypeOfNumerialSystem::Octal)
        {

            cout << "\n Octal : " << ConvertFromDecimalToOctal(ConverFromBinarytoDecimal(Binary));

        }
        else {

            cout << "\n Binary : " << Binary;
        }

    }
    else if (NumerialSystemFrom == enTypeOfNumerialSystem::Decimal)
    {
        cout << "\nEnter Decimal Number :) \n\n";
        cin >> Decimal;

        if (NumerialSystemTo == enTypeOfNumerialSystem::Binary)
        {


            cout << "\nBinary : " << ConvertFromDecimalToBinary(Decimal);

        }
        else if (NumerialSystemTo == enTypeOfNumerialSystem::HexaDecimal)
        {


            cout << "\nHexa Decimal : " << ConvertFromDecimalToHexaDecimal(Decimal);
        }
        else if (NumerialSystemTo == enTypeOfNumerialSystem::Octal)
        {

            cout << "\nOctal : " << ConvertFromDecimalToOctal(Decimal);
        }
        else {

            cout << "\nDecimal : " << Decimal;
        }

    }
    else if (NumerialSystemFrom == enTypeOfNumerialSystem::HexaDecimal)
    {

        cout << "\nEnter  Hexa Decimal Number :) \n\n";
        cin >> Hexadecimal;
        if (NumerialSystemTo == enTypeOfNumerialSystem::Binary)
        {


            cout << "\n Binary : " << ConvertFromDecimalToBinary(ConverFromHexaDecimaltoDecimal(Hexadecimal));

        }
        else if (NumerialSystemTo == enTypeOfNumerialSystem::Decimal)
        {

            cout << "\n Decimal : " << ConverFromHexaDecimaltoDecimal(Hexadecimal);


        }
        else if (NumerialSystemTo == enTypeOfNumerialSystem::Octal)
        {

            cout << "\n Octal : " << ConvertFromDecimalToOctal(ConverFromHexaDecimaltoDecimal(Hexadecimal));


        }
        else {
            cout << "\nHexa Decimal : " << Hexadecimal;
        }

    }
    else if (NumerialSystemFrom == enTypeOfNumerialSystem::Octal)
    {
        cout << "\nEnter Octal Number :) \n\n";
        cin >> Octal;

        if (NumerialSystemTo == enTypeOfNumerialSystem::Binary)
        {



            cout << "\n Binary : " << ConvertFromDecimalToBinary(ConverFromOctaltoDecimal(Octal));



        }
        else if (NumerialSystemTo == enTypeOfNumerialSystem::Decimal)
        {


            cout << "\n Decimal : " << ConverFromOctaltoDecimal(Octal);


        }
        else if (NumerialSystemTo == enTypeOfNumerialSystem::HexaDecimal)
        {


            cout << "\n Hexa Decimal : " << ConvertFromDecimalToHexaDecimal(ConverFromOctaltoDecimal(Octal));


        }
        else {
            cout << "\nOctal : " << Octal;
        }

    }
    return 0;
}
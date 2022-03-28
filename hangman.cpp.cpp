#include <iostream>
#include <chrono>
#include <thread>
#include <sstream>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <fstream>

using namespace std;

string GussNumber, gussingNumber;

void pic0() {
    cout << "==============================\n";
    cout << "    H A N G M A N  G A M E\n";
    cout << "==============================";
}

void pic1() {

    cout << "\t\t\t\t\t\t  +---+ \n";
    cout << "\t\t\t\t\t\t  |   | \n";
    cout << "\t\t\t\t\t\t      | \n";
    cout << "\t\t\t\t\t\t      | \n";
    cout << "\t\t\t\t\t\t      | \n";
    cout << "\t\t\t\t\t\t      | \n";
    cout << "\t\t\t\t\t\t ========= \n";
}

void pic2() {
    cout << "\t\t\t\t\t\t  +---+ \n";
    cout << "\t\t\t\t\t\t  |   | \n";
    cout << "\t\t\t\t\t\t  O   | \n";
    cout << "\t\t\t\t\t\t      | \n";
    cout << "\t\t\t\t\t\t      | \n";
    cout << "\t\t\t\t\t\t      | \n";
    cout << "\t\t\t\t\t\t ========= \n";
}

void pic3() {
    cout << "\t\t\t\t\t\t  +---+ \n";
    cout << "\t\t\t\t\t\t  |   | \n";
    cout << "\t\t\t\t\t\t  O   | \n";
    cout << "\t\t\t\t\t\t  |   | \n";
    cout << "\t\t\t\t\t\t      | \n";
    cout << "\t\t\t\t\t\t      | \n";
    cout << "\t\t\t\t\t\t ========= \n";
}

void pic4() {
    cout << "\t\t\t\t\t\t  +---+ \n";
    cout << "\t\t\t\t\t\t  |   | \n";
    cout << "\t\t\t\t\t\t  O   | \n";
    cout << "\t\t\t\t\t\t /|   | \n";
    cout << "\t\t\t\t\t\t      | \n";
    cout << "\t\t\t\t\t\t      | \n";
    cout << "\t\t\t\t\t\t ========= \n";
}

void pic5() {
    cout << "\t\t\t\t\t\t  +---+ \n";
    cout << "\t\t\t\t\t\t  |   | \n";
    cout << "\t\t\t\t\t\t  O   | \n";
    cout << "\t\t\t\t\t\t /|\\  | \n";
    cout << "\t\t\t\t\t\t      | \n";
    cout << "\t\t\t\t\t\t      | \n";
    cout << "\t\t\t\t\t\t ========= \n";
}

void pic6() {
    cout << "\t\t\t\t\t\t  +---+ \n";
    cout << "\t\t\t\t\t\t  |   | \n";
    cout << "\t\t\t\t\t\t  O   | \n";
    cout << "\t\t\t\t\t\t /|\\  | \n";
    cout << "\t\t\t\t\t\t /    | \n";
    cout << "\t\t\t\t\t\t      | \n";
    cout << "\t\t\t\t\t\t ========= \n";
}

void pic7() {
    cout << "\t\t\t\t\t\t  +---+ \n";
    cout << "\t\t\t\t\t\t  |   | \n";
    cout << "\t\t\t\t\t\t  O   | \n";
    cout << "\t\t\t\t\t\t /|\\  | \n";
    cout << "\t\t\t\t\t\t / \\  | \n";
    cout << "\t\t\t\t\t\t      | \n";
    cout << "\t\t\t\t\t\t ========= \n";
}

void pic8() {
    cout << "YOU WIN";
}

void pic9() {
    cout << "\n\n\t\t\t\t\t==================" << endl;
    cout << "\t\t\t\t\tYOU BEEN HANGED" << endl;
    cout << "\t\t\t\t\t==================" << endl;
    this_thread::sleep_for(chrono::milliseconds(1500));
    cout << "YOU LOOSE";
}

int main() {

    cout << "Enter Guss number : ";
    cin >> GussNumber;

    system("cls");

    this_thread::sleep_for(chrono::milliseconds(1500));

    pic0();

    this_thread::sleep_for(chrono::milliseconds(1500));

    cout << "\nEnter Your Gussing Number : ";
    cin >> gussingNumber;

    if (gussingNumber == GussNumber) {
        pic8();

        this_thread::sleep_for(chrono::milliseconds(2000));

        system("pause>0");
        return 0;
    }
    else {
        system("cls");
        pic1();

        this_thread::sleep_for(chrono::milliseconds(1500));

        cout << "\nEnter Your Gussing Number :";
        cin >> gussingNumber;
        if (gussingNumber == GussNumber) {
            pic8();

            this_thread::sleep_for(chrono::milliseconds(2000));

            system("pause>0");
            return 0;
        }
        else {
            system("cls");
            pic2();

            this_thread::sleep_for(chrono::milliseconds(1500));

            cout << "\nEnter Your Gussing Number :";
            cin >> gussingNumber;
            if (gussingNumber == GussNumber) {
                pic8();

                this_thread::sleep_for(chrono::milliseconds(2000));

                system("pause>0");
                return 0;
            }
            else {
                system("cls");
                pic3();

                this_thread::sleep_for(chrono::milliseconds(1500));

                cout << "\nEnter Your Gussing Number :";
                cin >> gussingNumber;
                if (gussingNumber == GussNumber) {
                    pic8();

                    this_thread::sleep_for(chrono::milliseconds(2000));

                    system("pause>0");
                    return 0;
                }
                else {
                    system("cls");
                    pic4();

                    this_thread::sleep_for(chrono::milliseconds(1500));

                    cout << "\nEnter Your Gussing Number :";
                    cin >> gussingNumber;
                    if (gussingNumber == GussNumber) {
                        pic8();

                        this_thread::sleep_for(chrono::milliseconds(2000));

                        system("pause>0");
                        return 0;
                    }
                    else {
                        system("cls");
                        pic5();

                        this_thread::sleep_for(chrono::milliseconds(1500));

                        cout << "\nEnter Your Gussing Number :";
                        cin >> gussingNumber;
                        if (gussingNumber == GussNumber) {
                            pic8();

                            this_thread::sleep_for(chrono::milliseconds(2000));

                            system("pause>0");
                            return 0;
                        }
                        else {
                            system("cls");
                            pic6();

                            this_thread::sleep_for(chrono::milliseconds(1500));

                            cout << "\nEnter Your Gussing Number :";
                            cin >> gussingNumber;

                            if (gussingNumber == GussNumber) {

                                pic8();

                                this_thread::sleep_for(chrono::milliseconds(2000));

                                system("pause>0");
                                return 0;
                            }
                            else {
                                system("cls");
                                pic7();

                                this_thread::sleep_for(chrono::milliseconds(1500));

                                cout << "\nEnter Your Gussing Number :";
                                cin >> gussingNumber;

                                if (gussingNumber == GussNumber) {


                                    pic8();

                                    this_thread::sleep_for(chrono::milliseconds(2000));

                                    system("pause>0");
                                    return 0;
                                }
                                else {
                                    system("cls");
                                    pic7();

                                    this_thread::sleep_for(chrono::milliseconds(1500));

                                    pic9();

                                    this_thread::sleep_for(chrono::milliseconds(1500));

                                    cout << "\n-------------" << endl;
                                    cout << "START OVER" << endl;
                                    cout << "-------------" << endl;

                                    this_thread::sleep_for(chrono::milliseconds(1500));

                                    system("pause>0");
                                    return main();
                                }


                            }

                        }
                    }
                }

            }

        }

        system("pause>0");
        return 0;

    }
}
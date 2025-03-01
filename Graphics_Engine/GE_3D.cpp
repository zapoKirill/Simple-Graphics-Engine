#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void render();

int main()
{
    render();

    return 0;
}

void render()
{
    string rotate;
    cout << "rotate X/Y" << endl;
    cin >> rotate;

    if(rotate == "X")
    {
        for(int i = 0; i < 5; i ++)
        {
            system("clear");

            cout << "@@@@@@@@@@@@" << endl;
            cout << "@          @" << endl;
            cout << "@          @" << endl;
            cout << "@          @" << endl;
            cout << "@          @" << endl;
            cout << "@@@@@@@@@@@@" << endl;
        
            this_thread::sleep_for(chrono::seconds(1));
            system("clear");
        
            cout << "@@@@@@@@@@@@" << endl;
            cout << "@     @    @" << endl;
            cout << "@     @    @" << endl;
            cout << "@     @    @" << endl;
            cout << "@     @    @" << endl;
            cout << "@@@@@@@@@@@@" << endl;
        
            this_thread::sleep_for(chrono::seconds(1));
            system("clear");
        
            cout << "@@@@@@@@@@@@" << endl;
            cout << "@          @" << endl;
            cout << "@          @" << endl;
            cout << "@          @" << endl;
            cout << "@          @" << endl;
            cout << "@@@@@@@@@@@@" << endl;
        }
    }

    if(rotate == "Y")
    {
        for(int i = 0; i < 5; i ++)
        {
            system("clear");
            
            cout << "@@@@@@@@@@@@" << endl;
            cout << "@          @" << endl;
            cout << "@          @" << endl;
            cout << "@          @" << endl;
            cout << "@          @" << endl;
            cout << "@@@@@@@@@@@@" << endl;
        
            this_thread::sleep_for(chrono::seconds(1));
            system("clear");
        
            cout << "@@@@@@@@@@@@" << endl;
            cout << "@          @" << endl;
            cout << "@          @" << endl;
            cout << "@@@@@@@@@@@@" << endl;
            cout << "@          @" << endl;
            cout << "@@@@@@@@@@@@" << endl;
        
            this_thread::sleep_for(chrono::seconds(1));
            system("clear");
        
            cout << "@@@@@@@@@@@@" << endl;
            cout << "@          @" << endl;
            cout << "@          @" << endl;
            cout << "@          @" << endl;
            cout << "@          @" << endl;
            cout << "@@@@@@@@@@@@" << endl;
        }
    }
}
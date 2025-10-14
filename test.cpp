#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
using namespace std::this_thread; 
using namespace std::chrono;


int main()
{
    bool status = true;

    while (true)
    {
        if (status)
        {
            cout << "\r\tEspere... :)" << flush;
        }
        else
        {
            cout << "\r\tEspere... ):" << flush;
        }
        status = !status;
        sleep_for(milliseconds(550));
    }

  
    return 0;
}
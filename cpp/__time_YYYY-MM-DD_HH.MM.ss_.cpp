/* USAGE of "struct tm" */

  // struct tm {
  //   int tm_sec;         /* seconds,  range 0 to 59          */
  //   int tm_min;         /* minutes, range 0 to 59           */
  //   int tm_hour;        /* hours, range 0 to 23             */
  //   int tm_mday;        /* day of the month, range 1 to 31  */
  //   int tm_mon;         /* month, range 0 to 11             */
  //   int tm_year;        /* The number of years since 1900   */
  //   int tm_wday;        /* day of the week, range 0 to 6    */
  //   int tm_yday;        /* day in the year, range 0 to 365  */
  //   int tm_isdst;       /* daylight saving time             */
  // };


#include <iostream>
#include <ctime>
#include <string>

using namespace std;

// prototype(s)
const string currentDateTime();

int main(){

  time_t t = time(0);

  tm* now = localtime(&t);

  cout << (now->tm_year+1900)  << '-'
        << (now->tm_mon+1) << '-'
        << (now->tm_mday) << ' ' 
        << (now->tm_hour) << ':'
        << (now->tm_min) << ':'
        << (now->tm_sec) << endl;

  cout << currentDateTime << endl;

  // another method
  time_t current_time;
  char *c_time_string;

  current_time = time(NULL);
  c_time_string = ctime(&current_time);

  cout << c_time_string << endl;

  return 0;
}

// Get current date/time, format is YYYY-MM-DD.HH:mm:ss
const string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    // Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
    // for more information about date/time format
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

    return buf;
}



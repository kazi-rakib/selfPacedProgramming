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

using namespace std;

int main(){

  time_t t = time(0);

  tm* now = localtime(&t);

  cout << (now->tm_year+1900)  << '-'
        << (now->tm_mon+1) << '-'
        << (now->tm_mday) << ' ' 
        << (now->tm_hour) << ':'
        << (now->tm_min) << ':'
        << (now->tm_sec) << endl;

  return 0;
}
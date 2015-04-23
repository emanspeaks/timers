#include <iostream>
#include <chrono>
#include "eventList.h"
#include "epoch.h"
#include "sequence.h"


using namespace std;
using namespace std::chrono;

int main()
{
  cout << "Hello world!" << endl;

  //epoch x("obj 34443",2015,98,4,0,0);
  //epoch y;

  string fn = "pdam.txt";
  //x.anchorFile(fn);
  //epoch z(y,fn);
  //z.setEpoch(2015,99,4,0,0);

  eventList l(fn);
  //l.addEvent(&x);
  //l.addEvent(&z);
  //l.addEvent(&s);
  //l.addEvent(&ss);
  /*
  l.printList();
  l.deleteitem3();
  l.printList();
  */

  system_clock::time_point t2, t1 = system_clock::now();
  while (1)
  {
    t2 = t1;
    for (int i = 0; i < 50; i++ ) cout << endl;
    l.printListCountdown();
    do t1 = system_clock::now(); while ((t1-t2)<seconds(1));
  }

  cout << endl << "hit enter ";
  cin.ignore();
  return 0;
}

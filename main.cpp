#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include "header.h"

using namespace std;
int main() {


  vector<roll> rollVec;

    srand(time(NULL));
                 double pileL;
                 double pileR;
                 double pileH;
for (int i; 10000000 > i; i++)
{
    rollVec.push_back(roll::forRoll);
                  if (rollVec.at(i).rollInt <=2) {pileH++;}
                  if (rollVec.at(i).rollInt > 2 && rollVec.at(i).rollInt <=50) {pileL++;}
                  else {pileR++;}

}
cout << pileH;
cin >> pileH;

    return 0;
}



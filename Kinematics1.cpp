using namespace std;

#include <TROOT.h>


int main()
{
  gROOT->ProcessLine(".L Class_results1.C");
  gROOT->ProcessLine(".L Script1.cpp");
  gROOT->ProcessLine("main1()");

  return 0;
}

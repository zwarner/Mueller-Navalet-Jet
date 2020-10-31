using namespace std;

#include <TROOT.h>


int main()
{
  gROOT->ProcessLine(".L Class_pPb2016.C");
  gROOT->ProcessLine(".L Script100.cpp");
  gROOT->ProcessLine("main1()");

  return 0;
}

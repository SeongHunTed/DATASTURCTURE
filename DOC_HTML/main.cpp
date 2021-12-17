#include "HTMLWriter.h"
#include <iostream>
using namespace std;

int main()
{   

    HTMLWriter hw("test.html", "This is HTMLWiter content.");
    DocWriter *pdw = &hw;
    pdw->Write();

    return 0;
}
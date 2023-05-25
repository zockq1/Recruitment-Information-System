#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "Apply.h"

using namespace std;

class ApplyUI {
private:
	Apply *control;
public:
	ApplyUI(Apply *control);
	void apply(ifstream *fin, ofstream *fout);
};
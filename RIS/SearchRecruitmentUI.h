#pragma once
#include <fstream>
#include "SearchRecruitment.h"
#include "SearchRecruitmentUI.h"

SearchRecruitmentUI::SearchRecruitmentUI(SearchRecruitment* control)
{
	this->control = control;
}

void SearchRecruitmentUI::search(ifstream* fin, ofstream* fout)
{
	string companyName;
	*fin >> companyName;
	string output = this->control->search(companyName);

	*fout << "4.1 ä�� ���� �˻�" << endl;
	*fout << output << endl;

	return;
}
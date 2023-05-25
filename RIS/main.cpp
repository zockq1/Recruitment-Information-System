#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include "./Authentication/SignUp.h"
#include "./Authentication/SignUpUI.h"
#include "./Authentication/SignOut.h"
#include "./Authentication/SignOutUI.h"
#include "./Authentication/Login.h"
#include "./Authentication/LoginUI.h"
#include "./Authentication/LogOut.h"
#include "./Authentication/LogOutUI.h"
#include "./Recruitment/AddRecruitment.h"
#include "./Recruitment/AddRecruitmentUI.h"
#include "./Recruitment/RecruitmentInformation.h"
#include "./Recruitment/RecruitmentInformationUI.h"
#include "./Recruitment/SearchRecruitment.h"
#include "./Recruitment/SearchRecruitmentUI.h"
#include "./Application/Apply.h"
#include "./Application/ApplyUI.h"
#include "./Application/ApplicationInformationList.h"
#include "./Application/ApplicationInformationListUI.h"



using namespace std;

void doTask();
void program_exit();

int main()
{

  doTask();

  return 0;
}

void doTask()
{
  char charMenuLevel1, blank, charMenuLevel2;
  int menuLevel1, menuLevel2;
  int isProgramExit = 0;
  string str;

  locale::global(locale("Korean"));
  ifstream fin("input.txt");
  ofstream fout("output.txt");

  while (!isProgramExit)
  {
    fin >> menuLevel1 >> menuLevel2;
    switch (menuLevel1)
    {
    // 1. 회원 가입, 탈퇴
    case 1:
    {
      switch (menuLevel2)
      {
      // 1.1. 회원가입
      case 1:
      {
        int userType;
        fin >> userType;
        SignUp *control = new SignUp();
        SignUpUI *boundary = new SignUpUI(control);
        if(userType == 1) { 
          boundary->signUpNormalUser(&fin, &fout);
        } else {
          boundary->signUpCompanyUser(&fin, &fout);
        }
        break;
      }
      // 1.2. 회원탈퇴
      case 2:
      {
        SignOut *control = new SignOut();
        SignOutUI *boundary = new SignOutUI(control);
        boundary->deleteAccount(&fout);
        break;
      }
      }
      break;
    }
    // 2. 회원 관리 - 로그인, 로그아웃
    case 2:
    {
      switch (menuLevel2)
      {
      // 2.1. 로그인
      case 1:
      {
        Login *control = new Login();
        LoginUI *boundary = new LoginUI(control);
        boundary->loginSubmit(&fin, &fout);
        break;
      }
      // 2.2. 로그아웃
      case 2:
      {
        LogOut *control = new LogOut();
        LogOutUI *boundary = new LogOutUI(control);
        boundary->logoutSubmit(&fout);
        break;
      }
      }
      break;
    }
    // 3. 채용 정보 관리
    case 3:
    {
      switch (menuLevel2)
      {
      // 3.1. 채용 정보 등록
      case 1:
      {
        AddRecruitment *control = new AddRecruitment();
        AddRecruitmentUI *boundary = new AddRecruitmentUI(control);
        boundary->addNewRecruitment(&fin, &fout);
        break;
      }
      // 3.2. 등록된 채용 정보 조회
      case 2:
      {
        RecruitmentInformation *control = new RecruitmentInformation();
        RecruitmentInformationUI *boundary = new RecruitmentInformationUI(control);
        boundary->showRecruitmentList(&fout);
        break;
      }
      }
      break;
    }
    // 4. 지원
    case 4:
    {
      switch (menuLevel2)
      {
      // 4.1. 채용 정보 검색
      case 1:
      {
        SearchRecruitment *control = new SearchRecruitment();
        SearchRecruitmentUI *boundary = new SearchRecruitmentUI(control);
        boundary->search(&fin, &fout);
        break;
      }
      // 4.2. 채용 지원
      case 2:
      {
        Apply *control = new Apply();
        ApplyUI *boundary = new ApplyUI(control);
        boundary->apply(&fin, &fout);
        break;
      }
      // 4.3. 지원 정보 조회
      case 3:
      {
        ApplicationInformationList *control = new ApplicationInformationList();
        ApplicationInformationListUI *boundary = new ApplicationInformationListUI(control);
        boundary->showApplicationList(&fout);
        break;
      }
      }
      break;
    }
    // 6. 종료
    case 6:
    {
      switch (menuLevel2)
      {
      // 6.1. 종료
      case 1:
      {
        program_exit();
        isProgramExit = 1;
        break;
      }
      }
      break;
    }
    }
  }

  return;
}

void program_exit()
{
  ofstream fout("output.txt", ios::app);
  fout << "6.1. 종료\n";
  fout.close();

  return;
}
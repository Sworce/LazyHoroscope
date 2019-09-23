//Authors: Tommy Luo
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string fname = "";
  string lname = "";
  int lucky;

  //get user input
  cout << "What is your first name?" << endl;
  cin >> fname;
  cout << "What is your last name?" << endl;
  cin >> lname;
 
  //tell fortune
  cout << "Welcome, " << fname.at(0) << "." << lname.at(0) << "., " 
  << "here is your fortune..." << endl;

  lucky = fname.length();

  cout << "your lucky number is " << lucky << endl;

  return 0;
}

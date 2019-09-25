//Authors: Tommy Luo
#include<iostream>
#include<string>
#include <cctype>
using namespace std;

int main()
{
  //declare variables
  string fname = "";
  string lname = "";
  int lucky;
  int index;

  //get user input
  cout << "What is your first name?" << endl;
  cin >> fname;
  cout << "What is your last name?" << endl;
  cin >> lname;
 
  //tell fortune
  cout << "Welcome, " << fname.at(0) << "." << lname.at(0) << "., " 
  << "here is your fortune..." << endl;

  lucky = fname.length();
  index = lname.length() - 1;


  cout << "your lucky number is " << lucky << endl;

   fname[0] = tolower(fname.at(0));
   lname[index] = tolower(lname.at(index));


  if(fname.at(0) == 'a' || fname.at(0) == 'e' || fname.at(0) == 'i'
     || fname.at(0) == 'o' || fname.at(0) == 'u') {
        cout << "you are destined to be famous!" << endl;
     }
  else {
    cout << "you should keep a low profile." << endl;
  }
  
  if(lname.at(index) == 'a' || lname.at(index) == 'e' || lname.at(index) == 'i'
                  || lname.at(index) == 'o' || lname.at(index) == 'u') {
        cout << "you have already met your true love." << endl;
     }

    cout << "have a good day!" << endl;  
    
  return 0;
}

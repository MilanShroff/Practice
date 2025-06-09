#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool palindrome (int n){
	string str = to_string(n);
	string rev = str;

	reverse (rev.begin(),rev.end());
	
	return str == rev;
}

int main(){
int input;
	cout << "Type integer" <<endl;

cin >> input;

if (palindrome(input))
        cout << "true" << endl;
    else
        cout << "false" << endl;
}
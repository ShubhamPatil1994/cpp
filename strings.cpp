#include <bits/stdc++.h>
#include <iostream>
#include <stdint.h>		//for unint64_t
#include <string.h>

using namespace std;


void anagram(){
	/*string s = [abacbc], one way it can be arranged into a palindrome is aabbcc.
	see if a string can be arranged into palindrome
	*/
	int flag = 0;
	uint64_t mask = 0x0;
	string s = "aassdcc";
	for (int i = 0; i < s.length(); i++){
		/* Below string subtracts 'a' from every work and returns the distance of the point from a in integers
		*/
		// std::cout << s[i] - 'a' << std::endl;
		// // left shift the bits
		// std::cout << (1 << s[i] - 'a') << std::endl;
		// Do XOR to remove already existing characters or add new ones
		mask = mask ^ (1 << (s[i] - 'a'));
	}
	if ((!mask) || (((mask & (mask - 1)) == 0)))
		flag = 1;
	if (flag == 0)
		cout << "No" << std::endl;
	else
		cout << "Yes" << std::endl;
}

void string_xor(){
	char s1[] = "aa";
}

void only_digits(){
	/* code to check if the string has only digits
	https://www.quora.com/How-do-Iwrite-a-C++-program-which-checks-that-the-given-string-has-only-letters-and-no-numbers-digits-or-special-symbols
	*/
	string s1 = "1234";
	int i = 0, flag = 0;

}

int main(){
	//anagram();		//Check if string can be rearranged to palindrome
	only_digits();
	return 0;
}
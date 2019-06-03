#include <bits/stdc++.h>
#include <iostream>
#include <stdint.h>		//for unint64_t
#include <string.h>
#include <string>


using namespace std;


/* avoid pointers in string operations. 
see https://www.geeksforgeeks.org/basic_string-c_str-function-in-c-stl/ 
for more details 
*/

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

void only_chars(){
	/* code to check if the string has only alphabets
	https://www.quora.com/How-do-Iwrite-a-C++-program-which-checks-that-the-given-string-has-only-letters-and-no-numbers-digits-or-special-symbols
	*/

	string s1 = "contains numbers and special letters";
	
	// remove spaces from the string
	s1.erase(std::remove_if(s1.begin(), s1.end(), ::isspace), s1.end());	

	int i = 0, flag = 0;
	while(s1[i] !='\0'){
		if (!((s1[i] <= 'A' && s1[i] >= 'Z') || (s1[i] >= 'a' && s1[i] <= 'z'))){
			flag = 1;
		}
		i++;
	}
	if (flag == 1)
		cout << "contains numbers and special letters" << std::endl;
	else
		cout << "contains only characters" << std::endl;
}

void Camelcase(){
	/*
	code to find the number of letters in Camel case:
	eg: oneCamelTwo has 3 words in it
	*/
	string str = "oneCamelTwo";
	int count = 1, i = 0;
	while(str[i] != '\0'){
		if ((str[i] >= 'A' && str[i] <= 'Z'))
			count ++;
		i++;
	}
	cout << count << std::endl;
}


// This function needs to be worked on
void convert_str_to_int(){
	std::string str = "12345";
	// int myint = stoi(str);
}


void occurance(){
	// check if the string has occured in the given sample
	string s = "hereiamstackerrank";	// test string
	string str = "hackerrank";		// original string
    if (s.length() < str.length())
        cout << "NO" << std::endl;
    int j = 0;
    for (int i = 0; i < s.length(); i++) {
        if ((j < str.length()) && (s[i] == str[j]))
            j++;
        }
    if (j==str.length())
    	cout << "YES" << std::endl;
    else
        cout << "NO" << std::endl;
    //return (j==str.length())?"YES":"NO";
}

int main(){
	// anagram();		//Check if string can be rearranged to palindrome
	// only_chars();		//Check if the string contains only digits
	// Camelcase();		//Check the number of words in Camelcase
	// convert_str_to_int();	//Convert string int to int 
	occurance();		//Check if one string occurs in another string
	return 0;
}
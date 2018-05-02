#include <iostream>
#include <cctype>
using namespace std;

int countvowel(string word);

int main(){
	string word;
	cout << "Enter a word : ";
	getline(cin, word);
	cout << "The number of vowels is : " <<  countvowel(word) << endl;
	return 0;
}

int countvowel(string word){
	int i, count=0;
	for(i=0; i < word.length(); i++){
		if(tolower(word[i])=='a' || tolower(word[i])=='e' || tolower(word[i])=='i' || tolower(word[i])=='o' || tolower(word[i])=='u'){
				 count++;
		}
  }
	return count;
}

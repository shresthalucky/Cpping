#include <iostream>
using namespace std;

int countvowel(char word[20]);

int main(){
	char word[20];
	cout << "Enter a word : ";
	cin >> word;
	cout << "The number of vowels is : " <<  countvowel(word) << endl;
	return 0;
}

int countvowel(char word[20]){
	int i, count=0;
	cout << "From function : " << word << endl;
	for(i=0; word[i]!='\0'; i++){
			if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u'){
				 count++;
			}
	}
	return count;
}
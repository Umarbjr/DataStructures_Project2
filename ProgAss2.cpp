#include<string>
#include<vector>
#include<fstream>
#include<iostream>
#include<algorithm>
#include "binaryTree.h"
#include "binaryNode.h"
#include "timer.h"
using namespace std;

vector<string> readDictionary() {
    ifstream infile;
	vector<string> words;
	string word;
	infile.open("dict.txt");
    long int count = 0;
	if (infile.is_open()) {
		infile >> word;
		while (!infile.eof()) {
			words.push_back(word);
            count++;
			infile >> word;
		}
	}
	infile.close();
	cout << "Number of words in the dictionary is " << count << "\n";

    return words;
}

void CleanWord(string &word){
    int length = word.size();
    char temp;
    for(int i=0; i<length; i++){
        temp = word[i];
        if(isalpha(temp)){
            if(isupper(temp)){
                word[i] = tolower(temp);
            }
        }
        else if((isdigit(temp)) ||(temp == '\'') ){

        }
        else{
            word = word.erase(i, 1);
            length = word.size();
            i--;
        }

    }

}

int main(){
    int skip = 0;
    long  double correctSpell = 0;
	long  double wrongSpell = 0;
	double foundAvg = 0;
	double notFoundAvg = 0;
    string word;
	vector<string> dictWords = readDictionary();
	binaryTree<string> dictionary;
    Timer timer;
    ofstream outfile;
	outfile.open("misspelled.txt");

    for(int i=0; i < dictWords.size(); i++){
        CleanWord(dictWords[i]);
        dictionary.insert(dictWords[i]);
    }
	cout << "Dictionary Size: " << dictionary.getNumberofNodes() << "\n";

    string bookWords;
    ifstream infile;
	infile.open("book.txt");

	if (infile.is_open()) {
		timer.Start();
		infile >> bookWords;
		while (!infile.eof()){
			CleanWord(bookWords);
			if(bookWords.compare("") == 0){ 	}
			else  if (!isalpha(bookWords[0])){
				skip++;
			}
		    else if (dictionary.find(bookWords)){
				correctSpell++;
			}
			else{
				outfile << bookWords << "\n";
				wrongSpell++;
			}
			infile >> bookWords;
		}
		timer.Stop();
	}
	outfile.close();
    infile.close();

	cout << "\n\n" << wrongSpell << "\n";
	cout << correctSpell << "\n";
	cout << dictionary.foundCompare << "\n";
	cout << dictionary.notFoundCompare << "\n\n";
	

    foundAvg = (dictionary.foundCompare/correctSpell);
	notFoundAvg = (dictionary.notFoundCompare/wrongSpell);

	cout<< "Done Checking and these are the results\n";
	cout<< "Finished in time: " << timer.Time() << "\n";
	cout << "There are " << correctSpell << " words found in the dictionary\n";
	cout<< dictionary.foundCompare << " compares. Average: " << foundAvg << "\n";
	cout << "There are " << wrongSpell << " words NOT found in the dictionary\n";
	cout << dictionary.notFoundCompare << " compares. Average: " << notFoundAvg << "\n";
	cout << "There are " << skip << " words not checked." << "\n";

    return 0;
}


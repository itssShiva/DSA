//Count Vowels,consonants and spaces in a string
#include<iostream>
#include<string>
using namespace std;
int main(){
    
    string str="Take you Forward";
    int countVowels=0,countConsonants=0,countSpaces=0;
    int n=str.length();
    for(int i=0;i<n;i++){
       str[i]=tolower(str[i]);
    }
    for(int i=0;i<n;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            countVowels++;
        }
        else if(str[i]>='a'&&str[i]<='z'){
            countConsonants++;
        }
        else if(str[i]==' '){
            countSpaces++;
        }
    }

    cout<<"Count of Vowels are: "<<countVowels<<endl;
    cout<<"Count of Consonants are: "<<countConsonants<<endl;
    cout<<"Count of Spaces are: "<<countSpaces<<endl;

}
// Write a program to find the Total Vowel and Total Consonant in a word or Sentences.

#include<iostream>
using namespace std;
int main(){
    char a[100];
    int vowel = 0;
    int consonant = 0;
    int extra = 0;

    cout<<"Enter any Word or Sentences: ";
    gets(a);

    int i = 0;
    while(a[i] != '\0'){
        if(a[i] >= 'a' && a[i] <= 'z'  || a[i] >= 'A' && a[i] <= 'Z'){

            if(a[i] == 'a' || a[i] == 'A' || a[i] == 'e' || a[i] == 'E' || a[i] == 'i' || a[i] == 'I' || a[i] == 'o' || a[i] == 'O' || a[i] == 'u' || a[i] == 'U'){
                vowel = vowel + 1;
            }
            else{
                consonant = consonant + 1;
            }
        }
        else
        extra = extra + 1;
                
    i++;
    }
        cout<<"Total Vowel = "<<vowel<<endl;
        cout<<"Total Consonant = "<<consonant<<endl;
        cout<<"Some Extra Symbol = "<<extra<<endl;

    return 0;
}
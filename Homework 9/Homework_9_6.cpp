#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int * letterFrequency(char s[]);    //the letter freaquncy function which will return a array

int main()

{

  int *freq_letters;

  char *s = new char[100];           //dynamically allocate the memory for pointer s

  freq_letters = new int[26];        //to store the freaquncy of 26 english letters

  //To read the input string in order to find the frequency of each letter

  cout << "Enter a string: ";

  cin.getline(s, ' ');

  //call the function to find the occurrence of each alphabet

  freq_letters = letterFrequency(s);

  //Display the count

  cout << "Letter Frequency " << endl;

  for (int i = 0; i < 26; i++)

  {

      //Constriant to check if the letter appeared at least once in the string and so printing the frequency of its occurence

      if (freq_letters[i] != 0)

      cout << " " << static_cast<char>(i + 'a') << " " << freq_letters[i] << endl;

  }

  return 0;

}

//Define the function to find occurrence of each letter in the input string

int * letterFrequency(char s[])

{

  int *occurrence_array;

//to store the output of occurrences for each alphabet

  occurrence_array = new int[26];   //dynamically allocate the memory to an array with 26 elements 

// to store the count of occurrence for each letter temporarily

  int letter_count;

  // for loop to check the occurrence for all 26 alphabets

 

  for (int i = 0; i < 26; i++)

  {

      letter_count = 0;

      for (int j = 0; j < strlen(s); j++)

      {

          /*comparing the ascii values of each alphabet with every character from the string by converting it to lower case i.e. case insensitive*/

          if (int('a') + i == int(tolower(s[j])))    //tolower for chaek the lowercase letters 

              letter_count++;    //increase the letter count 

      }

      occurrence_array[i] = letter_count;//To store the count calculated for each alphabet

  }

  return occurrence_array;       //returning the array

}



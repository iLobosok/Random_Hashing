#include <stdio.h>
#include "string"
#include "stdlib.h"
#include "stdafx.h"
#include "iostream"
#include "io.h"
#include "fstream"
#include <cstringt.h>
#include <cstring>
#include "xstring"
#include <ChString.h>

int main() {
  // the first write full message
  String fulltext;
  String word1;
  int calc = 0;
  int posititons[];
  cout<<"Write your message = ";
  cin >> fulltext;
  cout<<"\n";
  int find_space_in_message;
  find_space_in_message = fulltext.length();
  for (int i=0;i<find_space_in_message;i++) {
    if (fulltext[i] == ' ') {
      // space position - we created first word to hashing
      calc++;
      position = i;     // number of spaces
      cout<<" = "<<position;
    }
  }


    return 0;
}

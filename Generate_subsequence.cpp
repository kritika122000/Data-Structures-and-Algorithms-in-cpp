//using recursion
#include <iostream>
using namespace std;

void generate_subsequence(char* in , char* out , int i , int j){
      // if the input string is empty then the output will be also empty
      //base case
      if(in[i] == '\0'){
          out[j] = '\0';
          cout<< out << endl;
          return;
      }
      out[j] = in[i];
      //excluding the char
      //output string is including the first char of the input string 
      generate_subsequence(in , out, i+1, j+1);

      //including the char 
      //output string is excluding the first char from the input string
      generate_subsequence(in, out, i+1, j);

}
int main() {

    char input[] = "abc";
    char output[10] ;
    generate_subsequence(input, output, 0, 0);
}

// output 
//abc
//ab
//ac
//a
//bc
//b
//c
//

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char ** parse_args(char * s1){
  char ** ret = (char **) calloc (6, sizeof(char*));
  int i = 0;
  for (;i<5;i++){
    *(ret + i) = strsep(&s1," "); 
  }
  return ret;
}
int main(){
  //char * line = "ls -a -l";
  char line[100] = "ls -a -l";
  char * s1 = line;
  char ** test = parse_args(s1);
  execvp(test[0], test);
 
	
}

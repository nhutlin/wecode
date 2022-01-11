#include <iostream>
#include <string.h>
#include <ctype.h>
#define MAXN 254
int myStrlen(char s[]) {
	int dem = 0;
	int i = 0;
	while(s[i] != '\0'){
		dem += 1;
		i++;
	}
	return dem;
}
void NormalizeString(char s[]){
	s[0] = toupper(s[0]);
	int len=myStrlen(s);
  for (int i=1;i<len;i++)//ki tu trong chuoi
  {
    if (s[i]==' ') 
    {
      i++;
      s[i]=toupper(s[i]);
    }
    else s[i]=tolower(s[i]);
 }
}

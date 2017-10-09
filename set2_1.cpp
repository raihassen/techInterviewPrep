
/*
#include <string.h>
int main(int argc, char *argv[])
{
    char    abc[27];
    char    *ptr = abc;
    strcpy(abc, "abcdefgxyz");
     * What are the types and values of expressions:
     *
  
     * 1. abc
     * 2. *abc
     * 3. abc[2]
     * 4. &abc[3] //&abc[3] = abc + 3*sizeof(char)
     * 5. abc+4
     * 6. *(abc+5) + 20000  //h  long long x = int * 1LL * int
     * 7. abc[10] //'\0'
     * 8. abc[12] //memset ()
     * 9. &ptr //char**
     return 0;
}
*/
#include <string.h>
#include <iostream>
using namespace std;
void unit_test(string assumed, string real){
	cout<<"Assumption vs real"<<assumed<<" "<<real;
}
int main(int argc, char *argv[])
{
    char    abc[27];
    char    *ptr = abc;
    strcpy(abc, "abcdefgxyz");
	cout<<"abc: my assumption abcdefgxyz and real one is "<<abc<<endl;
	cout<<"*abc my assumption a and real on is "<<*abc<<endl;
	cout<<"abc[2] my assumption c and real on is "<< abc[2]<<endl;
	cout<<"&abc[3] my assumption some adres in form of 0XFFFF and real one is "<<&abc[3]<<endl;
	cout<<"abc+4 my assumption is e and real one is "<<abc+4<<endl;
	cout<<"*(abc+5) + 2000 my assumption is char f plus 2000 it will be 2076 kind of number order of f"<<*(abc+5) +2000<<endl;
//	unit_test("a", *abc); 
    /*
     * What are the types and values of expressions:
     *
  
     * 1. abc
     * 2. *abc
     * 3. abc[2]
     * 4. &abc[3] //&abc[3] = abc + 3*sizeof(char)
     * 5. abc+4
     * 6. *(abc+5) + 20000  //h  long long x = int * 1LL * int
     * 7. abc[10] //'\0'
     * 8. abc[12] //memset ()
     * 9. &ptr //char**
     */
     return 0;
}

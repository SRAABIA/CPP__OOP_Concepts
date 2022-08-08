#include <iostream> 
#include <fstream> 
using namespace std;
int main(){
     char ch;
    fstream openFile;
    openFile.open ("data.txt",ios::in);
    if(!openFile.is_open()){
       cout<<"\nSowy cant open da phile";
    }
    else{
         while( openFile.get(ch) ){
            cout <<endl<< ch;
        }
    }

    openFile.close(); // close the file 
    return 0;
}

   


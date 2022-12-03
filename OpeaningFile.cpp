#include <iostream>
#include <fstream>
using namespace std;
   
int main(){
         
       fstream f;
      //  f.open("test.txt",ios::out);
      //  if(!f)
      //   cout << "Error in creating file\n";
      //  else
      //    cout << "File created sucessfuly";
      //       f << "\nJay shree ram";
      //       f << "\nJay shree ram dusri bar";
      //       f << "\nJay shree ram tisri bar";
      //       cout << "\nwriten data sucess fully";
      
      f.open("test.txt",ios::in);
      if(!f){
        cout << "\nerror in opening file doesn'nt exits";
        
      }
      else{  
            char x;
                while(1){
                    f>>x;
                    if(f.eof())
                        break;
                  cout << x;
                }
                f.close();
      }
     return 0;
}
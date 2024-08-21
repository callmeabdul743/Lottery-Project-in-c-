#include <iostream>
#include <stdlib.h>
using namespace std;
main(){
    int person[20];
    int num;
    //declare the randon number to the 
    for(int a=0; a<19; a++){
        num=rand()%100+1;
        //remove duplicy
        for(int j=0; j<=a; j++){
            if(num==person[a]){
                j=0;
                num=rand()%100+1;
            }
        }
        person[a]=num;
    }

    
    //print the array
    for(int i=0; i<20; i++){
        cout<<"The person are: "<<person[i]<<"   "<<i<<endl;
    }
}
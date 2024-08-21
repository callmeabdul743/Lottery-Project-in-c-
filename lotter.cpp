#include <iostream>
#include <stdlib.h>
using namespace std;
main(){
    int person[20];
    int num;

    //declare the randon number to the 
    for(int a=0; a<20; a++){
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

    //arranging the array
    int temp;
    for(int a=0; a<20; a++){
        for(int j=a+1; j<20; j++){
            if(person[a]>person[j]){
                temp=person[a];
                person[a]=person[j];
                person[j]= temp;
            }
        }
    }

    //print the array
    for(int i=0; i<20; i++){
        cout<<"Congratulation to the lottery NO: "<<person[i]<<", you win the lottery"<<endl;
    }
}
#include<iostream>

using namespace std;

int main(){

   //initialization

  int arr1[10] = {2,4,6,1,7,9,0,3,5,8};

  int temp;

   int size_arr;

   //nested for loop

  for(int i=0;i<size_arr-1;i++){

   for(int j=0;j<size_arr-i-1;j++){

       if(arr1[j]>arr1[j+1]){ //compare

               //swapping

           temp = arr1[j];

           arr1[j]=arr1[j+1];

           arr1[j+1]=temp;

       }

   }

  }

  //display the each element

  for(int i=0;i<10;i++){

   cout<<arr1[i]<<" ";

  }

    return 0;

}

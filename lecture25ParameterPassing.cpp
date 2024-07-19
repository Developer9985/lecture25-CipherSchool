#include<iostream>
using namespace std;

int minMax(int *a, int *min, int *max){

        int small = 9999999 , large = -9999999;

        for(int i=0; i < 5; i++){

            if(a[i] > large){
                large = a[i];
            }

            if(a[i] < small){
                small = a[i];
            }

        }

        // cout<<small<<endl;
        // cout<<large<<endl;

        *min = small;
        *max = large;





}

int main(){

    int a[5] = {1,2,3,4,5};

    int min,max;

    minMax(a,&min,&max);

    cout << "The minimum number is : " << min << endl;
    cout << "The maximum number is : " << max << endl;

    return 0;

}
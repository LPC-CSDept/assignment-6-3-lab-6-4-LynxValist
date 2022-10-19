#include <iostream>
using namespace std;

int getSum(int);

int main(){
    int N; //numbers in list
    int sum; 

    do {
        cout<< "How many numbers?" << endl;
        cin>>N;
        if (N != -1){
            sum = getSum(N);
            cout<<"The sum is " << sum << endl;
            return 0;
        }

    } while (N!= -1);

}
int getSum(int N){
    int max, min, sum, num;
    for(int i = 0; i < N; i ++) {
        cout << "Enter number " <<i+1<< ":"<<endl;
        cin>>num;
        if(i == 0){
            max = num;
            min = num;
            sum = 0;
        }
        sum += num;
        if(min>num){
            min = num;
        }
        if(max < num){
            max = num;
        }
    }
    sum-=(min+max);
    return sum;
}
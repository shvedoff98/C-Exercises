#include <iostream>
#include <cmath>

using namespace std;

int length = 0;

void narcissistic( int x)
{    
    do {
        x % 10;
        length++;
    } while(x/=10);
    cout<<"The length of the number is : "<<length<<endl;

}

void createArray(int *array, int x, int length)
{
    for (int i =0;i<length; i++)
    {
        array[i] = x % 10;
        x /= 10;
    }
}

void printArray(int *array, int length)
{
    for (size_t i =0; i<length; i++)
    {
        cout <<array[i]<<" ";
    }
    cout<<"\n";
}

bool checkIftrue(int *array,int x)
{
    double sum = 0;
    bool narcis = false;
    for(int i=0;i<length;i++)
    {
        double p = pow(array[i],length);
        sum +=p;
    }
    cout<<"The sum of all number's digits is : "<<sum<<endl;
    if(sum>=1 && sum <10)
      narcis=true;
    if(sum==x){
        narcis=true;
        cout<<"This number is narcissistic!"<<"\n"<<"Congratulations!"<<endl;
    } else {
        narcis=false;
        cout<<"This number is not narcissistic"<<endl;
    }
    
    return narcis;
}



int main()
{
    int number;
    int *arr = new int[3];
    cout<<"Enter the number to check if it narcissistic: ";cin>>number;
    narcissistic(number);
    createArray(arr,number,length);
    //printArray(arr, length);
    checkIftrue(arr,number);



    
    return 0;
}



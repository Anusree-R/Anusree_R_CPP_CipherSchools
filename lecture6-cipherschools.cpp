#include<iostream>
using namespace std;
int main(){
    
    /*
	float a,b;
    cout<<"give 2 floating point numbers as input"<<endl;
    cin>>a,b;
    if(a>0.01 && b>a){
    	cout<<"the condition in if statement is correct";
	}
	else{
		cout<<"the condition is false";
	}
	*/
	
    //  THIS IS IF ELSE STATEMENT

    /*
	int a,b,c,d;
    cout<<"give three integers as input : a,b,c"<<endl;
    cin>>a,b,c,d;

    if(a>b && c>d){
        cout<<"haha";
    }
    else if(a>b && c<d){
        cout<<"hehe";
    }
    else if(a<b && c>d){
        cout<<"huhu";
    }
    else{
    	cout<<"nothing";
	}
    cout<<endl;
    */
    //Swtich case statement

    int z;
    cout<<"enter integer z"<<endl;
    cin>>z;
    switch (z)

    {
    case 1:
    cout<<"the value of z is 1"<<endl;
    break;
    case 2:
    cout<<"the value of z is 2"<<endl;
    break;
    case 3:
    cout<<"the value of z is 3"<<endl;
    break;
    default:
    cout<<"default will always be printed";
    break;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int nums[5];
    cout<<"please enter 5 intergers: \n";
    cin>>nums[0];
    cin>>nums[1];
    cin>>nums[2];
    cin>>nums[3];
    cin>>nums[4];
    cout<<"the 5 values intergers entered are: "<<endl;
    cout<<nums[0]<<endl;
    cout<<nums[1]<<endl;
    cout<<nums[2]<<endl;
    cout<<nums[3]<<endl;
    cout<<nums[4]<<endl;
    return 0;
}



//User to enter
#include <iostream>
using namespace std;

int main() {
    //array declaration
    int nums[5];
    // input array values
    cout<<"please enter 5 interger values "<<endl;
    for(int i=0; i<5 ; i++){
        cin>>nums[i];
    }
    cout<<"the array values you entered are; "<<endl;
    for(int i=0; i<5 ; i++){
    cout<<nums[i]<<endl;
    }
    return 0;
}

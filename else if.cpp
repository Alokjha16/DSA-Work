#include<iostream>
using namespace std;

 int main() {

int marks;
cout<<"enter marks:";
cin>>marks;

if (marks>=90){
cout<< "YOU ARE A TOPPER";

} else if (marks>=80 && marks<90){
    cout<<" GRADE B";

} else if ( marks >=70 && marks<80){
    cout<<"GRADE C";

} else {
    cout<<"YOU LOOSER";
}
return 0;

 }


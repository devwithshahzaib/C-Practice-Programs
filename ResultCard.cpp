#include<iostream>
#include<string>
using namespace std;

int main()
{
    float sub1,sub2,sub3,sub4,sub5;
    float average,percentage,sum;
    string name,s1,s2,s3,s4,s5;
    cout<<"Enter Student Name: "<<endl;
    cin>>name;
    cout<<"Please enter the 1st Subject name: "<<endl;
    cin>>s1;
    cout<<"Please enter obtained marks out of 100: "<<endl;
    cin>>sub1;
    cout<<"Please enter the 2nd Subject name: "<<endl;
    cin>>s2;
    cout<<"Please enter obtained marks out of 100: "<<endl;
    cin>>sub2;
    cout<<"Please enter the 3rd Subject name: "<<endl;
    cin>>s3;
    cout<<"Please enter obtained marks out of 100: "<<endl;
    cin>>sub3;
    cout<<"Please enter the 4th Subject name: "<<endl;
    cin>>s4;
    cout<<"Please enter obtained marks out of 100: "<<endl;
    cin>>sub4;
    cout<<"Please enter the 5th Subject name: "<<endl;
    cin>>s5;
    cout<<"Please enter obtained marks out of 100: "<<endl;
    cin>>sub5;
    
    sum=sub1+sub2+sub3+sub4+sub5;
    average=sum/5;
    percentage = ((sum/500)*100);
    
    
    cout<<"*****************************************"<<endl;
    cout<<"\t   <RESULT CARD>"<<endl;
    cout<<"****************************************"<<endl<<endl;
    cout<<"Student Name: "<<name<<endl;
    cout<<"Subject\t Obtained marks\t Total marks\t"<<endl;
    cout<<s1<<"\t "<<sub1<<"\t\t 100"<<endl;
    cout<<s2<<"\t "<<sub2<<"\t\t 100"<<endl;
    cout<<s3<<"\t "<<sub3<<"\t\t 100"<<endl;
    cout<<s4<<"\t "<<sub4<<"\t\t 100"<<endl;
    cout<<s5<<"\t "<<sub5<<"\t\t 100\n"<<endl;
    cout<<"Total Obtained Marks = "<<sum<<" Out of 500"<<endl;
    cout<<"Percentage = "<<percentage<<" % "<<endl;
    cout<<"Average Marks = "<<average<<endl;
    
    if(percentage>=90)
    cout<<"Congrats! You've got A+ GRADE"<<endl;
    else if(percentage>=80)
    cout<<"Congrats! You've got A GRADE"<<endl;
    else if(percentage>=70)
    cout<<"You've got B GRADE"<<endl;
    else if(percentage >=40)
    cout<<"You've got C GRADE"<<endl;
    else 
    cout<<"You've got F GRADE, Fail"<<endl;
 
    return 0;
}

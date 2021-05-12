 #include <iostream>  
using namespace std;  
void swap(int *x,int *y)
{
 int z;
 z=*x;
 *x=*y;
 *y=z;
}
void swap2(int x,int y)
{
 int z;
 z=x;
 x=y;
 y=z;
}
int main()  
{  
      int a,b;
      int option;
      do
      {
     cout<<endl;
     cout<<endl;
     cout<<endl;
     cout<<"                                        WELCOME:)Various Method to Swap Two Numbers"<<endl;
     cout<<endl;
     cout<<endl;
     cout<<endl;
        
     cout<<"                          How Do You Want To Swap Two Numbers? Select Option From 1 to 9. Select 0 to EXIT"<<endl;
     cout<<endl;
     cout<<endl;
     cout<<endl;
        
                                                     cout<<"1.Call By Reference"<<endl;
                                                     cout<<"2.Call By Value"<<endl;
                                                     cout<<"3.Using + and -"<<endl;
                                                     cout<<"4.Using * and /"<<endl;
                                                     cout<<"5.Using bitwise XOR operator ^"<<endl;
                                                     
     cout<<endl;
     cout<<endl;
     cout<<endl;
        
        cin>>option;
        switch(option)
        {
            case 1:
         cout<<"\tYou Have Choosen To Sawp Two Numbers Using Call By Reference"<<endl;
         cout<<"So....."<<endl;
         cout<<"Enter Two Diiferent Numbers To Swap Each Other"<<endl;
         cout<<"Enter First Number: "<<endl;
         cin>>a;
         cout<<"Enter Second Number: "<<endl;
         cin>>b;
         cout<<"Before swap a= "<<a<<" b= "<<b<<endl; 
         swap(&a,&b);
         cout<<"\nAfter Swapping Two Numbers: ";
         cout<<"After swap a= "<<a<<" b= "<<b<<endl;   
          cout<<endl;
          cout<<"     (:Internal Working:)   "<<endl;
           cout<<"           int z;"<<endl;
           cout<<"           z=*x;"<<endl;
           cout<<"           *x=*y;"<<endl;
           cout<<"           *y=z;"<<endl;

          cout<<endl;
          cout<<"<---------------------------------------------------------------------THE END---------------------------------------------------------------->"<<endl;       
         break;

          case 2:
         cout<<"\tYou Have Choosen To Sawp Two Numbers Using Call By Value"<<endl;
         cout<<"So....."<<endl;
         cout<<"Enter Two Diiferent Numbers To Swap Each Other"<<endl;
         cout<<"Enter First Number: "<<endl;
         cin>>a;
         cout<<"Enter Second Number: "<<endl;
         cin>>b;
         cout<<"Before swap a= "<<a<<" b= "<<b<<endl; 
         swap2(a,b);
         cout<<"\nAfter Swapping Two Numbers: ";
         cout<<"a= "<<a<<" b= "<<b<<endl; 
          cout<<endl;
           cout<<"     (:Internal Working:)   "<<endl;
          cout<<"             int z;"<<endl;
            cout<<"             z=x;"<<endl;
            cout<<"             x=y;"<<endl;
            cout<<"             y=z;"<<endl;
          cout<<endl;
          cout<<"\t \t \t<-------------------------------------------------------------THE END---------------------------------------------------------------->"<<endl;
         break;

          case 3:
         cout<<"\tYou Have Choosen To Sawp Two Numbers Using + And -"<<endl;
         cout<<"So....."<<endl;
         cout<<"Enter Two Diiferent Numbers To Swap Each Other"<<endl;
         cout<<"Enter First Number: "<<endl;
         cin>>a;
         cout<<"Enter Second Number: "<<endl;
         cin>>b;
         cout<<"Before swap a= "<<a<<" b= "<<b<<endl; 
          a = a + b;
         b = a - b;
         a = a - b;
         cout<<"\nAfter Swapping Two Numbers: ";
         cout<<"a= "<<a<<" b= "<<b<<endl; 
          cout<<endl;
           cout<<"     (:Internal Working:)   "<<endl;
         cout<< "      a = a + b;"<<endl;
          cout<< "     b = a - b;"<<endl;
          cout<< "     a = a - b;"<<endl;
          cout<<endl;
          cout<<"\t \t \t<-------------------------------------------------------------THE END---------------------------------------------------------------->"<<endl;
         break;
    
       case 4:
         cout<<"\tYou Have Choosen To Sawp Two Numbers Using + And -"<<endl;
         cout<<"So....."<<endl;
         cout<<"Enter Two Diiferent Numbers To Swap Each Other"<<endl;
         cout<<"Enter First Number: "<<endl;
         cin>>a;
         cout<<"Enter Second Number: "<<endl;
         cin>>b;
         cout<<"Before swap a= "<<a<<" b= "<<b<<endl; 
          a = a * b;
         b = a / b;
         a = a / b;
         cout<<"\nAfter Swapping Two Numbers: ";
         cout<<"a= "<<a<<" b= "<<b<<endl; 
          cout<<endl;
           cout<<"     (:Internal Working:)   "<<endl;
         cout<< "      a = a * b;"<<endl;
          cout<< "     b = a / b;"<<endl;
          cout<< "     a = a / b;"<<endl;
          cout<<endl;
          cout<<"\t \t \t<-------------------------------------------------------------THE END---------------------------------------------------------------->"<<endl;
         break;

          case 5:
         cout<<"\tYou Have Choosen To Sawp Two Numbers Using bitwise XOR ^ Operator"<<endl;
         cout<<"So....."<<endl;
         cout<<"Enter Two Diiferent Numbers To Swap Each Other"<<endl;
         cout<<"Enter First Number: "<<endl;
         cin>>a;
         cout<<"Enter Second Number: "<<endl;
         cin>>b;
         cout<<"Before swap a= "<<a<<" b= "<<b<<endl; 
          a ^= b;
         b ^= a ;
         a ^=  b;
         cout<<"\nAfter Swapping Two Numbers: ";
         cout<<"a= "<<a<<" b= "<<b<<endl; 
          cout<<endl;
           cout<<"     (:Internal Working:)   "<<endl;
         cout<< "      a ^= b;"<<endl;
          cout<< "     b ^= a;"<<endl;
          cout<< "     a ^= b;"<<endl;
          cout<<endl;
          cout<<"\t \t \t<-------------------------------------------------------------THE END---------------------------------------------------------------->"<<endl;
         break;
          }                                             
      } while (option!=0);       
return 0;  
}  

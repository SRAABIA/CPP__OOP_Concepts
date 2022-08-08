#include<iostream>
using namespace std;

int main()
{
    int days,x;
        cout<<"For how many employees you wish to make a report: ";
        cin>>x;
        cout<<endl<<"for how many days you wish to make a report: ";
        cin>>days;
    int prod[4][days][6]={0};
    int empid[4]={0};
    int prodid[6]={0};
    int sum[6]={0}; //SUM of each product 
    int sum1[4]={0}; // SUM of monthly products;
    int i,j,k;
        for(k=0;k<6;k++){
            cout<<endl<<"Enter Product("<<k+1<<") ID: ";
            cin>>prodid[k];
        }
        for( i=0;i<x;i++){  //employee count
        cout<<endl<<endl<<"Employee("<<i+1<<") enter your id: ";
        cin>> empid[i];
            for(j=0;j<days;j++){
                cout<<endl<<"Day("<<j+1<<")==: "<<endl;
                for(k=0;k<6;k++){
                cout<<endl<<"enter product "<<k+1<<" price: ";
                cin>> prod[i][j][k];
                sum[k] += prod[i][j][k];    //Calculating total of each product
                sum1[i]+=prod[i][j][k];     //Calculating total of each employee 
                // cout<<endl<<"current sum: "<<sum[k];
                }
            } //closing for employee count for loop 
        cout<<endl<<endl<<"Employee("<<i+1<<")'s sum for "<<days<<" days: "<<sum1[i]<<endl<<endl;

            for(k=0;k<6;k++){   //A single product sold prices: 
                cout<<endl<<"Product["<<k+1<<"] sum==:"<<sum[k];

            }

        }
// NOW PRINTING THE DESIRED TABLE:
        cout<<endl<<"| Products ID:\t\t| Employee 1\t\t| Employee 2\t\t| Employee 3\t\t| Employee 4\t\t|";
        cout<<endl<<"             ";
            for(i=0;i<4;i++){
                cout<<"\t\t| "<<empid[i];    
            }
            cout<<"\t\t|"<<endl;
            for(i=0;i<x;i++){
                 for(j=0;j<=5;j++){
                    for(k=0;k<8;k++){
                        switch(k){
                            case 0:
                            cout<<endl<<prodid[k]<<endl;
                            break;
                            case 1:
                            cout<<sum1[i]<<"\t"<<endl;
                            break;
                            case 2:
                            cout<<sum1[i]<<"\t"<<endl;
                            break;
                            case 3:
                            cout<<sum1[i]<<"\t"<<endl;
                            break;
                            case 4:
                            cout<<sum1[i]<<"\t"<<endl;
                            break;
                            // case 5:
                            
                            // break;



                
                        }
                  //  break;
                    }
                // break;
                }
                break;
            }
            

    


}
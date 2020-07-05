#include <iostream>
#include<string>
using namespace std;

int main()
{
    float fesem1=0,fesem=0,sesem1=0,sesem=0,tesem1=0,tesem=0,besem1=0,besem=0;
    float fesem2=0,sesem2=0,tesem2=0,besem2=0,cgpa=0,d=0;
    string Name;
    cout<<"\\n\n\n---------------------------SGPA OF EVEN SEM AND CGPA CALCULATOR--------------------------";
    cout<<"\n\n---------------------------------Made by: Sagarika Matey----------------------------";
    cout<<"\n\n*Note";
    cout<<"\n\nIf data not available enter 0";

    cout<<"\n\nEnter pointer of semesters respectively";

    cout<<"\n\n\n\t\t\tEnter Your Name: ";
    getline(cin,Name);
    cout<<"\n\t\t\tHiiii "<<Name<<" Lets Start !!!";
    int counter=0;
    cout<<"\n\n\t\t\tSGPA OF FE SEM1: ";
    cin>>fesem1;
    if(fesem1!=0)
    {
    counter++;
    //cout<<"\n\n"<<counter;
    cgpa=fesem1*25;
    d+=25;
    }


    cout<<"\n\t\t\tSGPA OF FIRST YEAR(AGGREGATE): ";
    cin>>fesem;
    if(fesem!=0)
    {
      counter++;
      //cout<<"\n\n"<<counter;
      fesem2=fesem*2-fesem1;
      cout<<"\n\t\t\t------------Your SGPA for FE SEM 2 is: "<<fesem2;
      cgpa+=fesem2*25;
      d+=25;
    }







    cout<<"\n\t\t\tSE SEM1: ";
    cin>>sesem1;
    if(sesem1!=0)
    {
    counter++;
    //cout<<"\n\n"<<counter;
    cgpa+=sesem1*25;
    d+=25;
    }


    cout<<"\n\t\t\tSGPA OF SECOND YEAR(AGGREGATE): ";
    cin>>sesem;
    if(sesem!=0)
    {
    counter++;
    //cout<<"\n\n"<<counter;
    sesem2=sesem*2-sesem1;
    cout<<"\n\t\t\t------------Your SGPA for SE SEM 2 is: "<<sesem2;
    cgpa+=sesem2*25;
    d+=25;

    }


    cout<<"\n\n\t\t\tTE SEM1: ";
    cin>>tesem1;
    if(tesem1!=0)
    {
    counter++;
    //cout<<"\n\n"<<counter;
    cgpa+=tesem1*23;
    d+=23;
    }


    cout<<"\n\t\t\tSGPA OF THIRD YEAR(AGGREGATE): ";
    cin>>tesem;
    if(tesem!=0)
    {
    counter++;
    //cout<<"\n\n"<<counter;
    tesem2=tesem*2-tesem1;
    cout<<"\n\t\t\t------------Your SGPA for TE SEM 2 is: "<<tesem2;
    cgpa+=tesem2*23;
    d+=23;
    }



    cout<<"\n\n\t\t\tBE SEM1: ";
    cin>>besem1;
    if(besem1!=0)
    {
    counter++;
    //cout<<"\n\n"<<counter;
    cgpa+=besem1*22;
    d+=22;
    }


    cout<<"\n\t\t\tSGPA OF FOURTH YEAR(AGGREGATE): ";
    cin>>besem;
    if(besem!=0)
    {
    counter++;
    //cout<<"\n\n"<<counter;
    besem2=besem*2-besem1;
    cout<<"\n\t\t\t-----------Your SGPA for BE SEM 2 is: "<<besem2;
    cgpa+=besem2*22;
    d+=22;
    }


    char choice;
    float CGPA;
    int denom;
    //cout<<"\n--------"<<counter;
    //cout<<"\n--------"<<cgpa;
    cout<<"\n\n\t\t\tDo you wish to calculate your CGPA?(Y/N)";
    cin>>choice;
    if(choice=='Y'||choice=='y')
    {
        switch(counter)
        {

        case 1: //denom=25;
                CGPA=cgpa/d;
                cout<<"\n\t\t\t---------------------";
                cout<<"\n\t\t\tCGPA: "<<CGPA;
                cout<<"\n\t\t\t---------------------";
                cout<<"\n\n\t\t\tThankyou "<<Name;

                break;

        case 2: //denom=50;
                CGPA=cgpa/d;
                cout<<"\n\t\t\t---------------------";
                cout<<"\n\t\t\tCGPA: "<<CGPA;
                cout<<"\n\t\t\t---------------------";
                cout<<"\n\n\t\t\tThankyou "<<Name;

                break;

        case 3: //denom=75;
                CGPA=cgpa/d;
                cout<<"\n\t\t\t---------------------";
                cout<<"\n\t\t\tCGPA: "<<CGPA;
                cout<<"\n\t\t\t---------------------";
                cout<<"\n\n\t\t\tThankyou "<<Name;

                break;

        case 4: //denom=100;
                CGPA=cgpa/d;
                cout<<"\n\t\t\t---------------------";
                cout<<"\n\t\t\tCGPA: "<<CGPA;
                cout<<"\n\t\t\t---------------------";
                cout<<"\n\n\t\t\tThankyou "<<Name;

                break;

        case 5: //denom=123;

                CGPA=cgpa/d;
                cout<<"\n\t\t\t---------------------";
                cout<<"\n\t\t\tCGPA: "<<CGPA;
                cout<<"\n\t\t\t---------------------";
                cout<<"\n\n\t\t\tThankyou "<<Name;

                break;

        case 6: //denom=146;
                CGPA=cgpa/d;
                cout<<"\n\t\t\t---------------------";
                cout<<"\n\t\t\tCGPA: "<<CGPA;
                cout<<"\n\t\t\t---------------------";
                cout<<"\n\n\t\t\tThankyou "<<Name;

                break;

        case 7: //denom=168;
                CGPA=cgpa/d;
                cout<<"\n\t\t\t---------------------";
                cout<<"\n\t\t\tCGPA: "<<CGPA;
                cout<<"\n\t\t\t---------------------";
                cout<<"\n\n\t\t\tThankyou "<<Name;

                break;

        case 8: //denom=190;
                CGPA=cgpa/d;
                cout<<"\n\t\t\t---------------------";
                cout<<"\n\t\t\tCGPA: "<<CGPA;
                cout<<"\n\t\t\t---------------------";
                cout<<"\n\n\t\t\tThankyou "<<Name;
                cout<<"\n\n\n\n*******************************";

                break;

        }


    }
    else{
        cout<<"Thank You !"<<Name;
    }



        return 0;
}

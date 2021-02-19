#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    float n1, n2, n3, n4, n = 6.4, avg;

    cin>>n1>>n2>>n3>>n4;

    avg = (n1+n2+n3+n4)/4;

    cout<<setprecision(1)<<fixed <<"Media: "<<avg<<endl;

    if(avg >= 7.0)
    {
        cout<<"Aluno aprovado."<<endl;
    }
    else if(avg >= 5.0)
    {
        cout<<"Aluno em exame."<<endl;

        cout<<"Nota do exame: "<<setprecision(1)<<fixed<<n<<endl;

        if((n+avg)/2 > 5.0)
        {
            cout<<"Aluno aprovado."<<endl;
        }
        else
        {
            cout<<"Aluno reprovado."<<endl;
        }

        cout<<"Media final: "<<setprecision(1)<<fixed<<(n + avg)/2<<endl;
    }
    else
    {
        cout<<endl;
    }
return 0;
}

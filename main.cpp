/*Your program must have the following functions that do the
following:
– Read the number of medal for each country from a keyboard and
store them inside the medals array.
– Return total number of medals won by country 3.
– Return the largest number of medals won.
– Return the smallest number of medals won.
– Return the highest number of gold medal won.
– Return the total number of bronze medal won.*/

#include <iostream>

using namespace std;

const int COUNTRY = 4;
const int MEDAL = 3;

void getNumber (int [COUNTRY][MEDAL],int);
void countryThree (int [COUNTRY][MEDAL],int);
void highest (int [COUNTRY][MEDAL],int );
void lowest (int [COUNTRY][MEDAL],int );
void getGold (int [COUNTRY][MEDAL],int );
void getBronze (int[COUNTRY][MEDAL],int);

int main()
{

    int winner [COUNTRY][MEDAL]={{129,257,590},
                                {120,279,394},
                                {115,290,123},
                                {98,209,112}};

    countryThree (winner, COUNTRY);
    highest (winner,COUNTRY);
    lowest (winner,COUNTRY);
    getGold (winner,COUNTRY);
    getBronze(winner,COUNTRY);



    return 0;
}
//Read the number of medal from each country
void getNumber (int w [COUNTRY][MEDAL],int i)
{
    int sum;

     for (int i =0; i<COUNTRY;i++)
       {
           sum=0;
           for(int j=0;j<MEDAL;j++)
            sum+=w[i][j];
           cout<<"The number of medals won by country "<<i+1<<" is "<<sum<<endl;
       }
}

//Get total numbers of medals won by country 3
void countryThree (int w [COUNTRY][MEDAL],int i)
{
    getNumber(w,COUNTRY);
    int total;
    total= w[2][0]+w[2][1]+w[2][2];
    cout<<"\nThe total number medal of country 3 is "<<total<<endl;
}

//Get the largest number of medals won
void highest (int w [COUNTRY][MEDAL],int i)
{
int highest;
highest= w[0][0];
    for (int j=0;j<MEDAL; j++)
    {
        for (int i=0; i<COUNTRY;i++)
        if(w[i][j]> highest)
            highest=w[i][j];
    }
     cout<<"The number of highest medal is "<<highest<<endl;


}
//Get the smallest number of medals won.
void lowest (int w [COUNTRY][MEDAL],int i)
{
int lowest;
lowest= w[0][0];
    for (int j=0;j<MEDAL; j++)
    {
        for (int i=0; i<COUNTRY;i++)
        if(w[i][j]<lowest)
            lowest=w[i][j];
    }
     cout<<"The number of lowest medal is "<<lowest<<endl;
}
//Get the highest number of gold medal won.
void getGold (int w [COUNTRY][MEDAL],int i)
{
    int highest;
highest= w[0][0];
    for (int j=0;j<1; j++)
    {
        for (int i=0; i<COUNTRY;i++)
        if(w[i][j]> highest)
            highest=w[i][j];
    }
     cout<<"The number of highest number of gold medal is "<<highest<<endl;

}
//Get the total number of bronze medal won.
void getBronze (int w [COUNTRY][MEDAL],int i)
{
    int sum;
    for(int j=2; j<MEDAL;j++)
    {
        sum=0;
        for (int i=0; i<COUNTRY;i++)
            sum+=w[i][j];

    }
    cout<<"Number of bronze medal won is "<< sum<<endl;

}


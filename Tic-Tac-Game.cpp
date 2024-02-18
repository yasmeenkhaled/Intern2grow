#include<iostream>
using namespace std;
char player = 'x';
int counter ;
int counx=0;   int couno=0;     //case 1
char matrix [3][3]={'1','2','3','4','5','6','7','8','9'};   //Grid
void Printmatrix ()   // display matrix
{
    cout<<"----------";
    cout<<endl;
    for(int i =0 ; i<3 ;i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << "   ";
        }
        cout<<endl;

    }
    cout<<"----------";
    cout<<endl;
}
void play()
{
    char position;
    cout<<"Choose Your Position -Player :"<<" "<< player; // that start with x
    cin>>position;
    for(int i =0 ; i<3 ;i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] == position)
            {
                matrix[i][j]=player;
            }
        }
    }
    if(player == 'x')
        player='o';
    else
        player='x';
}
char win()
{
    for(int i =0 ; i<3 ;i++) {     //case 1
        for (int j = 0; j < 3; j++) {
            if (matrix [i][j] != 'x'|| matrix [i][j] != 'o')
                if (matrix [i][j] != 'x'&& matrix[i][j]!='o')
                {
                    counter++;
                }
            if (matrix[i][j] == 'x') counx++;
            else if (matrix[i][j] == 'o') couno++;
            if (counx ==3 || couno==3)
                return counx > couno ? 'x':'o' ;
            }
        }
    counx=0;  couno=0;


    int counx=0;   int couno=0;     //case 2
    for(int i =0 ; i<3 ;i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[j][i] == 'x') counx++;
            else if (matrix[j][i] == 'o') couno++;
            if (counx ==3 || couno==3)
                return counx > couno ? 'x':'o' ;
        }
    }
    counx=0;  couno=0;


    if (matrix[0][0]=='x' && matrix[1][1]=='x'&& matrix[2][2]=='x') return 'x';
    else if (matrix[0][0]=='o' && matrix[1][1]=='o'&& matrix[2][2]=='o') return 'o';
    else if (matrix[0][2]=='x' && matrix[1][1]=='x'&& matrix[2][0]=='x') return 'x';
    else if (matrix[0][2]=='o' && matrix[1][1]=='o'&& matrix[2][0]=='o') return 'o';


    if (counter == 0) return 'y';


    return '.';
}

int main()
{

    while (win() == '.')
    {
      Printmatrix();
      play();
    }
    Printmatrix();
    if(win()=='y')
    {
        cout <<"/n  No Win !  Try agin ";
    }
    else
    {
        cout <<"Congrtulations !!  The Winner is "<<win();
    }

    return 0;
}

// A 
// B B
// C C C
// D D D D
// E E E E E
// F F F F F F


void pattern16(int N)
{
      for(int i=0;i<N;i++){
          char ch = 'A'+i;
          for(int j=0;j<=i;j++){
              cout<<ch<<" ";
          }
          cout<<endl;
          
      }
}
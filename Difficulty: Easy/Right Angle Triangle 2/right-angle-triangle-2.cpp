class Solution {
  public:
    void printPattern(int n) {
        // Code here
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                if(i==j || i==1 || i==n || j==1 || j==n){
                    cout<<"* ";
                }
                else cout<<"  ";
            }
            cout<<endl;
        }
    }
};
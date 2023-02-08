#include<stdio.h>

void giaithua(int n){

      int A[500000],i,j,m=1;
      long long r=0,q;
      A[0]=1;
      for(i=2;i<=n;i++){
      for(j=0;j<m;j++){
           q=r;
           r=(A[j]*i+r)/10;
          A[j]=(A[j]*i+q)%10;
   }
     while(r>0){
          A[m]=r%10;
          m++;
          r=r/10;
   }
 }
        for(i=m-1;i>=0;i--)  printf("%d",A[i]);
}


int main(){
freopen("E:\\data\\5.in", "r", stdin); 
freopen("E:\\data\\5.ans", "w", stdout);
       int n;
       scanf("%d",&n);
       giaithua(n);
       return 0;
}


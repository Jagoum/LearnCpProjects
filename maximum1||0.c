#include <stdio.h>
#include <stdlib.h>




int maxScore(char* s) {
   
    int max = 0;
    int count1 = 0, count2 = 0;
    int i=0, j=0;
    int n = sizeof(s)/sizeof(s[0])-1;
    char e[n-1];

    while(n)
    {
        e[i] = s[i];
        n--;
        for(j=0; j<sizeof(e)/sizeof(e[0])-1; j++)
        {
            if(e[j]==0)
                count1++;
        }
        for(j=0; j<n; j++)
        {
            if(s[j]==1)
                count2++;
        }
        if((count1+count2)>max){
        max = count1+count2;
        }
        i++;
        //j++;
    }

    return max;
}
// what is the solid principle in programming langgauge

int main(){
    char s[6]={'0','0','0','1','1','0'};
        printf("Output = %d", maxScore(s));
}
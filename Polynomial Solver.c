/******************************************************************************

                        Polynomial Solver
                        
                For Example : 4 x^2 + 1 x + 1
        input:       
                    Highest Power : 2 
        
        co-efficient/exponent of power 2:4
        2
        
        co-efficient/exponent of power 1:1
        1
        
        co-efficient/exponent of power 0:1
        0
        
        Enter the value to substituted : 2
        
        output :
                    result = 4*2^2 + 1*2^1 +1*2^0  = 19
                    
                RESULT = 19
        
        
        
        

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int hp,el,co,po,res,temp,val,sum=0;
    printf("Enter the Highest Power:");
    scanf("%d",&hp);
    int a[hp],b[hp];
    el=hp;
    for(int i=0;i<=hp;i++){
        printf("\n\tEnter the Co-efficient/Exponent of power %d :",el);
        el=el-1;
        if(i<=hp){
            scanf("%d",&a[i]);
            scanf("%d",&b[i]);
        }
    }
    printf("\n\tEnter the Value to be Substituted:");
    scanf("%d",&val);
    for(int i=0;i<=hp;i++)
    {
        co=a[i];
        po=b[i];
        temp=pow(val,po);
        res=temp*co;
        sum=sum+res;
    }
    printf("\n\n\tResult=%d",sum);
    return 0;
}

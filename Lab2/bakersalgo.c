#include<stdio.h>

int n_resource, m_process;


int SafeSequences(int maxneed[][n_resource], int currallot[][n_resource], int need[][n_resource], int available[], int finish[], int maxresource[], int safe[], int st)
{
        int i,j,k,f;
   
        for(j=0;j<m_process;j++)
        {
            if(!finish[j])
            {
                f=1;
                for(k=0;k<n_resource;k++)
                {
                    if(need[j][k] > available[k])
                    {
                        f=0;
                        break;
                    }
                }

                if(f)
                {
                    st++;
                    safe[st] = j;
                    finish[j] = 1;
                    for(k=0;k<n_resource;k++)
                    {
                        available[k] = currallot[j][k] + available[k];
                    }

                    SafeSequences(maxneed,currallot, need, available, finish, maxresource, safe, st);
                    
                    for(k=0;k<n_resource;k++)
                    {
                        available[k] = available[k] - currallot[j][k];
                    }
                    st--;
                    finish[j]=0;

                }
            }
        }

        if(st==m_process-1)
        {
            for(i=0;i<m_process;i++)
            {
                printf("%d-->", safe[i]+1);
            }
            printf("\n");
        }
    


}

int main()
{
    int i,j;
    printf("Enter no.of Process and no.of Resources: ");
    scanf("%d %d",&m_process,&n_resource);

    int maxneed[m_process][n_resource];
    int currallot[m_process][n_resource];
    int need[m_process][n_resource];
    int safe[m_process];
    int st = -1;

    int available[n_resource];
    int finish[m_process];
    int maxresources[n_resource];

    printf("Enter max no.of Resources of each type\n");

    for(i=0;i<n_resource;i++)
    {
        scanf("%d", &maxresources[i]);
    }

    for(i=0;i<m_process;i++)
    {
        finish[i] = 0;
    }

    printf("Enter maxneed Matrix\n");
    for(i=0;i<m_process;i++)
    {
        for(j=0;j<n_resource;j++)
        {
            scanf("%d", &maxneed[i][j]);
        }
    }

    printf("Enter Current Alloted Matrix\n");
    for(i=0;i<m_process;i++)
    {
        for(j=0;j<n_resource;j++)
        {
            scanf("%d", &currallot[i][j]);
        }
    }


    for(i=0;i<m_process;i++)
    {
        for(j=0;j<n_resource;j++)
        {
            need[i][j] = maxneed[i][j] - currallot[i][j];
        }
    }

    int sum=0;

    for(i=0;i<n_resource;i++)
    {
        sum = 0;
        for(j=0;j<m_process;j++)
        {
            sum = sum + currallot[j][i];
        }
        available[i] = maxresources[i] - sum;
        if(available[i]<0)
        {
            printf("\n Invalid Input \n");
        }
    }

    printf("Safe Sequences are\n");
    SafeSequences(maxneed,currallot,need,available,finish,maxresources,safe, st);

}
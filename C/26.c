    #include<stdio.h>
    int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
    int c;
    for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
                {
                    if(arr[j]>arr[i])
                    {
                        c = arr[i];
                        arr[i] = arr[j];
                        arr[j] = c;
                    }
                }
        }
    printf("min = %d, max = %d",arr[n-1],arr[0]);
    
    
    
    return 0;
    }
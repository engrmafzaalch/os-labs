#include <stdio.h>
void swap(char const ** str1, char const ** str2)
{
    char const *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}
int main() {

    int num;
    // number of process
    printf("Enter number of processes: ");
    scanf("%d", &num);
    char name[num][100];
    int total_wait=0, total_tot=0;
    float avg_wait, avg_tot;
    int b_time[num], wait[num], tot[num];
    // taking name and number of process
    for(int i=0; i<num; i++){
        printf("Name of process %d: ", i);
        scanf("%s", name[i]);
        printf("Burst time of process %d: ", i);
        scanf("%d", &b_time[i]);

            for (int j = i; j > 0; j--){
               if (b_time[j-1]>b_time[j])
               {
                   //swaping time
                   b_time[j-1] += b_time[j];
                   b_time[j]=b_time[j-1]-b_time[j];
                   b_time[j-1]=b_time[j-1]-b_time[j];

                   swap(&name[j-1],&name[j]);
               }
               
            }
    }
    
    //calculaing wait and tot for all process
    for (int i = 0; i <num; i++){
        if (i==0){
            wait[i]=0;
        }else{
            wait[i]=tot[i-1];
        }
        tot[i] = b_time[i]+wait[i];        
        total_wait+=wait[i];
        total_tot+=tot[i];
    }
    
    //printing name b_time wait and tot 
    printf("P_name\tB_time\tWait\tToT\n");
    for(int i=0; i<num; i++){
        printf("%s\t%d\t%d\t%d\n", name[i], b_time[i], wait[i], tot[i]);
    }
    avg_tot=total_tot/(float)num;
    avg_wait=total_wait/(float)num;
    printf("total waiting time: %d\n", total_wait);
    printf("Average waiting time: %f\n", avg_wait);
    printf("total Turnaround time: %d\n", total_tot);
    printf("Average Turnaround time: %f\n", avg_tot);

   return 0;
}
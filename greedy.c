#include "stdlib.h"
#include "greedy.h"
/**
 * 设有 m 台完全相同的机器运行 n 个独立的任务，运行任务 i 所需要的时间为 ti。
 * 要求确 定一个调度方案，使得完成所有任务所需要的时间最短。
 *  假设任务已经按照其运行时间从大到小排序，
 * 算法基于最长运行时间作业优先的策略： 按顺序先把每个任务分配到一台机器上，
 * 然后将剩余任务一一次放入最先空闲的机器。
 */

int scheduling_problem(int *task, int n, int m)
{
    if (n <= m)
    {
        // 任务已按从大到小排序，所以task[0]是最大的
        return task[0];
    }
    
    int *machine = (int *)malloc(sizeof(int) * m);
    int j = 0;
    for (j = 0; j < m; j++)
    {
        machine[j] = task[j];
    }
    j--;
    int min = task[0];
    int t = 0;
    while (j < n)
    {
        for (int i = 0; i < m; i++)
        {
            if (machine[i] < min)
            {
                min = machine[i];
            }
        }
        for (int i = 0; i < m; i++)
        {
            machine[i] -= min;
            if (machine[i] == 0 && j<n)
            {
                j++;
                machine[i] = task[j];
               
            }
        }

        t+=min;        
    }
    int max=0;
    for(int i=0;i<m;i++){
        if(max<machine[i]){
            max=machine[i];
        }
    }
    t+=max;
    free(machine);
    return t;
}

int scheduling_problem2(int *task, int n, int m){
    if(n<=m){
        return task[0];
    }
    int machine[50]={0};
    for(int i=0;i<m;i++){
        machine[i]=task[i];
    }
    
    int minIndex=0;
    for(int j=m;j<n;j++){
      int min=machine[0];  
        for(int i=0;i<m;i++){
            if(min>machine[i]){
                min=machine[i];
                minIndex=i;
            }
        }
        machine[minIndex]+=task[j];
    }
    int max=-1;
    for(int i=0;i<m;i++){
        if(max<machine[i]){
            max=machine[i];
        }
    }
    return max;
}


#include "stdio.h"
#include "sort.h"
#include "greedy.h"
int main(){
    // int array1[] = {1, 2, 3, 4, 5};
    // int array2[] = {5, 4, 3, 2, 1};
    // int array3[] = {5, 1, 4, 1, 3};

    // qs(array1, 5);
    // qs(array2, 5);
    // qs(array3, 5);

    int tasks[] = {8, 4, 3, 2, 1}; // 任务时间
    int n = sizeof(tasks) / sizeof(tasks[0]);
    int m = 2; // 机器数量
    scheduling_problem(tasks,n,m);
    printf("done");
}
#include "stdio.h"
#include "sort.h"
#include "greedy.h"
int main()
{
    // int array1[] = {1, 2, 3, 4, 5};
    // int array2[] = {5, 4, 3, 2, 1};
    // int array3[] = {5, 1, 4, 1, 3};

    // qs(array1, 5);
    // qs(array2, 5);
    // qs(array3, 5);

    // 3台机器，5个任务
    int m = 3;
    int n = 5;
    int tasks[] = {10, 8, 7, 6, 4}; // 任务时间从大到小排序

    // 预期结果：12
    scheduling_problem(tasks, n, m);
    printf("done");
}
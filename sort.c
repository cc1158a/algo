#include "sort.h"
#include "stdio.h"
int partition(int *arr, int left, int right)
{
    int pivot = arr[right];
    while (left < right)
    {
        while (arr[left] < pivot && left < right)
        {
            left++;
        }
         arr[right] = arr[left];
        while (arr[right] >= pivot && left < right)
        {
            right--;
        }
        arr[left]=arr[right];       
    }
    arr[left]=pivot;
    return left;
}

int loop(int* arr,int left,int right){
    if(left>=right){
        return 0;
    }
    int mid=partition(arr,left,right);
    loop(arr,left,mid-1);
    loop(arr,mid+1,right);
    return 0;
}

int qs(int *arr, int len)
{
    loop(arr,0,len-1);
    return 0;
}
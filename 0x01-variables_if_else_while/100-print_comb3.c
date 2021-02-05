#include <stdio.h>
/**
* main - random numbers
* Return: last digit
* @arr: arr
* @data: data
* @start: start
* @end: end
* @index: index
* @r: r
* combinationUtil - combinationUtil
* printCombination - printcombinationUtil
*/
void combinationUtil(int arr[], int data[], int start,
int end, int index, int r);
void printCombination(int arr[], int n, int r)
{
int data[r];
combinationUtil(arr, data, 0, n - 1, 0, r);
}
void combinationUtil(int arr[], int data[], int start,
int end, int index, int r)
{
if (index == r)
{
for (int j = 0; j < r; j++)
printf("%d ", data[j]);
printf("\n");
return;
}
for (int i = start; i < = end && end - i + 1 >= r - index; i++)
{
data[index] = arr[i];
combinationUtil(arr, data, i + 1, end, inde + 1, r);
}
}
int main(void)
{
int arr[] = {0, 1};
int r = 2;
int n = sizeof(arr) / sizeof(arr[0]);
printCombination(arr, n, r);
}

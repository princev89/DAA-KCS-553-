#include <stdio.h>
#include <conio.h>
void quick(int a[], int p, int r);
int part(int a[], int p, int r);
int a[30], p, r;
//converting to int main() and add return value at last 
int main()
{
    int n, i;
    // clrscr();
    printf("ENTER the size of array ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    // quick(a, 1, r); quick will take array base address, first -> index and last -> index of array
    quick(a, 1, n); 

    for (i = 1; i <= n; i++)
        printf("%d\t", a[i]);
    // getch(); commenting getch()

    return 0;
    //added return value

}
void quick(int a[], int p, int r)
{
    int q;
    if (p < r)
    {
        q = part(a, p, r);
        quick(a, p, q - 1);
        quick(a, q + 1, r);
    }
}
int part(int a[], int p, int r)
{
    int x, i, j, temp, temp1;
    i = p - 1;
    // x = a[x]; x will have the value of last element 
    // so the last element in a[] (passed in part function currently) is present at index r
    // so x will contain a[r] : value at last index 
    x = a[r];
    for (j = p; j <= r - 1; j++)
    {
        if (a[j] <= x)
        {
            i++;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    temp1 = a[i + 1];
    a[i + 1] = a[r];
    a[r] = temp1;
    return i + 1;
}
/* Enter your solutions in this file */
#include <stdio.h>

//maximum function
int max(int n[], int a)
{
  int max_tn = n[0];
  for (int i = 1; i < a; i++)
  {
    if (max_tn < n[i])
      max_tn = n[i];
  }
  return max_tn;
}

// minimum function
int min(int n[], int a)
{
    int min_tn = n[0];
    for (int i = 0; i < a; i++)
    {
        if (n[i] < min_tn)
            min_tn = n[i];
    }
    return min_tn;
}

// average function
float average(int n[], int a)
{
    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        sum += n[i];
    }
    float average = (float)sum / (float)a;
    return average;
}

// mode function
int mode(int a[], int n)
{
    int maxcount = 0, maxvalue = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
                count = count + 1;
        }

        if (count > maxcount)
        {
            maxcount = count;
            maxvalue = a[i];
        }
    }
    return maxvalue;
}

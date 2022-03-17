#include<stdio.h>
int main()
{
    int population = 100000;
    int loop_for_ten_years;
    for(loop_for_ten_years = 0;loop_for_ten_years <= 10;loop_for_ten_years++)
    {
      population = population - (population / 100) * 10;
      int revyears  = 10 - loop_for_ten_years;
      if (revyears == 0)
      {
          break;
      }
      printf("Year %d : %d\n",revyears,population);
    }
    return 0;
}
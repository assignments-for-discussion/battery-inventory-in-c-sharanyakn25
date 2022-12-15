#include <stdio.h>
//#include <assert.h>

/*struct CountsByUsage {
  int lowCount = 0;
  int mediumCount = 0;
  int highCount = 0;
};*/

/*struct CountsByUsage countBatteriesByUsage(const int* cycles, int nBatteries) {
  int nBatteries = sizeof(chargeCycleCounts[]);
  struct CountsByUsage counts = {0, 0, 0};
  return counts;
}*/

int testBucketingByNumberOfCycles() {
  const int chargeCycleCounts[] = {100, 300, 500, 600, 900, 1000};
  const int no_battery = sizeof(chargeCycleCounts[]);
  //printf("Counting batteries by usage cycles...\n");
  //struct CountsByUsage counts = countBatteriesByUsage(chargeCycleCounts, numberOfBatteries);
  int lowCount = 0;
  int mediumCount = 0;
  int highCount = 0;
  
  for(int i=0;i <= no_battery;i++)
  {
    if(chargeCycleCounts[i] <= 310)
    {
      lowCount++;
      printf("Low");
    }
    elseif(chargeCycleCounts[i] < 929 && chargeCycleCounts[i] >310)
    {
      mediumCount++;
      printf("Medium");
    }
    elseif(chargeCycleCounts[i] >= 930)
    {
      highCount++;
      printf("High");
    }
    else
      break;
  }


int main() {
  testBucketingByNumberOfCycles();
  return 0;
}

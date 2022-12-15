#include <stdio.h>
#include <assert.h>

struct CountsByUsage {
  int lowCount = 0;
  int mediumCount = 0;
  int highCount = 0;
};

struct CountsByUsage countBatteriesByUsage(const int* cycles, int nBatteries) {
  struct CountsByUsage counts = {0, 0, 0};
  return counts;
}

int testBucketingByNumberOfCycles() {
  const int chargeCycleCounts[] = {100, 300, 500, 600, 900, 1000};
  const int numberOfBatteries = sizeof(chargeCycleCounts) / sizeof(chargeCycleCounts[0]);
  printf("Counting batteries by usage cycles...\n");
  struct CountsByUsage counts = countBatteriesByUsage(chargeCycleCounts, numberOfBatteries);
  assert(counts.lowCount == 2);
  assert(counts.mediumCount == 3);
  assert(counts.highCount == 1);
  printf("Done counting :)\n");
  for(int i=0;i<numberOfBatteries;i++)
  {
    if(chargeCycleCounts[i] <= 310)
      lowCount++;
    elseif(chargeCycleCounts[i] < 929 || 310 < chargeCycleCounts[i])
      mediumCount++;
    elseif(chargeCycleCounts[i] >= 930)
      highCount++;
}

int main() {
  testBucketingByNumberOfCycles();
  return 0;
}

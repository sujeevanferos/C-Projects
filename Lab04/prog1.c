#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

float integrityScore(int signal[], int n)
{

  int sumSignal = 0;
  float sumMean = 0;
  int max = 0;

   for(int i = 0; i < n; i++)
  {
    sumSignal += signal[i];
    sumMean += (signal[i] * signal[i]);

    if(max < signal[i])
    {
      max = signal[i];
    }
  }

  float avgSignal =(float) sumSignal / n;
  float variance = ((float) sumMean / n) - avgSignal;

  return variance / max;

}

char* catergorizeSignal(int strength, int frequency)
{
  char* type = malloc(11);

  if((strength > 70) && (frequency < 30))
  {
    strcpy(type, "Echo");
  }
  else if ((strength < 40) && (400 < frequency && frequency < 800))
  {
    strcpy(type, "Noise");
  }
  else if((40 < strength && strength < 70) && (frequency > 800))
  {
    strcpy(type, "Distortion");
  }
  else {
    strcpy(type, "Unknown");
  }

  return type;
}

bool isMessageTrusted(char* message)
{
  int SUM = 0;
  for (int i = 0; i < sizeof(message); i++)
  {
    SUM += (int) message[i];
  }
  
  if( SUM % 7 == 0)
  {
    return true;
  }
  else {
    return false;
  }

}


void displayPattern(int level)
{
  for(int i = 1; i <= level; i++)
  {
    for(int j = 1; j <= i; j++)
    {
      printf("#");
    }
  }
}





int main()
{

    return 0;
}

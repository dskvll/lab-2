#include "timer.h"
#include<stdio.h>
#include<stdlib.h>

int total = 0;

void inc_alarm(){
  total += 1;
}

void sig_handler(int signum){
  printf ("\n Toal alarms: %d", total);
  printf ("Seconds taken: %d", total)
  exit(0);
}
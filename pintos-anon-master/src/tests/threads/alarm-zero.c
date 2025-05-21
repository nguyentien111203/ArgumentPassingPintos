/* Tests timer_sleep(0), which should return immediately. */

#include <stdio.h>
#include "tests/threads/tests.h"
#include "threads/malloc.h"
#include "threads/synch.h"
#include "threads/thread.h"
#include "devices/timer.h"

void
test_alarm_zero (void) 
{
  // Add function to print student's name and id
  printf("Name : Nguyen Duc Tien");
  printf("MSSV : 20210838");
  timer_sleep (0);
  pass ();
}

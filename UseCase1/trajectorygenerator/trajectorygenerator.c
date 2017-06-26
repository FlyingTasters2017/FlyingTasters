/* User code: This file will not be overwritten by TASTE. */


#include "trajectorygenerator.h"
#include <stdio.h>
#include <math.h>
#include <time.h>

#define PI 3.14159265

long            ms_0; // Milliseconds
time_t          s_0;
long            ms;
time_t          s;
struct timespec spec;

double Ref;

float Path[5] = {0, 0.1, 0.2, 0.3, 0.4};
int i =0;

void trajectorygenerator_startup()
{
 
  clock_gettime(CLOCK_MONOTONIC_RAW, &spec);
  
  s_0 = spec.tv_sec;

  ms_0 = round(spec.tv_nsec/1e6);
  
  
  
//     printf(".%03ld seconds since the Epoch\n ", ms_0);
  
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}


void trajectorygenerator_PI_GetTrajectory(const asn1SccMyInteger *IN_Num,
                                          const asn1SccMyReal *IN_Height,
                                                asn1SccMyReal *OUT_Ref)
{
      clock_gettime(CLOCK_MONOTONIC_RAW, &spec);
  
      s = spec.tv_sec;

      ms = round(spec.tv_nsec/1e6);
      printf("ms= %ld\n ", s*1000 + ms);
      printf("ms_0= %ld\n ", s_0*1000 +ms_0);
      printf("i = %d\n",i);
      printf("The Reference Height is :%f\n",Ref);
      printf("The Actual Height is :%f\n",*IN_Height);
      printf("The difference is :%f\n",Ref-*IN_Height);
      
      if (fabs(Ref-*IN_Height)<0.01)
      {
          *OUT_Ref = Path[i+1];
          i = i+1;
          ms_0= ms;
          printf("I entered this loop and Reference Height is %f \n", *OUT_Ref);
      }
      else
      {
          *OUT_Ref = Path[i];
      }
      
      Ref = *OUT_Ref;
      printf("The Actual Reference Height is %f \n", Ref);
      
      if (i ==4)
      {
          i =0;
      }
      
      
      
//       if ((s*1000 + ms - s_0*1000 -ms_0)>100)
//       {
//           *OUT_Ref = sin(PI*(i+1)*0.1);
//            i = i+1;
//            ms_0= ms;
//        }
//        else
//        {
//            *OUT_Ref = sin(PI*i*0.1);
//        }
       
    /*The trajectorygenerator 1 (circle mode)
    /*OUT_Ref = sin(*IN_Num*2*PI/100);
    
    /*The trajectorygenerator 2 (Square mode)*/
    /*if (abs(Ref-*IN_Height)<0.1 && stay>2) 
    {
        *OUT_Ref = Ref + 1;
        Ref = Ref +1;
        stay = 0;
    }
    else 
        {
            *OUT_Ref = Ref; 
            
        }
    stay = stay + 0.1;*/
    
    /*The trajectorygenerator 3 */
    
    
}


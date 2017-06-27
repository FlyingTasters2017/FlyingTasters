/* User code: This file will not be overwritten by TASTE. */

#include "msd_processing.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <assert.h>
#include "../../Configuration.h"
#define MAXSIZE 20

float x_current;
float y_current;


struct MyStack
{
    int stk[MAXSIZE][3];
    int top;
};
typedef struct MyStack MYSTACK;
MYSTACK s;

void MyStack_push(int,int,int);
void MyStack_pop(void);
void MyStack_read(int*,int*,int*);

void MyStack_push (int x, int y, int sig)
{
    
    if (s.top == (MAXSIZE - 1))
    {
        printf ("Stack is Full\n");
        return;
    }
    else
    {
        s.top = s.top + 1;
        s.stk[s.top][1] = x;
        s.stk[s.top][2] = y;
        s.stk[s.top][3] = sig;
    }
    return;
}
/*  Function to delete an element from the stack */
void MyStack_pop ()
{
    
    if (s.top == - 1)
    {
        printf ("Stack is Empty\n");
        return ;
    }
    else
    {
//         num = s.stk[s.top];
        //printf ("poped element is = %d \n", s.stk[s.top][3]);
        s.top = s.top - 1;
    }
  return;
}
/*  Function to display the status of the stack */
void MyStack_read (int* x, int* y, int* Id)
{
    assert(x);
    assert(y);
    assert(Id);
    if (s.top == -1)
    {
        printf ("Stack is empty\n");
        return;
    }
    else
    {
        printf ("\n The status of the stack is \n");
        printf ("x = %d y = %d Id = %d \n", s.stk[s.top][1],s.stk[s.top][2],s.stk[s.top][3]);
        
    }
    int a=s.stk[s.top][1];
    int b=s.stk[s.top][2];
    int c=s.stk[s.top][3];
    x = &a;
    y = &b;
    Id = &c;
}

void msd_processing_startup()
{
    s.top = -1;
    printf ("stack initialized \n");
    x_current = 0.0;
    y_current = 0.0;
}

void msd_processing_PI_process_MSD(const asn1SccPixyData *IN_raw_MSD,
                                   asn1SccMultiAgents *OUT_processed_MSD)
{   
    int hdrone=0.3;   
    //drone height from laser sensor, m. IF Z IS NOT FIXED AT 0.3M, THIS SHOULD BE CHANGED
    
    int ResX=320;   
    // wide side resolution of the camera
    int ResY=200;
    // narrow side resolution of the camera
    
    //FovY=47*pi/180; %narrow side FOV angle of camera
    
    int hcam= 1.7;   
    //camera haight from the ground
    
    float ppg=7.4/1000;  
    //%per pixel real distance on the ground, m- ENTER THE FORMULA HERE

    float perpix = ppg*(hcam-hdrone)/hcam;  
    //%per pix in drone height
    
    for (int i=0;i<NR_OF_DRONES;i++)
    {
        //printf("\n function 3 \n");
        int xp = (*IN_raw_MSD).xPix.arr[i];     //pixy center x , pixels
        int yp = (*IN_raw_MSD).yPix.arr[i];     // pixy center y ,  pixels
    
        //printf("x: %d and y: %d \n", xp,yp);
    
        
        float xtr_p=xp-ResX/2;    
        float ytr_p=yp-ResY/2;
        //%transferred according to the center of the frame
    
    
        float xreal=xtr_p*perpix;
        float yreal=-ytr_p*perpix;

        printf("\n x: %f; y: %f; \n", xreal, yreal);
    
        (*OUT_processed_MSD).agents.arr[i].currentPosition.x= xreal;
        (*OUT_processed_MSD).agents.arr[i].currentPosition.y= yreal;
    }
    
}


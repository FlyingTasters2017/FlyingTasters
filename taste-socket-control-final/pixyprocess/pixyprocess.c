/* User code: This file will not be overwritten by TASTE. */

#include "pixyprocess.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include<assert.h>



#define MAXSIZE 20

float x_current[3];
float y_current[3];

int x[3];
int y[3];

int xp[3];
int yp[3];

float xtr_p[3];
float ytr_p[3];


// struct MyStack
// {
//     int stk[MAXSIZE][3];
//     int top;
// };
// typedef struct MyStack MYSTACK;
// MYSTACK s;
// 
// void MyStack_push(int,int,int);
// void MyStack_pop(void);
// void MyStack_read(int*,int*,int*);
// 
// void MyStack_push (int x, int y, int sig)
// {
//     
//     if (s.top == (MAXSIZE - 1))
//     {
//         printf ("Stack is Full\n");
//         return;
//     }
//     else
//     {
//         s.top = s.top + 1;
//         s.stk[s.top][1] = x;
//         s.stk[s.top][2] = y;
//         s.stk[s.top][3] = sig;
//     }
//     return;
// }
// /*  Function to delete an element from the stack */
// void MyStack_pop ()
// {
//     
//     if (s.top == - 1)
//     {
//         printf ("Stack is Empty\n");
//         return ;
//     }
//     else
//     {
// //         num = s.stk[s.top];
//         //printf ("poped element is = %d \n", s.stk[s.top][3]);
//         s.top = s.top - 1;
//     }
//   return;
// }
// /*  Function to display the status of the stack */
// void MyStack_read (int* x, int* y, int* Id)
// {
//     assert(x);
//     assert(y);
//     assert(Id);
//     if (s.top == -1)
//     {
//         printf ("Stack is empty\n");
//         return;
//     }
//     else
//     {
//         printf ("\n The status of the stack is \n");
//         printf ("x = %d y = %d Id = %d \n", s.stk[s.top][1],s.stk[s.top][2],s.stk[s.top][3]);
//         
//     }
//     int a=s.stk[s.top][1];
//     int b=s.stk[s.top][2];
//     int c=s.stk[s.top][3];
//     x = &a;
//     y = &b;
//     Id = &c;
// }


void pixyprocess_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
//     s.top = -1;
//     printf ("stack initialized \n");
//     x_current = 0.0;
//     y_current = 0.0;

}

void pixyprocess_PI_processData(const asn1SccMyPositionData  *IN_positionData,
                                asn1SccMyPositionData *OUT_procpositionData)
{
    /* Write your code here! */
    int i=0;
    
    int hdrone=0.3;   
    //drone height from laser sensor, m
    
    int ResX=320;   
        // wide side resolution of the camera
    int ResY=200;
        // narrow side resolution of the camera
    
        //FovY=47*pi/180; %narrow side FOV angle of camera
    
    int hcam= 1.77;   
        //camera haight from the ground
    
    float ppg=7.4/1000;  
        //%per pixel real distance on the ground, m- ENTER THE FORMULA HERE

    float perpix = ppg*(hcam-hdrone)/hcam;  
    
    int addx[3], addy[3];
    
    
    //%per pix in drone height
     printf("Red object x : %f \n",IN_positionData->x0Act);
    printf("Red object y : %f \n",IN_positionData->y0Act);

    x[0] = IN_positionData->x0Act;
    y[0] = IN_positionData->y0Act;
            
            
    printf("Blue object x : %f \n",IN_positionData->x1Act);
    printf("Blue object y : %f \n",IN_positionData->y1Act);
    
    x[1] = IN_positionData->x1Act;
    y[1] = IN_positionData->y1Act;
                
            
    printf("Yellow object : %f \n",IN_positionData->x2Act);
    printf("Yellow object : %f \n",IN_positionData->y2Act);
    
     x[2] = IN_positionData->x2Act;
     y[2] = IN_positionData->y2Act;
            

    //printf("\n function 3 \n");
    
    for(i = 0; i<3; i++)
    {
        
        
//         IN_x++;
//         IN_y++;
    
        printf("x: %d and y: %d \n", x[i],y[i]);
   
    
        xp[i]=x[i]; 
        //pixy center x , pixels
    
        yp[i]=y[i]; 
        // pixy center y ,  pixels
    
        xtr_p[i]=xp[i]-ResX/2;    
        ytr_p[i]=yp[i]-ResY/2;
        //%transferred according to the center of the frame
    
    
        x_current[i]=xtr_p[i]*perpix;
        y_current[i]=-ytr_p[i]*perpix;

        printf("\n x con : %f; y con: %f; \n", x_current[i], y_current[i]);
        
        
    
        
    }
    
    OUT_procpositionData->x0Act = x_current[0];
    OUT_procpositionData->y0Act = y_current[0];
    
    OUT_procpositionData->x1Act = x_current[1];
    OUT_procpositionData->y1Act = y_current[1];
    
    OUT_procpositionData->x2Act = x_current[2];
    OUT_procpositionData->y2Act = y_current[2];
    

}

void pixyprocess_PI_getPosition(const asn1SccMyReal *IN_currHeight, asn1SccMyPositionData *OUT_currentPosition)
{
//     asn1SccMyPositionData pos;
//     pos.xAct =  x_current;
//     pos.yAct =  y_current;
    OUT_currentPosition->x0Act = 0.0;
    OUT_currentPosition->y0Act = 0.0;
}

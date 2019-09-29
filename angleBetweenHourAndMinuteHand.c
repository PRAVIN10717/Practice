#include <stdio.h>
#include<stdlib.h>

int main() {
    int hourHand,minuteHand,totalNoOfInput;
	int angle,hAngle,mAngle;
    int min=6,h=30;
    scanf("%d",&totalNoOfInput);
    for(int i=0;i<totalNoOfInput;i++){
		printf("Enter hour(1<=hour<=12) and minute(1<=minute<=60):\n");
        scanf(" %d %d",&hourHand,&minuteHand);
		if(hourHand<1 || minuteHand<1)
			continue;
		minuteHand=minuteHand==60?0:minuteHand;
		hourHand=hourHand==12?0:hourHand;
        hAngle=hourHand*h;
        mAngle=minuteHand*min;
		hAngle+=(mAngle/12);
        angle=abs(hAngle-mAngle);
        angle=angle>180?360-angle:angle;
        printf("%d\n",angle);
    }
	//code
	return 0;
}
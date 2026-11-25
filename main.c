#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int a1 = 3, b1= 4, c1=7;
	int a2 = 7, b2 = 9, c2 = 9;	
	int D, Dx, Dy;
	float ketQua_x, ketQua_y;
    
    // tính nháp (Module 5 3)
    D = a1*b2 - a2*b1;
    Dx = b1*c2 - b2*c1;
    Dy = a2*c1 - a1*c2;
    
    if(D != 0)
    {
    	ketQua_x = (float)Dx / D;
        ketQua_y = (float)Dy / D;
        
        printf("He co nghiem duy nhat\n");
        printf("Ket qua x = %0.2f\n", ketQua_x);
        printf("Ket qua y = %0.2f\n", ketQua_y);
    }
    else 
    {
    	if(Dx == 0 && Dy == 0)
	    {
	        printf("He co vo so nghiem");
	    }
	    else
	    {
	    	printf("He vo nghiem");
	    }
    }
	return 0;
}


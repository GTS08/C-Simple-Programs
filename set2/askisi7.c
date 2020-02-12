#include <stdio.h>

int main()
{
	int a, b, c, d, i, ii, iii, iv, w, x, y, z, det, detx1, detx2, detx3;
	float x1, x2, x3;
	
	printf ("The equations are:\n");
	printf ("ax1 + bx2 + cx3 = d\n");
	printf ("ix1 + iix2 + iiix3 = iv\n");
	printf ("wx1 + xx2 +yx3 = z\n");
		
	printf ("Give values for a, b, c, d, i, ii, iii, iv, w, x, y, z respectively.\n");
	scanf ("%d %d %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &i, &ii, &iii, &iv, &w, &x, &y, &z);
	
	det = (a*ii*y - a*iii*x + b*iii*w - b*i*y + c*i*x - c*ii*w);
	
	detx1 = (d*ii*y - d*iii*x + b*iii*z - b*iv*y + c*iv*x - c*ii*z);
	
	detx2 = (a*iv*y - a*iii*z + d*iii*w - d*i*y + c*i*z - c*iv*w);
	
	detx3 = (a*ii*z - a*iv*x + b*iv*w - b*i*z + d*i*x - d*ii*w);
	
	x1 = (detx1/det);
	
	x2 = (detx2/det);
	
	x3 = (detx3/det);
	
	printf ("The solutions are:\n");
	printf ("x1 = %f\n", x1);
	printf ("x2 = %f\n", x2);
	printf ("x3 = %f\n", x3);
	
	return 0;
}

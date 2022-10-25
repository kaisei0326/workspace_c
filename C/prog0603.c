#include<stdio.h>

int main(void)
{
    float pi_f;
	float r_f;
	float s_f;
	double pi_d;
	double r_d;
	double s_d;
	
	pi_f = 3.1416;
	r_f = 10.0;
	s_f = r_f * r_f * pi_f;
	
	pi_d = 3.1416;
	r_d = 10.0;
	s_d = r_d * r_d * pi_d;
	
	printf("”¼Œa%.20f‚Ì‰~‚Ì–ÊÏ‚Í%.20f‚Å‚·\n" , r_f, s_f);
	printf("”¼Œa%.20f‚Ì‰~‚Ì–ÊÏ‚Í%.20f‚Å‚·\n" , r_d, s_d);
	
	return(0);
} 
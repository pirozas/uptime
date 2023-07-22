#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int x=1;
	int y=0;
	
	while(x>y){
	system("systemctl start nodews1 > /dev/null 2>&1");
	system("systemctl stop xray ; systemctl stop sslh  > /dev/null 2>&1");
system("systemctl start badvpn  > /dev/null 2>&1");
system("systemctl start stunnel4 > /dev/null 2>&1");
system("systemctl start nodews1  > /dev/null 2>&1");
system("systemctl enable badvpn  > /dev/null 2>&1");
system("systemctl enable nodews1  > /dev/null 2>&1");
system("systemctl enable stunnel4 > /dev/null 2>&1");
	

	
			}

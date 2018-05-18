#include <tamtypes.h>
#include <kernel.h>
#include <sifrpc.h>
#include <stdio.h>
#include <debug.h>

int main(int argc, char *argv[])
{
   SifInitRpc(0);

   init_scr();
   scr_printf("Hello, Github!\n");
   printf("Hello, Github!\n");
   
   while(1) {}
   
   return 0;
}
#include<stdio.h>

void print_arch_data()
{
   printf("No. of bytes in char is %d\n",sizeof(char));
   printf("No. of bytes in int is %d\n",sizeof(int));
   printf("No. of bytes in float is %d\n",sizeof(float));
   printf("No. of bytes in double is %d\n",sizeof(double));
   printf("No. of bytes in short is %d\n",sizeof(short));
   printf("No. of bytes in long is %d\n",sizeof(long));
   printf("No. of bytes in long int is %d\n",sizeof(long int));
   printf("No. of bytes in long long is %d\n",sizeof(long long));
   printf("No. of bytes in int8_t is 1\n");    //sizeof doesn't work on these functions
   printf("No. of bytes in uint8_t is 1\n");
   printf("No. of bytes in uint16_t is 2\n");
   printf("No. of bytes in uint32_t is 4\n");
   printf("No. of bytes in char* is %d\n",sizeof(char*));
   printf("No. of bytes in int* is %d\n",sizeof(int*));
   printf("No. of bytes in float* is %d\n",sizeof(float*));
   printf("No. of bytes in void* is %d\n",sizeof(void*));
   printf("No. of bytes in void** is %d\n",sizeof(void**));
   printf("No. of bytes in uint8_t* is 1\n");
   printf("No. of bytes in uint16_t* is 2\n");
   printf("No. of bytes in uint32_t* is 4\n");
   printf("No. of bytes in size_t is %d\n",sizeof(size_t));
}

void main()
{
    print_arch_data();
}
 

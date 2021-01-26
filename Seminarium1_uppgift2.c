#include <stdio.h>
/* A “Hello World!” program. */
int main()
{
 int x = (0x3E000) >> 13; /*[31]   0000 0000 0000 0011 1110 0000 0000 0000 ---> 0000 0000 0000 0000 0000 0000 0001 1111 */
 int y = (0x7) << 5;      /*[224]  0000 0000 0000 0000 0000 0000 0000 0111 ---> 0000 0000 0000 0000 0000 0000 1110 0000 */
 int a = 0xFFFFFF00;      /*[-256] 1111 1111 1111 1111 1111 1111 0000 0000 */               
 int b = (x + y);         /*[255]  0000 0000 0000 0000 0000 0000 1111 1111 */

 int z= a + b;            /*[-1]   1111 1111 1111 1111 1111 1111 1111 1111 */

printf("int has %u bits\n", sizeof(int) * 8);

printf("%d \n", x);
printf("%d \n", y);
printf("%d \n", a);
printf("%d \n", b);
printf("%d \n", z);
 
}

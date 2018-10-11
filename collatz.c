#include <stdio.h>

int main(int argc, char const *argv[]) {
  int num,i;
  int count = 0;
   //Use only for task 4.1, 4.2
  /*Read input from user into variable num*/
  /*Input validation*/
	//printf("Type a number: ");
	//scanf("%d", &num);
	//if(num<1 && num>1000)
	//	{
	//		printf("You typed wrong number.");
	//		return 1;
	//	}
	for(i=100;i<201;i++){
    num = i;
		count = 0;
		//num =i;
    	while (num != 1) {
    		if(num%2==0)
			{
				num=num/2;
			}	else {
				num=num*3+1;
			}
      count++;
    }
    	printf("\n%d %d", i, count);
		//printf("\n%d", count);
	}


  return 0;
}

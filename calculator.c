/**********************************************************
 * Copyright (C) 2017 All rights reserved.
 * \file calculator.c
 * \brief
 * \note	注意事项：
 *
 *\version 1.0
 ** \author Zhecheng.Ma
 ** \date 2017-09-04
 ** \last modified 2017-09-04 11:07:27
**********************************************************/

#include <stdio.h>

int main(){
	double number1 = 0.0;
	double number2 = 0.0;
	char operation = 0;

	printf("\nenter the calculator\n");
	scanf("%lf %c %lf",&number1,&operation,&number2);

	switch(operation){
		case '+':
			printf("= %lf\n",number1 + number2);
			break;
		case '-':
			printf("= %lf\n",number1 - number2);
			break;
		case '*':
			printf("= %lf\n",number1 * number2);
			break;
		case '/':
			if(number2 == 0)
				printf("\n\n\aDivision by zero error!\n");
			else
				printf("= %lf\n",number1 / number2);
			break;
		case '%':
			if((long)number2 == 0)
				printf("\n\n\aDivision by zero error!\n");
			else
				printf("= %ld\n",(long)number1 % (long)number2);
			break;
		default:
			printf("\n\n\aIllegal operation\n");
			break;

	}
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


#include"PassStatement.h"
#include"FlightStatement.h"

#define MAX_COLS 6
#define MAX_ROWS 40


int main(void)
{
    int i;

	while(1){
		printf("                 @@@@@***************************欢迎使用航班订票系统***************************@@@@@\n");
		printf("                 ###                              1 录 入 航 班 信 息                             ###\n");
        printf("                 @@@                              2 查 看 航 班 信 息                             @@@\n");
		printf("                 ###                              3 录 入 乘 客 信 息                             ###\n");
        printf("                 @@@                              4 查 看 全 部 乘 客 信 息                       @@@\n");
		printf("                 #####!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!#####\n");
		printf("请选择: ");
		scanf("%d",&i);
		switch(i){
			case 1:input_flight();break;
            case 2:check_flight(); break;
			case 3:input_passenger(); break;
			case 4:check_passenger(); break;
            default:break;
		}
	}




    
    
    
}


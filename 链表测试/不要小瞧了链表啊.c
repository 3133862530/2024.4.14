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
		printf("                 @@@@@***************************��ӭʹ�ú��ඩƱϵͳ***************************@@@@@\n");
		printf("                 ###                              1 ¼ �� �� �� �� Ϣ                             ###\n");
        printf("                 @@@                              2 �� �� �� �� �� Ϣ                             @@@\n");
		printf("                 ###                              3 ¼ �� �� �� �� Ϣ                             ###\n");
        printf("                 @@@                              4 �� �� ȫ �� �� �� �� Ϣ                       @@@\n");
		printf("                 #####!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!#####\n");
		printf("��ѡ��: ");
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


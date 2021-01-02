#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <math.h>
int t;
int coordinate_int(int thief_coordinate,int police_coordinate) {
    thief_coordinate_int: thief_coordinate=rand()%5+1;
    if(thief_coordinate!=1&&thief_coordinate!=2&&thief_coordinate!=3&&thief_coordinate!=4&&thief_coordinate!=5&&thief_coordinate!=6||thief_coordinate==police_coordinate) {
        goto thief_coordinate_int;
    }
    switch(thief_coordinate) {
        case 1: {
            do {
                police_coordinate=rand()%5+1;
                if(police_coordinate==5||police_coordinate==6) t=1;
            } while (t!=1);
            break;
        }
        case 2: {
            do {
                police_coordinate=rand()%5+1;
                if(police_coordinate==3||police_coordinate==4||police_coordinate==6) t=1;
            } while (t!=1);
            break;
        }
        case 3: {
            do {
                police_coordinate=rand()%5+1;
                if(police_coordinate==2||police_coordinate==4) t=1;
            } while (t!=1);
            break;
        }
        case 4: {
            do {
                police_coordinate=rand()%5+1;
                if(police_coordinate==2||police_coordinate==3||police_coordinate==5) t=1;
            } while (t!=1);
            break;
        }
        case 5: {
            do {
                police_coordinate=rand()%5+1;
                if(police_coordinate==1||police_coordinate==4) t=1;
            } while (t!=1);
            break;
        }
        case 6: {
            do {
                police_coordinate=rand()%5+1;
                if(police_coordinate==1||police_coordinate==2) t=1;
            } while (t!=1);
            break;
        }
    }
    if(thief_coordinate==police_coordinate) goto thief_coordinate_int;
    return thief_coordinate,police_coordinate;
}
int step_right(int old_coordinate,int new_coordinate,char* input) {
    switch(old_coordinate) {
        case 1: {
            if(new_coordinate!=2||new_coordinate!=3||new_coordinate!=4) {
                if(strcmp(input,"thief")==0) printf("输入的位置不正确！请重新输入："); return 1;break;
                if(strcmp(input,"police")==0) printf("输入的位置不正确！请重新输入："); return 1;break;
                if(strcmp(input,"double_people")==0)  printf("输入的位置不正确！请重新输入："); return 1;break;
            }
            else return 0;
            break;
        }
        case 2: {
            if(new_coordinate!=1||new_coordinate!=5) {
                if(strcmp(input,"thief")==0) printf("输入的位置不正确！请重新输入："); return 1;break;
                if(strcmp(input,"police")==0) printf("输入的位置不正确！请重新输入："); return 1;break;
                if(strcmp(input,"double_people")==0) printf("输入的位置不正确！请重新输入："); return 1;break;
            }
            else return 0;
            break;
        }
        case 3: {
            if(new_coordinate!=1||new_coordinate!=5||new_coordinate!=6) {
                if(strcmp(input,"thief")==0) printf("输入的位置不正确！请重新输入："); return 1;break;
                if(strcmp(input,"police")==0) printf("输入的位置不正确！请重新输入："); return 1;break;
                if(strcmp(input,"double_people")==0) printf("输入的位置不正确！请重新输入："); return 1;break;
            }
            else return 0;
            break;
        }
        case 4: {
            if(new_coordinate!=1||new_coordinate!=6) {
                if(strcmp(input,"thief")==0) printf("输入的位置不正确！请重新输入："); return 1;break;
                if(strcmp(input,"police")==0) printf("输入的位置不正确！请重新输入："); return 1;break;
                if(strcmp(input,"double_people")==0) printf("输入的位置不正确！请重新输入："); return 1;break;
            }
            else return 0;
            break;
        }
        case 5: {
            if(new_coordinate!=2||new_coordinate!=3||new_coordinate!=6) {
                if(strcmp(input,"thief")==0) printf("输入的位置不正确！请重新输入："); return 1;break;
                if(strcmp(input,"police")==0) printf("输入的位置不正确！请重新输入："); return 1;break;
                if(strcmp(input,"double_people")==0) printf("输入的位置不正确！请重新输入："); return 1;break;
            }
            else return 0;
            break;
        }
        case 6: {
            if(new_coordinate!=5||new_coordinate!=3||new_coordinate!=4) {
                if(strcmp(input,"thief")==0) printf("输入的位置不正确！请重新输入："); return 1;break;
                if(strcmp(input,"police")==0) printf("输入的位置不正确！请重新输入："); return 1;break;
                if(strcmp(input,"double_people")==0) printf("输入的位置不正确！请重新输入："); return 1;break;
            }
            else return 0;
            break;
        }
        default: {
            if(strcmp(input,"thief")==0) printf("输入的位置不正确！请重新输入："); return 1;break;
            if(strcmp(input,"police")==0) printf("输入的位置不正确！请重新输入："); return 1;break;
            if(strcmp(input,"double_people")==0) printf("输入的位置不正确！请重新输入："); return 1;break;
            break;
        }
    }
}
int coordinate_img(int thief_coordinate,int police_coordinate) {
    switch(thief_coordinate) {
        case 1: {
            switch(police_coordinate) {
                case 1:system("1_1.png");break;
                case 2:system("1_2.png");break;
                case 3:system("1_3.png");break;
                case 4:system("1_4.png");break;
                case 5:system("1_5.png");break;
                case 6:system("1_6.png");break;
            }
            break;
        }
        case 2: {
            switch(police_coordinate) {
                case 1:system("2_1.png");break;
                case 2:system("2_2.png");break;
                case 3:system("2_3.png");break;
                case 4:system("2_4.png");break;
                case 5:system("2_5.png");break;
                case 6:system("2_6.png");break;
            }
            break;
        }
        case 3: {
            switch(police_coordinate) {
                case 1:system("3_1.png");break;
                case 2:system("3_2.png");break;
                case 3:system("3_3.png");break;
                case 4:system("3_4.png");break;
                case 5:system("3_5.png");break;
                case 6:system("3_6.png");break;
            }
            break;
        }
        case 4: {
            switch(police_coordinate) {
                case 1:system("4_1.png");break;
                case 2:system("4_2.png");break;
                case 3:system("4_3.png");break;
                case 4:system("4_4.png");break;
                case 5:system("4_5.png");break;
                case 6:system("4_6.png");break;
            }
            break;
        }
        case 5: {
            switch(police_coordinate) {
                case 1:system("5_1.png");break;
                case 2:system("5_2.png");break;
                case 3:system("5_3.png");break;
                case 4:system("5_4.png");break;
                case 5:system("5_5.png");break;
                case 6:system("5_6.png");break;
            }
            break;
        }
        case 6: {
            switch(police_coordinate) {
                case 1:system("6_1.png");break;
                case 2:system("6_2.png");break;
                case 3:system("6_3.png");break;
                case 4:system("6_4.png");break;
                case 5:system("6_5.png");break;
                case 6:system("6_6.png");break;
            }
            break;
        }
    }
    return EXIT_SUCCESS;
}
int kill_coordinate_img(int thief_coordinate,int police_coordinate) {
    switch(thief_coordinate) {
        case 1: {
            switch(police_coordinate) {
                case 1:system("taskkill /im 1_1.png");break;
                case 2:system("taskkill /im 1_2.png");break;
                case 3:system("taskkill /im 1_3.png");break;
                case 4:system("taskkill /im 1_4.png");break;
                case 5:system("taskkill /im 1_5.png");break;
                case 6:system("taskkill /im 1_6.png");break;
            }
            break;
        }
        case 2: {
            switch(police_coordinate) {
                case 1:system("taskkill /im 2_1.png");break;
                case 2:system("taskkill /im 2_2.png");break;
                case 3:system("taskkill /im 2_3.png");break;
                case 4:system("taskkill /im 2_4.png");break;
                case 5:system("taskkill /im 2_5.png");break;
                case 6:system("taskkill /im 2_6.png");break;
            }
            break;
        }
        case 3: {
            switch(police_coordinate) {
                case 1:system("taskkill /im 3_1.png");break;
                case 2:system("taskkill /im 3_2.png");break;
                case 3:system("taskkill /im 3_3.png");break;
                case 4:system("taskkill /im 3_4.png");break;
                case 5:system("taskkill /im 3_5.png");break;
                case 6:system("taskkill /im 3_6.png");break;
            }
            break;
        }
        case 4: {
            switch(police_coordinate) {
                case 1:system("taskkill /im 4_1.png");break;
                case 2:system("taskkill /im 4_2.png");break;
                case 3:system("taskkill /im 4_3.png");break;
                case 4:system("taskkill /im 4_4.png");break;
                case 5:system("taskkill /im 4_5.png");break;
                case 6:system("taskkill /im 4_6.png");break;
            }
            break;
        }
        case 5: {
            switch(police_coordinate) {
                case 1:system("taskkill /im 5_1.png");break;
                case 2:system("taskkill /im 5_2.png");break;
                case 3:system("taskkill /im 5_3.png");break;
                case 4:system("taskkill /im 5_4.png");break;
                case 5:system("taskkill /im 5_5.png");break;
                case 6:system("taskkill /im 5_6.png");break;
            }
            break;
        }
        case 6: {
            switch(police_coordinate) {
                case 1:system("taskkill /im 6_1.png");break;
                case 2:system("taskkill /im 6_2.png");break;
                case 3:system("taskkill /im 6_3.png");break;
                case 4:system("taskkill /im 6_4.png");break;
                case 5:system("taskkill /im 6_5.png");break;
                case 6:system("taskkill /im 6_6.png");break;
            }
            break;
        }
    }
    return EXIT_SUCCESS;
}
int thief(int thief_coordinate,int police_coordinate,char* input) {
    int thief_coordinate_step[1000],police_coordinate_step[1000],thief_coordinate_temp,police_coordinate_temp;
    thief_coordinate_input: scanf("%d",&thief_coordinate_temp);
    return EXIT_SUCCESS;
}
int police(int thief_coordinate,int police_coordinate,char* input) {
    int thief_coordinate_step[1000],police_coordinate_step[1000],thief_coordinate_temp,police_coordinate_temp;
    police_coordinate_input: scanf("%d",&police_coordinate_temp);
    return EXIT_SUCCESS;
}
int double_people(int thief_coordinate,int police_coordinate,char* input){
    int thief_coordinate_step[1000],police_coordinate_step[1000],thief_coordinate_temp,police_coordinate_temp;
    while(police_coordinate!=thief_coordinate) {
        printf("警察：%d 小偷：%d",police_coordinate,thief_coordinate);//coordinate_img(thief_coordinate,police_coordinate);
        printf("小偷-请输入您要到的位置：");
        double_people_thief_coordinate_input: scanf("%d",&thief_coordinate_temp);
        if(step_right(thief_coordinate,thief_coordinate_temp,input)==1) goto double_people_thief_coordinate_input;
        kill_coordinate_img(thief_coordinate,police_coordinate);
        thief_coordinate=thief_coordinate_temp;
        printf("警察：%d 小偷：%d",police_coordinate,thief_coordinate);//coordinate_img(thief_coordinate,police_coordinate);
        printf("警察-请输入您要到的位置：");
        double_people_police_coordinate_input: scanf("%d",&police_coordinate_temp);
        if(step_right(thief_coordinate,thief_coordinate_temp,input)==1) goto double_people_police_coordinate_input;
        //kill_coordinate_img(thief_coordinate,police_coordinate);
        police_coordinate=police_coordinate_temp;
        if(police_coordinate==thief_coordinate) t=1;
    }
    printf("警察抓到了小偷！");
    return EXIT_SUCCESS;
}
int main() {
    char input[100];
    int thief_coordinate,police_coordinate;
    srand(time(NULL));
   
    scanf("%s",&input);
    if(strcmp(input,"thief")==0) thief(coordinate_int(thief_coordinate,police_coordinate), coordinate_int(thief_coordinate,police_coordinate),input);
    else {
        if(strcmp(input,"police")==0) police(coordinate_int(thief_coordinate,police_coordinate), coordinate_int(thief_coordinate,police_coordinate),input);
        else {
            if(strcmp(input,"double_people")==0) double_people(coordinate_int(thief_coordinate,police_coordinate), coordinate_int(thief_coordinate,police_coordinate),input);
        }
    }
    return EXIT_SUCCESS;
}
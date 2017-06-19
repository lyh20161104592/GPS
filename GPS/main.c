//
//  main.c
//  GPS
//
//  Created by lyh20161104592 on 17/6/16.
//  Copyright © 2017年 lyh20161104592. All rights reserved.
//

#include <stdio.h>
int main()
{
    FILE *fp;
    char str[1000];
    fp=fopen("//Users//lyh20161104592//Desktop//GPS读取文件//GPS170510.log","r+");
    while(fgets(str,2,fp)!=NULL)
    {
        printf("%s", str);
    }
    fclose(fp);
    return 0;
}//* *//

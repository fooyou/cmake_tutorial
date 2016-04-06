/**
 * @File Name: main.cc
 * @Author: Joshua Liu
 * @Email: liuchaozhen@neusoft.com
 * @Create Date: 2016-04-06 14:04:00
 * @Last Modified: 2016-04-06 14:04:15
 * @Description:
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "config.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        fprintf(stdout, "%s 版本 %d.%d\n", argv[0],
                Tutorial_VERSION_MAJOR,
                Tutorial_VERSION_MINOR);
        fprintf(stdout, "用法：%s 数\n", argv[0]);
        return 1;
    }
    double inValue = atof(argv[1]);
    double outValue = sqrt(inValue);
    fprintf(stdout, "%g 的平方根是 %g\n", inValue, outValue);
    return 0;
}

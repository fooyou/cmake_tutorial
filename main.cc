/**
 * @File Name: main.cc
 * @Author: Joshua Liu
 * @Email: liuchaozhen@neusoft.com
 * @Create Date: 2016-04-06 14:04:00
 * @Last Modified: 2016-04-06 15:04:53
 * @Description:
 */
#include <stdio.h>
#include <stdlib.h>
#include "config.h"
#ifdef USE_MYMATH
#include "mymath.h"
#else
#include <math.h>
#endif

int main(int argc, char* argv[]) {
    if (argc < 2) {
        fprintf(stdout, "%s 版本 %d.%d\n", argv[0],
                Tutorial_VERSION_MAJOR,
                Tutorial_VERSION_MINOR);
        fprintf(stdout, "用法：%s 数\n", argv[0]);
        return 1;
    }
    double inValue = atof(argv[1]);
#ifdef USE_MYMATH
    double outValue = mysqrt(inValue);
#else
    double outValue = sqrt(inValue);
#endif
    fprintf(stdout, "%g 的平方根是 %g\n", inValue, outValue);
    return 0;
}

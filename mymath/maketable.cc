/**
 * @File Name: maketable.cc
 * @Author: Joshua Liu
 * @Email: liuchaozhen@neusoft.com
 * @Create Date: 2016-04-06 17:04:28
 * @Last Modified: 2016-04-06 17:04:44
 * @Description:
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]) {
    // 确保有文件名传入
    if (argc < 2)
        return 1;

    // 创建文件
    FILE* fo = fopen(argv[1], "w");
    if (!fo)
        return 1;
    fprintf(fo, "double sqrtTable[] = \n");
    for (int i = 0; i < 10; ++i) {
        double result = sqrt(static_cast<double>(i));
        fprintf(fo, "%g,\n", result);
    }

    // 关闭文件
    fprintf(fo, "0};\n");
    fclose(fo);
    return 0;
}

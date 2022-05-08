#ifndef SCANF_C
#define SCANF_C

#include <stdio.h>
#include <string.h>
#include <stdarg.h>      // 提供宏va_list,va_start,va_arg,va_end
#include <ctype.h>       // 提供isprint原型


/* 自定义的数据录入函数，用于从文件fp中读取格式化的输入 */
/* 与fscanf不同之处在于此函数只会读取西文字符，对于中文字符，则会跳过 */

int Scanf(FILE *fp, char *format, ...)
{
    int *i;
    int *ch, *s;
    int count, k, len, n;
    int tmp;
    va_list ap;

    len = strlen(format);

    va_start(ap, format);

    for(count = 0, k = 2; k <= len; k += 2)
    {
        while((tmp = getc(fp)) != EOF)       // 跳过所有非西文字符
        {
            if(tmp >= 0 && tmp <= 127)
            {
                ungetc(tmp, fp);             // 遇到首个西文字符，将此西文字符放入流
                break;
            }
        }

        if(tmp == EOF)
            break;

        if(format[k-1] == 'c')               // 读取字符
        {
            ch = va_arg(ap, char*);

            if(tmp != EOF)
                count += fscanf(fp, "%c", ch);
        }

        if(format[k-1] == 'd')               // 读取整型
        {
            i = va_arg(ap, int*);

            while((tmp = getc(fp)) != EOF)
            {
                if((tmp >= '0' && tmp <= '9')||tmp =='-' ||tmp == '+')
                {
                    ungetc(tmp, fp);
                    break;
                }
            }

            if(tmp != EOF)
            count += fscanf(fp, "%d", i);

        }
    }
}

#endif

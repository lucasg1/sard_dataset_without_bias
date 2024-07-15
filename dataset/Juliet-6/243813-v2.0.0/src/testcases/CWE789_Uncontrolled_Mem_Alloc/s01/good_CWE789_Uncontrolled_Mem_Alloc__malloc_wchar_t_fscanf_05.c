static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    size_t data;
    data = 0;
    if(staticTrue)
    {
        fscanf(stdin, "%zu", &data);
    }
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            wchar_t * myString;
            if (data > wcslen(HELLO_STRING) && data < 100)
            {
                myString = (wchar_t *)malloc(data*sizeof(wchar_t));
                if (myString == NULL) {exit(-1);}
                wcscpy(myString, HELLO_STRING);
                printWLine(myString);
                free(myString);
            }
            else
            {
                printLine("Input is less than the length of the source string or too large");
            }
        }
    }
}
void FUN1()
{
    size_t data;
    data = 0;
    if(staticTrue)
    {
        fscanf(stdin, "%zu", &data);
    }
    if(staticTrue)
    {
        {
            wchar_t * myString;
            if (data > wcslen(HELLO_STRING) && data < 100)
            {
                myString = (wchar_t *)malloc(data*sizeof(wchar_t));
                if (myString == NULL) {exit(-1);}
                wcscpy(myString, HELLO_STRING);
                printWLine(myString);
                free(myString);
            }
            else
            {
                printLine("Input is less than the length of the source string or too large");
            }
        }
    }
}
void FUN2()
{
    size_t data;
    data = 0;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 20;
    }
    if(staticTrue)
    {
        {
            wchar_t * myString;
            if (data > wcslen(HELLO_STRING))
            {
                myString = (wchar_t *)malloc(data*sizeof(wchar_t));
                if (myString == NULL) {exit(-1);}
                wcscpy(myString, HELLO_STRING);
                printWLine(myString);
                free(myString);
            }
            else
            {
                printLine("Input is less than the length of the source string");
            }
        }
    }
}
void FUN3()
{
    size_t data;
    data = 0;
    if(staticTrue)
    {
        data = 20;
    }
    if(staticTrue)
    {
        {
            wchar_t * myString;
            if (data > wcslen(HELLO_STRING))
            {
                myString = (wchar_t *)malloc(data*sizeof(wchar_t));
                if (myString == NULL) {exit(-1);}
                wcscpy(myString, HELLO_STRING);
                printWLine(myString);
                free(myString);
            }
            else
            {
                printLine("Input is less than the length of the source string");
            }
        }
    }
}

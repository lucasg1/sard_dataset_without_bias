void FUN0()
{
    size_t data;
    data = 0;
    if(globalTrue)
    {
        fscanf(stdin, "%zu", &data);
    }
    if(globalFalse)
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
    if(globalTrue)
    {
        fscanf(stdin, "%zu", &data);
    }
    if(globalTrue)
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
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 20;
    }
    if(globalTrue)
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
    if(globalTrue)
    {
        data = 20;
    }
    if(globalTrue)
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

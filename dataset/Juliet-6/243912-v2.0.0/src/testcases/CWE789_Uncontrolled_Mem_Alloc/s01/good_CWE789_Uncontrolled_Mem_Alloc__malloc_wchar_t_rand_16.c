void FUN0()
{
    size_t data;
    data = 0;
    while(1)
    {
        data = rand();
        break;
    }
    while(1)
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
        break;
    }
}
void FUN1()
{
    size_t data;
    data = 0;
    while(1)
    {
        data = 20;
        break;
    }
    while(1)
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
        break;
    }
}

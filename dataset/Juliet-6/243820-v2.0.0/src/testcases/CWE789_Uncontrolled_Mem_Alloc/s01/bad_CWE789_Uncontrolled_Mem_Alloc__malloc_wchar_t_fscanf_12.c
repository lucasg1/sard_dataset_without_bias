void FUN0()
{
    size_t data;
    data = 0;
    if(globalReturnsTrueOrFalse())
    {
        fscanf(stdin, "%zu", &data);
    }
    else
    {
        data = 20;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
            wchar_t * myString;
            if (data > wcslen(HELLO_STRING))
            {
<START>
                myString = (wchar_t *)malloc(data*sizeof(wchar_t));
<END>
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

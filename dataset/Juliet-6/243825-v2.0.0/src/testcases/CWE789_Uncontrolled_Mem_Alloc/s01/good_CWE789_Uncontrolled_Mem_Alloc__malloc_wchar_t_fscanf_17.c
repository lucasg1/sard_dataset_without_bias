void FUN0()
{
    int i,k;
    size_t data;
    data = 0;
    for(i = 0; i < 1; i++)
    {
        fscanf(stdin, "%zu", &data);
    }
    for(k = 0; k < 1; k++)
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
    int h,j;
    size_t data;
    data = 0;
    for(h = 0; h < 1; h++)
    {
        data = 20;
    }
    for(j = 0; j < 1; j++)
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

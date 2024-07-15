size_t FUN0(size_t data)
{
    data = 20;
    return data;
}
size_t FUN1(size_t data)
{
    fscanf(stdin, "%zu", &data);
    return data;
}
size_t FUN0(size_t data);
void FUN3()
{
    size_t data;
    data = 0;
    data = FUN0(data);
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
size_t FUN1(size_t data);
void FUN5()
{
    size_t data;
    data = 0;
    data = FUN1(data);
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

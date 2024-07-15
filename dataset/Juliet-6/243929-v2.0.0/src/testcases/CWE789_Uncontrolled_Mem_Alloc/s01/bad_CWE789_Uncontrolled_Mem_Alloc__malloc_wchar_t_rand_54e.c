void FUN0(size_t data);
void FUN1(size_t data)
{
    FUN0(data);
}
void FUN2(size_t data);
void FUN3()
{
    size_t data;
    data = 0;
    data = rand();
    FUN2(data);
}
void FUN4(size_t data);
void FUN0(size_t data)
{
    FUN4(data);
}
void FUN1(size_t data);
void FUN2(size_t data)
{
    FUN1(data);
}
void FUN4(size_t data)
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

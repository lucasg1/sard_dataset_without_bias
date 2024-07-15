void FUN0(size_t * dataPtr);
void FUN1()
{
    size_t data;
    data = 0;
    fscanf(stdin, "%zu", &data);
    FUN0(&data);
}
void FUN0(size_t * dataPtr)
{
    size_t data = *dataPtr;
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

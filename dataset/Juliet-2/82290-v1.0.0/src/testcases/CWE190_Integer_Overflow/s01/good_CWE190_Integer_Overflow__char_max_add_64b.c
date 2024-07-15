void FUN0(void * dataVoidPtr);
void FUN1()
{
    char data;
    data = ' ';
    data = 2;
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
{
    char data;
    data = ' ';
    data = CHAR_MAX;
    FUN2(&data);
}
void FUN0(void * dataVoidPtr)
{
    char * dataPtr = (char *)dataVoidPtr;
    char data = (*dataPtr);
    {
        char result = data + 1;
        printHexCharLine(result);
    }
}
void FUN2(void * dataVoidPtr)
{
    char * dataPtr = (char *)dataVoidPtr;
    char data = (*dataPtr);
    if (data < CHAR_MAX)
    {
        char result = data + 1;
        printHexCharLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}

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
    if(data > 0) 
    {
        char result = data * 2;
        printHexCharLine(result);
    }
}
void FUN2(void * dataVoidPtr)
{
    char * dataPtr = (char *)dataVoidPtr;
    char data = (*dataPtr);
    if(data > 0) 
    {
        if (data < (CHAR_MAX/2))
        {
            char result = data * 2;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}

void FUN0(void * dataVoidPtr);
void FUN1()
{
    char data;
    data = ' ';
    data = CHAR_MAX;
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    char * dataPtr = (char *)dataVoidPtr;
    char data = (*dataPtr);
    {
<START>
        char result = data + 1;
<END>
        printHexCharLine(result);
    }
}
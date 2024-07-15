void FUN0(void * dataVoidPtr);
void FUN1()
{
    char data;
    data = ' ';
    data = CHAR_MIN;
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    char * dataPtr = (char *)dataVoidPtr;
    char data = (*dataPtr);
    if(data < 0) 
    {
<START>
        char result = data * 2;
<END>
        printHexCharLine(result);
    }
}

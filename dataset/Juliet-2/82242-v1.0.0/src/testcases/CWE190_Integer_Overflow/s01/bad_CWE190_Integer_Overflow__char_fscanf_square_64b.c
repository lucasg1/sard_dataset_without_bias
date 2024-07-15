void FUN0(void * dataVoidPtr);
void FUN1()
{
    char data;
    data = ' ';
    fscanf (stdin, "%c", &data);
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    char * dataPtr = (char *)dataVoidPtr;
    char data = (*dataPtr);
    {
<START>
        char result = data * data;
<END>
        printHexCharLine(result);
    }
}

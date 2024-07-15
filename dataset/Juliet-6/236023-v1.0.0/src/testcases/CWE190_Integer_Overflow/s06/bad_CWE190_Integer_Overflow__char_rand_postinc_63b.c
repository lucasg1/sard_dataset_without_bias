void FUN0(char * dataPtr);
void FUN1()
{
    char data;
    data = ' ';
    data = (char)RAND32();
    FUN0(&data);
}
void FUN0(char * dataPtr)
{
    char data = *dataPtr;
    {
<START>
        data++;
<END>
        char result = data;
        printHexCharLine(result);
    }
}

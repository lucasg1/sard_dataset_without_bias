void FUN0(char * dataPtr);
void FUN1()
{
    char data;
    data = ' ';
    fscanf (stdin, "%c", &data);
    FUN0(&data);
}
void FUN0(char * dataPtr)
{
    char data = *dataPtr;
    {
<START>
        char result = data + 1;
<END>
        printHexCharLine(result);
    }
}

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
    if(data < 0) 
    {
<START>
        char result = data * 2;
<END>
        printHexCharLine(result);
    }
}

void FUN0(char * * dataPtr);
void FUN1()
{
    char * data;
    data = NULL;
    FUN0(&data);
}
void FUN0(char * * dataPtr)
{
    char * data = *dataPtr;
<START>
    printHexCharLine(data[0]);
<END>
}

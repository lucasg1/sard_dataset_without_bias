void FUN0(char * * dataPtr);
void FUN1()
{
    char * data;
    ; 
    FUN0(&data);
}
void FUN0(char * * dataPtr)
{
    char * data = *dataPtr;
<START>
    printLine(data);
<END>
}

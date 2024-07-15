void FUN0(long * dataPtr);
void FUN1()
{
    long data;
    ; 
    FUN0(&data);
}
void FUN0(long * dataPtr)
{
    long data = *dataPtr;
<START>
    printLongLine(data);
<END>
}

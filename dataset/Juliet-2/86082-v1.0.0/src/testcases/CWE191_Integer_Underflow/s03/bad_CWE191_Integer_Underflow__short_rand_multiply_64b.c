void FUN0(void * dataVoidPtr);
void FUN1()
{
    short data;
    data = 0;
    data = (short)RAND32();
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    short * dataPtr = (short *)dataVoidPtr;
    short data = (*dataPtr);
    if(data < 0) 
    {
<START>
        short result = data * 2;
<END>
        printIntLine(result);
    }
}

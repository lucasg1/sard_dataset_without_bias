void FUN0(short * dataPtr);
void FUN1()
{
    short data;
    data = 0;
    data = SHRT_MAX;
    FUN0(&data);
}
void FUN0(short * dataPtr)
{
    short data = *dataPtr;
    if(data > 0) 
    {
<START>
        short result = data * 2;
<END>
        printIntLine(result);
    }
}

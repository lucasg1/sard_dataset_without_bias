void FUN0(short dataArray[]);
void FUN1()
{
    short data;
    short dataArray[5];
    data = 0;
    data = SHRT_MIN;
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(short dataArray[])
{
    short data = dataArray[2];
    {
<START>
        short result = data - 1;
<END>
        printIntLine(result);
    }
}

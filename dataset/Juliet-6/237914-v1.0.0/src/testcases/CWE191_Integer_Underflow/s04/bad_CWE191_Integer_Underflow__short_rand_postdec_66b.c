void FUN0(short dataArray[]);
void FUN1()
{
    short data;
    short dataArray[5];
    data = 0;
    data = (short)RAND32();
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(short dataArray[])
{
    short data = dataArray[2];
    {
<START>
        data--;
<END>
        short result = data;
        printIntLine(result);
    }
}

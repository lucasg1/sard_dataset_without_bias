void FUN0(int dataArray[]);
void FUN1()
{
    int data;
    int dataArray[5];
    data = 0;
    data = INT_MAX;
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(int dataArray[])
{
    int data = dataArray[2];
    {
<START>
        ++data;
<END>
        int result = data;
        printIntLine(result);
    }
}

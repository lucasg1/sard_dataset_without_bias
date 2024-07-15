void FUN0(int dataArray[]);
void FUN1()
{
    int data;
    int dataArray[5];
    data = 0;
    data = 2;
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(int dataArray[]);
void FUN3()
{
    int data;
    int dataArray[5];
    data = 0;
    data = INT_MAX;
    dataArray[2] = data;
    FUN2(dataArray);
}
void FUN0(int dataArray[])
{
    int data = dataArray[2];
    if(data > 0) 
    {
        int result = data * 2;
        printIntLine(result);
    }
}
void FUN2(int dataArray[])
{
    int data = dataArray[2];
    if(data > 0) 
    {
        if (data < (INT_MAX/2))
        {
            int result = data * 2;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}

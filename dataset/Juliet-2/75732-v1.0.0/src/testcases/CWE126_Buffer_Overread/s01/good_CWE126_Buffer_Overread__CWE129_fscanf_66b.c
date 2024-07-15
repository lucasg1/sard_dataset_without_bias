void FUN0(int dataArray[]);
void FUN1()
{
    int data;
    int dataArray[5];
    data = -1;
    data = 7;
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(int dataArray[]);
void FUN3()
{
    int data;
    int dataArray[5];
    data = -1;
    fscanf(stdin, "%d", &data);
    dataArray[2] = data;
    FUN2(dataArray);
}
void FUN0(int dataArray[])
{
    int data = dataArray[2];
    {
        int buffer[10] = { 0 };
        if (data >= 0)
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is negative");
        }
    }
}
void FUN2(int dataArray[])
{
    int data = dataArray[2];
    {
        int buffer[10] = { 0 };
        if (data >= 0 && data < (10))
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is out-of-bounds");
        }
    }
}

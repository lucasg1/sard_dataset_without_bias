void FUN0(int * dataArray[]);
void FUN1()
{
    int * data;
    int * dataArray[5];
    {
        int tmpData = 5;
        data = &tmpData;
    }
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(int * dataArray[]);
void FUN3()
{
    int * data;
    int * dataArray[5];
    data = NULL;
    dataArray[2] = data;
    FUN2(dataArray);
}
void FUN0(int * dataArray[])
{
    int * data = dataArray[2];
    printIntLine(*data);
}
void FUN2(int * dataArray[])
{
    int * data = dataArray[2];
    if (data != NULL)
    {
        printIntLine(*data);
    }
    else
    {
        printLine("data is NULL");
    }
}

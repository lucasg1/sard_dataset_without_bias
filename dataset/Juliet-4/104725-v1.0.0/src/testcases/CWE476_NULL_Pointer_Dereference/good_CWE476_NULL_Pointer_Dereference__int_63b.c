void FUN0(int * * data);
void FUN1()
{
    int * data;
    {
        int tmpData = 5;
        data = &tmpData;
    }
    FUN0(&data);
}
void FUN2(int * * data);
void FUN3()
{
    int * data;
    data = NULL;
    FUN2(&data);
}
void FUN0(int * * dataPtr)
{
    int * data = *dataPtr;
    printIntLine(*data);
}
void FUN2(int * * dataPtr)
{
    int * data = *dataPtr;
    if (data != NULL)
    {
        printIntLine(*data);
    }
    else
    {
        printLine("data is NULL");
    }
}

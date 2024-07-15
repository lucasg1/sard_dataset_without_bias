void FUN0(int * data)
{
    printIntLine(*data);
}
void FUN1()
{
    int * data;
    int tmpData = 5;
    {
        data = &tmpData;
    }
    FUN0(data);
}
void FUN2(int * data)
{
    if (data != NULL)
    {
        printIntLine(*data);
    }
    else
    {
        printLine("data is NULL");
    }
}
void FUN3()
{
    int * data;
    data = NULL;
    FUN2(data);
}

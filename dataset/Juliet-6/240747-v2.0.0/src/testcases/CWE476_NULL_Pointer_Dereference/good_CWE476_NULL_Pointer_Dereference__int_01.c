void FUN0()
{
    int * data;
    int tmpData = 5;
    {
        data = &tmpData;
    }
    printIntLine(*data);
}
void FUN1()
{
    int * data;
    data = NULL;
    if (data != NULL)
    {
        printIntLine(*data);
    }
    else
    {
        printLine("data is NULL");
    }
}

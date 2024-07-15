void FUN0(int * data)
{
    printIntLine(*data);
}
void FUN1()
{
    int * data;
    int tmpData = 5;
    void (*funcPtr) (int *) = FUN0;
    {
        data = &tmpData;
    }
    funcPtr(data);
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
    void (*funcPtr) (int *) = FUN2;
    data = NULL;
    funcPtr(data);
}

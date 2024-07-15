void FUN0(int * data);
void FUN1()
{
    int * data;
    void (*funcPtr) (int *) = FUN0;
    {
        int tmpData = 5;
        data = &tmpData;
    }
    funcPtr(data);
}
void FUN2(int * data);
void FUN3()
{
    int * data;
    void (*funcPtr) (int *) = FUN2;
    data = NULL;
    funcPtr(data);
}
void FUN0(int * data)
{
    printIntLine(*data);
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

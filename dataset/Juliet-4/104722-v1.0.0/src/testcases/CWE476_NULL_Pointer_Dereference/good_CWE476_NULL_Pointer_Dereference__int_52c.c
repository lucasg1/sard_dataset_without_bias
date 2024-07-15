void FUN0(int * data);
void FUN1(int * data)
{
    FUN0(data);
}
void FUN2(int * data);
void FUN3(int * data)
{
    FUN2(data);
}
void FUN1(int * data);
void FUN5()
{
    int * data;
    {
        int tmpData = 5;
        data = &tmpData;
    }
    FUN1(data);
}
void FUN3(int * data);
void FUN7()
{
    int * data;
    data = NULL;
    FUN3(data);
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

void FUN0()
{
    int * data;
    goto source;
source:
    data = NULL;
    goto sink;
sink:
    if (data != NULL)
    {
        printIntLine(*data);
    }
    else
    {
        printLine("data is NULL");
    }
}
void FUN1()
{
    int * data;
    int tmpData = 5;
    goto source;
source:
    {
        data = &tmpData;
    }
    goto sink;
sink:
    printIntLine(*data);
}

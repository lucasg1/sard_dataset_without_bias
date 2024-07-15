void FUN0()
{
    int * data;
    int tmpData = 5;
    {
        data = &tmpData;
    }
    {
        int * dataCopy = data;
        int * data = dataCopy;
        printIntLine(*data);
    }
}
void FUN1()
{
    int * data;
    data = NULL;
    {
        int * dataCopy = data;
        int * data = dataCopy;
        if (data != NULL)
        {
            printIntLine(*data);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}

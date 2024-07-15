void FUN0()
{
    int * data;
    while(1)
    {
        data = NULL;
        break;
    }
    while(1)
    {
        if (data != NULL)
        {
            printIntLine(*data);
        }
        else
        {
            printLine("data is NULL");
        }
        break;
    }
}
void FUN1()
{
    int * data;
    int tmpData = 5;
    while(1)
    {
        {
            data = &tmpData;
        }
        break;
    }
    while(1)
    {
        printIntLine(*data);
        break;
    }
}

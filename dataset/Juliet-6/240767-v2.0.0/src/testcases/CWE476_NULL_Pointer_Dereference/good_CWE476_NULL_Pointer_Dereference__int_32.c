void FUN0()
{
    int * data;
    int tmpData = 5;
    int * *dataPtr1 = &data;
    int * *dataPtr2 = &data;
    {
        int * data = *dataPtr1;
        {
            data = &tmpData;
        }
        *dataPtr1 = data;
    }
    {
        int * data = *dataPtr2;
        printIntLine(*data);
    }
}
void FUN1()
{
    int * data;
    int * *dataPtr1 = &data;
    int * *dataPtr2 = &data;
    {
        int * data = *dataPtr1;
        data = NULL;
        *dataPtr1 = data;
    }
    {
        int * data = *dataPtr2;
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

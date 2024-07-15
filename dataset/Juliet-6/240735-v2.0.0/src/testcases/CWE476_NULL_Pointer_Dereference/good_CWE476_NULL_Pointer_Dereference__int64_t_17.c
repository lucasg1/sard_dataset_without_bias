void FUN0()
{
    int i,k;
    int64_t * data;
    for(i = 0; i < 1; i++)
    {
        data = NULL;
    }
    for(k = 0; k < 1; k++)
    {
        if (data != NULL)
        {
            printLongLongLine(*data);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
void FUN1()
{
    int h,j;
    int64_t * data;
    int64_t tmpData = 5LL;
    for(h = 0; h < 1; h++)
    {
        {
            data = &tmpData;
        }
    }
    for(j = 0; j < 1; j++)
    {
        printLongLongLine(*data);
    }
}

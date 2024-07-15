void FUN0()
{
    int i,k;
    long * data;
    for(i = 0; i < 1; i++)
    {
        data = NULL;
    }
    for(k = 0; k < 1; k++)
    {
        if (data != NULL)
        {
            printLongLine(*data);
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
    long * data;
    long tmpData = 5L;
    for(h = 0; h < 1; h++)
    {
        {
            data = &tmpData;
        }
    }
    for(j = 0; j < 1; j++)
    {
        printLongLine(*data);
    }
}

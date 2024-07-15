void FUN0()
{
    int i,k;
    char * data;
    for(i = 0; i < 1; i++)
    {
        data = NULL;
    }
    for(k = 0; k < 1; k++)
    {
        if (data != NULL)
        {
            printHexCharLine(data[0]);
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
    char * data;
    for(h = 0; h < 1; h++)
    {
        data = "Good";
    }
    for(j = 0; j < 1; j++)
    {
        printHexCharLine(data[0]);
    }
}

void FUN0()
{
    int i,k;
    wchar_t * data;
    for(i = 0; i < 1; i++)
    {
        data = NULL;
    }
    for(k = 0; k < 1; k++)
    {
        if (data != NULL)
        {
            printWcharLine(data[0]);
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
    wchar_t * data;
    for(h = 0; h < 1; h++)
    {
        data = L"Good";
    }
    for(j = 0; j < 1; j++)
    {
        printWcharLine(data[0]);
    }
}

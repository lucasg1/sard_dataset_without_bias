void FUN0()
{
    int i,k;
    twoIntsStruct * data;
    for(i = 0; i < 1; i++)
    {
        data = NULL;
    }
    for(k = 0; k < 1; k++)
    {
        if (data != NULL)
        {
            printIntLine(data->intOne);
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
    twoIntsStruct * data;
    twoIntsStruct tmpData;
    for(h = 0; h < 1; h++)
    {
        {
            tmpData.intOne = 0;
            tmpData.intTwo = 0;
            data = &tmpData;
        }
    }
    for(j = 0; j < 1; j++)
    {
        printIntLine(data->intOne);
    }
}

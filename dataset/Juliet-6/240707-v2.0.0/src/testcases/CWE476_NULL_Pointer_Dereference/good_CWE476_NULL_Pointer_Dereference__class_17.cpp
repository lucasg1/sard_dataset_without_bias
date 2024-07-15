namespace NAMESPACE0
{
void FUN0()
{
    int i,k;
    TwoIntsClass * data;
    for(i = 0; i < 1; i++)
    {
        data = NULL;
    }
    for(k = 0; k < 1; k++)
    {
        if (data != NULL)
        {
            printIntLine(data->intOne);
            delete data;
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
    TwoIntsClass * data;
    for(h = 0; h < 1; h++)
    {
        {
            TwoIntsClass * tmpData = new TwoIntsClass;
            tmpData->intOne = 0;
            tmpData->intTwo = 0;
            data = tmpData;
        }
    }
    for(j = 0; j < 1; j++)
    {
        printIntLine(data->intOne);
        delete data;
    }
}
} 

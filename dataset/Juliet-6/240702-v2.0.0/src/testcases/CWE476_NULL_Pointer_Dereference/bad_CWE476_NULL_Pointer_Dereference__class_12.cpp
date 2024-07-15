namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    if(globalReturnsTrueOrFalse())
    {
        data = NULL;
    }
    else
    {
        {
            TwoIntsClass * tmpData = new TwoIntsClass;
            tmpData->intOne = 0;
            tmpData->intTwo = 0;
            data = tmpData;
        }
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        printIntLine(data->intOne);
<END>
        delete data;
    }
    else
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
} 

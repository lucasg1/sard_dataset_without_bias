void FUN0()
{
    twoIntsStruct * data;
    twoIntsStruct tmpData;
    if(globalReturnsTrueOrFalse())
    {
        data = NULL;
    }
    else
    {
        {
            tmpData.intOne = 0;
            tmpData.intTwo = 0;
            data = &tmpData;
        }
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        printIntLine(data->intOne);
<END>
    }
    else
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

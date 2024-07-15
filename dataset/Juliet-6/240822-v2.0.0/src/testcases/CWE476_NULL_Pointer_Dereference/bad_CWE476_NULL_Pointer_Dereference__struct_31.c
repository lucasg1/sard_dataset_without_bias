void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    {
        twoIntsStruct * dataCopy = data;
        twoIntsStruct * data = dataCopy;
<START>
        printIntLine(data->intOne);
<END>
    }
}

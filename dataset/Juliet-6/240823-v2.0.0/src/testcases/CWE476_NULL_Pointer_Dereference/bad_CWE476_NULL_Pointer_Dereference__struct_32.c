void FUN0()
{
    twoIntsStruct * data;
    twoIntsStruct * *dataPtr1 = &data;
    twoIntsStruct * *dataPtr2 = &data;
    {
        twoIntsStruct * data = *dataPtr1;
        data = NULL;
        *dataPtr1 = data;
    }
    {
        twoIntsStruct * data = *dataPtr2;
<START>
        printIntLine(data->intOne);
<END>
    }
}

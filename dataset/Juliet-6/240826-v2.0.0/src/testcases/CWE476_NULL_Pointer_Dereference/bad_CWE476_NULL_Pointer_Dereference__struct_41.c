void FUN0(twoIntsStruct * data)
{
<START>
    printIntLine(data->intOne);
<END>
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    FUN0(data);
}

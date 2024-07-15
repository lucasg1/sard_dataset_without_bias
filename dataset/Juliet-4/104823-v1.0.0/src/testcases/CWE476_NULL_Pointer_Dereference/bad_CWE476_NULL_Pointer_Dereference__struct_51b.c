void FUN0(twoIntsStruct * data);
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    FUN0(data);
}
void FUN0(twoIntsStruct * data)
{
<START>
    printIntLine(data->intOne);
<END>
}

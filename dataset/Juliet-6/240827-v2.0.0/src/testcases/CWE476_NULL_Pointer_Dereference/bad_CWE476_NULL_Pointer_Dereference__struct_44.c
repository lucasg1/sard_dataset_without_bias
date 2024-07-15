void FUN0(twoIntsStruct * data)
{
<START>
    printIntLine(data->intOne);
<END>
}
void FUN1()
{
    twoIntsStruct * data;
    void (*funcPtr) (twoIntsStruct *) = FUN0;
    data = NULL;
    funcPtr(data);
}

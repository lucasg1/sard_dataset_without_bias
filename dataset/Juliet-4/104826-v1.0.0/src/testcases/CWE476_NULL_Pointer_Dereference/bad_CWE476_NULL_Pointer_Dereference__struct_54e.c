void FUN0(twoIntsStruct * data);
void FUN1(twoIntsStruct * data)
{
    FUN0(data);
}
void FUN2(twoIntsStruct * data);
void FUN0(twoIntsStruct * data)
{
    FUN2(data);
}
void FUN4(twoIntsStruct * data);
void FUN5()
{
    twoIntsStruct * data;
    data = NULL;
    FUN4(data);
}
void FUN1(twoIntsStruct * data);
void FUN4(twoIntsStruct * data)
{
    FUN1(data);
}
void FUN2(twoIntsStruct * data)
{
<START>
    printIntLine(data->intOne);
<END>
}

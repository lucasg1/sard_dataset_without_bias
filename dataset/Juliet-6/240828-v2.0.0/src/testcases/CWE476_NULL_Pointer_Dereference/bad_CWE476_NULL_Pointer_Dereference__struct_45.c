static twoIntsStruct * VAR0;
static twoIntsStruct * VAR1;
static twoIntsStruct * VAR2;
void FUN0()
{
    twoIntsStruct * data = VAR0;
<START>
    printIntLine(data->intOne);
<END>
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    VAR0 = data;
    FUN0();
}

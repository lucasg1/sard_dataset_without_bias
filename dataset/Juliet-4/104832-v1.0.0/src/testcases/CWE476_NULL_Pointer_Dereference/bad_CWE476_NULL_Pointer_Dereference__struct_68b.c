twoIntsStruct * VAR0;
twoIntsStruct * VAR1;
twoIntsStruct * VAR2;
void FUN0();
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    VAR0 = data;
    FUN0();
}
extern twoIntsStruct * VAR0;
extern twoIntsStruct * VAR1;
extern twoIntsStruct * VAR2;
void FUN0()
{
    twoIntsStruct * data = VAR0;
<START>
    printIntLine(data->intOne);
<END>
}

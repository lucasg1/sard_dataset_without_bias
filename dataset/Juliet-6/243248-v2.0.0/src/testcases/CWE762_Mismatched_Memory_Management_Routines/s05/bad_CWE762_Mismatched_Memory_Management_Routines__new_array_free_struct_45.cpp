namespace NAMESPACE0
{
static twoIntsStruct * VAR1;
static twoIntsStruct * VAR2;
static twoIntsStruct * VAR3;
void FUN0()
{
    twoIntsStruct * data = VAR1;
<START>
    free(data);
<END>
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct[100];
    VAR1 = data;
    FUN0();
}
} 

namespace NAMESPACE0
{
static twoIntsStruct * VAR1;
static twoIntsStruct * VAR2;
static twoIntsStruct * VAR3;
void FUN0()
{
    twoIntsStruct * data = VAR1;
<START>
    delete data;
<END>
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    VAR1 = data;
    FUN0();
}
} 

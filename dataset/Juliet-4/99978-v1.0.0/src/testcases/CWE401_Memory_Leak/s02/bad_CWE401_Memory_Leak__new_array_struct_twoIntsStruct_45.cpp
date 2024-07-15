namespace NAMESPACE0
{
static struct _twoIntsStruct * VAR1;
static struct _twoIntsStruct * VAR2;
static struct _twoIntsStruct * VAR3;
void FUN0()
{
    struct _twoIntsStruct * data = VAR1;
<START>
<END>
    ; 
}
void FUN1()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = new struct _twoIntsStruct[100];
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    VAR1 = data;
    FUN0();
}
} 

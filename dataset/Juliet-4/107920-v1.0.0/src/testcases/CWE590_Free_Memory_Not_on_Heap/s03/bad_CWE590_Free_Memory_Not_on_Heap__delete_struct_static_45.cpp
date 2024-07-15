namespace NAMESPACE0
{
static twoIntsStruct * VAR1;
static twoIntsStruct * VAR2;
void FUN0()
{
    twoIntsStruct * data = VAR1;
    printStructLine(data);
<START>
    delete data;
<END>
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL; 
    {
        static twoIntsStruct dataBuffer;
        dataBuffer.intOne = 1;
        dataBuffer.intTwo = 1;
        data = &dataBuffer;
    }
    VAR1 = data;
    FUN0();
}
} 

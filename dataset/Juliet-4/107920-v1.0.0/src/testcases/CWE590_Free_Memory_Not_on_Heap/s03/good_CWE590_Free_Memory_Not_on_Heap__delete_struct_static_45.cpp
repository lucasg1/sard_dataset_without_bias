namespace NAMESPACE0
{
static twoIntsStruct * VAR1;
static twoIntsStruct * VAR2;
void FUN0()
{
    twoIntsStruct * data = VAR2;
    printStructLine(data);
    delete data;
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL; 
    {
        twoIntsStruct * dataBuffer = new twoIntsStruct;
        dataBuffer->intOne = 2;
        dataBuffer->intTwo = 2;
        data = dataBuffer;
    }
    VAR2 = data;
    FUN0();
}
} 

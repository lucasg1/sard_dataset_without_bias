namespace NAMESPACE0
{
typedef union
{
    twoIntsStruct * unionFirst;
    twoIntsStruct * unionSecond;
} unionType;
void FUN0()
{
    twoIntsStruct * data;
    unionType myUnion;
    data = NULL; 
    {
        char buffer[sizeof(twoIntsStruct)];
        twoIntsStruct * dataBuffer = new(buffer) twoIntsStruct;
        dataBuffer->intOne = 1;
        dataBuffer->intTwo = 1;
        data = dataBuffer;
    }
    myUnion.unionFirst = data;
    {
        twoIntsStruct * data = myUnion.unionSecond;
        printStructLine(data);
<START>
        delete data;
<END>
    }
}
} 

namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    twoIntsStruct * &dataRef = data;
    data = NULL;
    {
        twoIntsStruct * data = dataRef;
<START>
        printIntLine(data->intOne);
<END>
    }
}
} 

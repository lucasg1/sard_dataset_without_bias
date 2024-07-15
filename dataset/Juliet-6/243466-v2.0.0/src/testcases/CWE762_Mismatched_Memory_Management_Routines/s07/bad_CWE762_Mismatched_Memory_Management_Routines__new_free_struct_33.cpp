namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    twoIntsStruct * &dataRef = data;
    data = NULL;
    data = new twoIntsStruct;
    {
        twoIntsStruct * data = dataRef;
<START>
        free(data);
<END>
    }
}
} 

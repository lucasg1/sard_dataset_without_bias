namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    twoIntsStruct * &dataRef = data;
    data = NULL;
    data = new twoIntsStruct;
    delete data;
    {
        twoIntsStruct * data = dataRef;
<START>
        delete data;
<END>
    }
}
} 

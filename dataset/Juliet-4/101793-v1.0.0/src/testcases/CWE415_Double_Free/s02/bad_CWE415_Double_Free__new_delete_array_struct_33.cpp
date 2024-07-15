namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    twoIntsStruct * &dataRef = data;
    data = NULL;
    data = new twoIntsStruct[100];
    delete [] data;
    {
        twoIntsStruct * data = dataRef;
<START>
        delete [] data;
<END>
    }
}
} 

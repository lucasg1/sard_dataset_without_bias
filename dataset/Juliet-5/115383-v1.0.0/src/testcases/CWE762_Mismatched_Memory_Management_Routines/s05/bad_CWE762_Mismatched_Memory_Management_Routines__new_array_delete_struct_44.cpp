namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data)
{
<START>
    delete data;
<END>
}
void FUN1()
{
    twoIntsStruct * data;
    void (*funcPtr) (twoIntsStruct *) = FUN0;
    data = NULL;
    data = new twoIntsStruct[100];
    funcPtr(data);
}
} 

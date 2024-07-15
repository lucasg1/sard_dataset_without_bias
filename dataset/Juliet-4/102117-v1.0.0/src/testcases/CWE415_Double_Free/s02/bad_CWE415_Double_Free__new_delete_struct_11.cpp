namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new twoIntsStruct;
        delete data;
    }
    if(globalReturnsTrue())
    {
<START>
        delete data;
<END>
    }
}
} 

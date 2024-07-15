namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new twoIntsStruct[100];
    }
    if(globalReturnsTrue())
    {
<START>
        free(data);
<END>
    }
}
} 

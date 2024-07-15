namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(1)
    {
        data = new twoIntsStruct[100];
    }
    if(1)
    {
<START>
        delete data;
<END>
    }
}
} 

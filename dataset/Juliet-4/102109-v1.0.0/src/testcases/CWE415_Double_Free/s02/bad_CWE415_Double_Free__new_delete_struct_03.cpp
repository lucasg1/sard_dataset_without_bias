namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(5==5)
    {
        data = new twoIntsStruct;
        delete data;
    }
    if(5==5)
    {
<START>
        delete data;
<END>
    }
}
} 

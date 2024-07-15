namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    while(1)
    {
        data = new twoIntsStruct;
        delete data;
        break;
    }
    while(1)
    {
<START>
        delete data;
<END>
        break;
    }
}
} 

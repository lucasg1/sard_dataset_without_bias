namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    while(1)
    {
        data = new twoIntsStruct[100];
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

namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    while(1)
    {
        data = new twoIntsStruct;
        break;
    }
    while(1)
    {
<START>
        free(data);
<END>
        break;
    }
}
} 

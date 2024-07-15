namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalTrue)
    {
        data = new twoIntsStruct[100];
    }
    if(globalTrue)
    {
<START>
        free(data);
<END>
    }
}
} 

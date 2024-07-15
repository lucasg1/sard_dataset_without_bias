namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(5==5)
    {
        data = new twoIntsStruct[100];
    }
    if(5==5)
    {
<START>
        free(data);
<END>
    }
}
} 

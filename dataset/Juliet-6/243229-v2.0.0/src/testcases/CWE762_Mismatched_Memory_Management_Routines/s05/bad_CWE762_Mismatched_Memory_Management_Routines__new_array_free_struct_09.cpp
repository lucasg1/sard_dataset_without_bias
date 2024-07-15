namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new twoIntsStruct[100];
    }
    if(GLOBAL_CONST_TRUE)
    {
<START>
        free(data);
<END>
    }
}
} 

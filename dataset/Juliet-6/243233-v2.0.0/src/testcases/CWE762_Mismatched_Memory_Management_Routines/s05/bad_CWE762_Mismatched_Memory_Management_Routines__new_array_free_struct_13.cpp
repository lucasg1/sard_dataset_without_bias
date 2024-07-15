namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new twoIntsStruct[100];
    }
    if(GLOBAL_CONST_FIVE==5)
    {
<START>
        free(data);
<END>
    }
}
} 

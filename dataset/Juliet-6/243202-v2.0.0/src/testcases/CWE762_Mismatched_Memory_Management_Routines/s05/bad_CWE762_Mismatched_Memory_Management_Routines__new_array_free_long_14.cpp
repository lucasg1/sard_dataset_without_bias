namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new long[100];
    }
    if(globalFive==5)
    {
<START>
        free(data);
<END>
    }
}
} 

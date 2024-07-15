namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(globalTrue)
    {
        data = new long[100];
        delete [] data;
    }
    if(globalTrue)
    {
<START>
        delete [] data;
<END>
    }
}
} 

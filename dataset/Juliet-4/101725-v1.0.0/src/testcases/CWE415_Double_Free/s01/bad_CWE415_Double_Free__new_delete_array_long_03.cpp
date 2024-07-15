namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(5==5)
    {
        data = new long[100];
        delete [] data;
    }
    if(5==5)
    {
<START>
        delete [] data;
<END>
    }
}
} 

namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new long[100];
        delete [] data;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
<START>
        delete [] data;
<END>
    }
}
} 

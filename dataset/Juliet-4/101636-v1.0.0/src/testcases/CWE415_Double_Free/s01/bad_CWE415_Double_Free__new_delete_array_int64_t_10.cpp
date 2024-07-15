namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = new int64_t[100];
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

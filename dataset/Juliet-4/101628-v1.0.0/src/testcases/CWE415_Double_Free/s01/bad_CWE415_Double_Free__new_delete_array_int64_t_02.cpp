namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(1)
    {
        data = new int64_t[100];
        delete [] data;
    }
    if(1)
    {
<START>
        delete [] data;
<END>
    }
}
} 

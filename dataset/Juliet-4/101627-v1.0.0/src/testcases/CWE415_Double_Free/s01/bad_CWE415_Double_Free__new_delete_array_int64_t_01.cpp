namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    data = new int64_t[100];
    delete [] data;
<START>
    delete [] data;
<END>
}
} 

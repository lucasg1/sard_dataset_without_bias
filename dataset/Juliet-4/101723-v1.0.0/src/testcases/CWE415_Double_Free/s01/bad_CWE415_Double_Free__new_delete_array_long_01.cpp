namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    data = new long[100];
    delete [] data;
<START>
    delete [] data;
<END>
}
} 

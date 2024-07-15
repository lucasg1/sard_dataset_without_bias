namespace NAMESPACE0
{
void FUN0()
{
    int i;
    int64_t * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = new int64_t[50];
    }
    {
        int64_t source[100] = {0}; 
<START>
        memmove(data, source, 100*sizeof(int64_t));
<END>
        printLongLongLine(data[0]);
        delete [] data;
    }
}
} 

namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = new int64_t[50];
    }
    else
    {
        data = new int64_t[100];
    }
    {
        int64_t source[100] = {0}; 
<START>
        memcpy(data, source, 100*sizeof(int64_t));
<END>
        printLongLongLine(data[0]);
        delete [] data;
    }
}
} 

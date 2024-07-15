namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    data = new int64_t[50];
    {
        int64_t * dataCopy = data;
        int64_t * data = dataCopy;
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
} 

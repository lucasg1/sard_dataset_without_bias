namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    data = new int64_t[100];
    {
        int64_t * dataCopy = data;
        int64_t * data = dataCopy;
        {
            int64_t source[100] = {0}; 
            memcpy(data, source, 100*sizeof(int64_t));
            printLongLongLine(data[0]);
            delete [] data;
        }
    }
}
} 

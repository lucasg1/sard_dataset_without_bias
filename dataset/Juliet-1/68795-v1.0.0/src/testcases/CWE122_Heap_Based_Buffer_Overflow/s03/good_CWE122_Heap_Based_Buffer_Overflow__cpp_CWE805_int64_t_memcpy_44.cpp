namespace NAMESPACE0
{
void FUN0(int64_t * data)
{
    {
        int64_t source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
        delete [] data;
    }
}
void FUN1()
{
    int64_t * data;
    void (*funcPtr) (int64_t *) = FUN0;
    data = NULL;
    data = new int64_t[100];
    funcPtr(data);
}
} 

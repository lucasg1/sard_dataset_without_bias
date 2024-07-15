namespace NAMESPACE0
{
void FUN0(int64_t * &data)
{
    data = new int64_t[50];
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    FUN0(data);
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

namespace NAMESPACE0
{
void FUN0(int64_t * dataArray[]);
void FUN1()
{
    int64_t * data;
    int64_t * dataArray[5];
    data = NULL;
    data = new int64_t[100];
    dataArray[2] = data;
    FUN0(dataArray);
}
} 
namespace NAMESPACE0
{
void FUN0(int64_t * dataArray[])
{
    int64_t * data = dataArray[2];
    {
        int64_t source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
        delete [] data;
    }
}
} 

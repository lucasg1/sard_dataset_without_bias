namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL; 
    while(1)
    {
        {
            int64_t * dataBuffer = new int64_t;
            *dataBuffer = 5LL;
            data = dataBuffer;
        }
        break;
    }
    printLongLongLine(*data);
    delete data;
}
} 

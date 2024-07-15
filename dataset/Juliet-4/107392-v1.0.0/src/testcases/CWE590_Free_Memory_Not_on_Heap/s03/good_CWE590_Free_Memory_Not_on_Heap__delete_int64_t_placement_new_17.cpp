namespace NAMESPACE0
{
void FUN0()
{
    int h;
    int64_t * data;
    data = NULL; 
    for(h = 0; h < 1; h++)
    {
        {
            int64_t * dataBuffer = new int64_t;
            *dataBuffer = 5LL;
            data = dataBuffer;
        }
    }
    printLongLongLine(*data);
    delete data;
}
} 

namespace NAMESPACE0
{
void FUN0()
{
    int h;
    long * data;
    data = NULL; 
    for(h = 0; h < 1; h++)
    {
        {
            long * dataBuffer = new long;
            *dataBuffer = 5L;
            data = dataBuffer;
        }
    }
    printLongLine(*data);
    delete data;
}
} 

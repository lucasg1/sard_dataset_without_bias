namespace NAMESPACE0
{
void FUN0()
{
    int h;
    int64_t * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        data = new int64_t[100];
    }
    {
        int64_t source[100] = {0}; 
        memmove(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
        delete [] data;
    }
}
} 

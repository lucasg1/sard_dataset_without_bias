namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = new int64_t[100];
        break;
    }
    {
        int64_t source[100] = {0}; 
        memmove(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
        delete [] data;
    }
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = new int64_t[100];
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
        int64_t source[100] = {0}; 
        memmove(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
        delete [] data;
    }
}
} 

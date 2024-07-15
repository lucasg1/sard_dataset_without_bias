namespace NAMESPACE0
{
static int64_t * VAR1;
static int64_t * VAR2;
void FUN0()
{
    int64_t * data = VAR2;
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
    data = new int64_t[100];
    VAR2 = data;
    FUN0();
}
} 

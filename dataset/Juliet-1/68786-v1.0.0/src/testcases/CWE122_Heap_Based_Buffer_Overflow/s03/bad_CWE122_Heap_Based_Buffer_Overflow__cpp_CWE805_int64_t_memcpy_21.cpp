namespace NAMESPACE0
{
static int VAR1 = 0;
static int64_t * FUN0(int64_t * data)
{
    if(VAR1)
    {
        data = new int64_t[50];
    }
    return data;
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    VAR1 = 1; 
    data = FUN0(data);
    {
        int64_t source[100] = {0}; 
<START>
        memcpy(data, source, 100*sizeof(int64_t));
<END>
        printLongLongLine(data[0]);
        delete [] data;
    }
    ;
}
} 

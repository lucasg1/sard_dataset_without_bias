static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int *)ALLOCA(10*sizeof(int));
    }
    {
        int source[10] = {0};
        memcpy(data, source, 10*sizeof(int));
        printIntLine(data[0]);
    }
}
void FUN1()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = (int *)ALLOCA(10*sizeof(int));
    }
    {
        int source[10] = {0};
        memcpy(data, source, 10*sizeof(int));
        printIntLine(data[0]);
    }
}

static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    {
        int source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int));
        printIntLine(data[0]);
        free(data);
    }
}
void FUN1()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    {
        int source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int));
        printIntLine(data[0]);
        free(data);
    }
}

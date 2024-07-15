void FUN0()
{
    int * data;
    data = NULL;
    if(globalFive==5)
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        free(data);
    }
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ; 
    }
}
void FUN1()
{
    int * data;
    data = NULL;
    if(globalFive==5)
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        free(data);
    }
    if(globalFive==5)
    {
        ; 
    }
}
void FUN2()
{
    int * data;
    data = NULL;
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    if(globalFive==5)
    {
        free(data);
    }
}
void FUN3()
{
    int * data;
    data = NULL;
    if(globalFive==5)
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    if(globalFive==5)
    {
        free(data);
    }
}

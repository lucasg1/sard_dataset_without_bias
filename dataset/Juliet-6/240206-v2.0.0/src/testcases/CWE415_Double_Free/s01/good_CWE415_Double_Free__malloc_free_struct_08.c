static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    twoIntsStruct * data;
    data = NULL;
    if(FUN0())
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        free(data);
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ; 
    }
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    if(FUN0())
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        free(data);
    }
    if(FUN0())
    {
        ; 
    }
}
void FUN4()
{
    twoIntsStruct * data;
    data = NULL;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
    }
    if(FUN0())
    {
        free(data);
    }
}
void FUN5()
{
    twoIntsStruct * data;
    data = NULL;
    if(FUN0())
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
    }
    if(FUN0())
    {
        free(data);
    }
}

namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
    }
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        free(data);
    }
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        free(data);
    }
}
void FUN2()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new twoIntsStruct;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        delete data;
    }
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new twoIntsStruct;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        delete data;
    }
}
} 

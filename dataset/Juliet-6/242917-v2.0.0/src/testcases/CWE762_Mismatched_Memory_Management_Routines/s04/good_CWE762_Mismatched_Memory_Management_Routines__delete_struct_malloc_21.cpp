namespace NAMESPACE0
{
static int VAR1 = 0;
static int VAR2 = 0;
static int VAR3 = 0;
void FUN0(twoIntsStruct * data)
{
    if(VAR1)
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
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    VAR1 = 0; 
    FUN0(data);
}
void FUN2(twoIntsStruct * data)
{
    if(VAR2)
    {
        free(data);
    }
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    VAR2 = 1; 
    FUN2(data);
}
void FUN4(twoIntsStruct * data)
{
    if(VAR3)
    {
        delete data;
    }
}
void FUN5()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct;
    VAR3 = 1; 
    FUN4(data);
}
} 

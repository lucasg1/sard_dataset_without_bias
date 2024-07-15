static int VAR0 = 0;
static int VAR1 = 0;
static int VAR2 = 0;
void FUN0(twoIntsStruct * data)
{
    if(VAR0)
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
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    free(data);
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(twoIntsStruct * data)
{
    if(VAR1)
    {
        ; 
    }
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    free(data);
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(twoIntsStruct * data)
{
    if(VAR2)
    {
        free(data);
    }
}
void FUN5()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    VAR2 = 1; 
    FUN4(data);
}

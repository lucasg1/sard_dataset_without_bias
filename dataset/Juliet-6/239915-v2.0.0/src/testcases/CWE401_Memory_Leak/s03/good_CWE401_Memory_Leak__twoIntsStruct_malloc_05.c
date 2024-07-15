static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticTrue)
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine(&data[0]);
    }
    if(staticFalse)
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
    if(staticTrue)
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine(&data[0]);
    }
    if(staticTrue)
    {
        free(data);
    }
}
void FUN2()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (twoIntsStruct *)ALLOCA(100*sizeof(twoIntsStruct));
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine(&data[0]);
    }
    if(staticTrue)
    {
        ; 
    }
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticTrue)
    {
        data = (twoIntsStruct *)ALLOCA(100*sizeof(twoIntsStruct));
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine(&data[0]);
    }
    if(staticTrue)
    {
        ; 
    }
}

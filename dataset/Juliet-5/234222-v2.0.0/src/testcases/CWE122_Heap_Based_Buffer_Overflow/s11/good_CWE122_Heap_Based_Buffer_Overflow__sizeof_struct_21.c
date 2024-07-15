static int VAR0 = 0;
static int VAR1 = 0;
static twoIntsStruct * FUN0(twoIntsStruct * data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (twoIntsStruct *)malloc(sizeof(*data));
        if (data == NULL) {exit(-1);}
        data->intOne = 1;
        data->intTwo = 2;
    }
    return data;
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    VAR0 = 0; 
    data = FUN0(data);
    printStructLine(data);
    free(data);
}
static twoIntsStruct * FUN2(twoIntsStruct * data)
{
    if(VAR1)
    {
        data = (twoIntsStruct *)malloc(sizeof(*data));
        if (data == NULL) {exit(-1);}
        data->intOne = 1;
        data->intTwo = 2;
    }
    return data;
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    VAR1 = 1; 
    data = FUN2(data);
    printStructLine(data);
    free(data);
}

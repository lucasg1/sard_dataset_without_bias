extern int VAR0;
extern int VAR1;
twoIntsStruct * FUN0(twoIntsStruct * data)
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
twoIntsStruct * FUN1(twoIntsStruct * data)
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
int VAR0 = 0;
int VAR1 = 0;
twoIntsStruct * FUN0(twoIntsStruct * data);
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    VAR0 = 0; 
    data = FUN0(data);
    printStructLine(data);
    free(data);
}
twoIntsStruct * FUN1(twoIntsStruct * data);
void FUN5()
{
    twoIntsStruct * data;
    data = NULL;
    VAR1 = 1; 
    data = FUN1(data);
    printStructLine(data);
    free(data);
}

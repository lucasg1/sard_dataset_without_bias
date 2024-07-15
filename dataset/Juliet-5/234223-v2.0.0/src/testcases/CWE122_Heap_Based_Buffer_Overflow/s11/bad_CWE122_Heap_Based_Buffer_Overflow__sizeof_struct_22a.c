extern int VAR0;
twoIntsStruct * FUN0(twoIntsStruct * data)
{
    if(VAR0)
    {
        data = (twoIntsStruct *)malloc(sizeof(data));
        if (data == NULL) {exit(-1);}
        data->intOne = 1;
        data->intTwo = 2;
    }
    return data;
}
int VAR0 = 0;
twoIntsStruct * FUN0(twoIntsStruct * data);
void FUN2()
{
    twoIntsStruct * data;
    data = NULL;
    VAR0 = 1; 
    data = FUN0(data);
<START>
    printStructLine(data);
<END>
    free(data);
}

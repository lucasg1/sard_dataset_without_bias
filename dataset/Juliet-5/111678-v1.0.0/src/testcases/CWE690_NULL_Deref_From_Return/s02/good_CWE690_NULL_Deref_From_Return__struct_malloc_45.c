static twoIntsStruct * VAR0;
static twoIntsStruct * VAR1;
void FUN0()
{
    twoIntsStruct * data = VAR1;
    if (data != NULL)
    {
        data[0].intOne = 1;
        data[0].intTwo = 1;
        printStructLine(&data[0]);
        free(data);
    }
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL; 
    data = (twoIntsStruct *)malloc(1*sizeof(twoIntsStruct));
    VAR1 = data;
    FUN0();
}

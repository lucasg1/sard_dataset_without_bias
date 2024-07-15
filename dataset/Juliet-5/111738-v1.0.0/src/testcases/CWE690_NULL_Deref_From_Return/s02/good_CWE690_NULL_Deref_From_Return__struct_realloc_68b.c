twoIntsStruct * VAR0;
twoIntsStruct * VAR1;
void FUN0();
void FUN1()
{
    twoIntsStruct * data;
    data = NULL; 
    data = (twoIntsStruct *)realloc(data, 1*sizeof(twoIntsStruct));
    VAR1 = data;
    FUN0();
}
extern twoIntsStruct * VAR0;
extern twoIntsStruct * VAR1;
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

void FUN0(twoIntsStruct * data);
void FUN1()
{
    twoIntsStruct * data;
    data = NULL; 
    data = (twoIntsStruct *)realloc(data, 1*sizeof(twoIntsStruct));
    FUN0(data);
}
void FUN3(twoIntsStruct * data);
void FUN0(twoIntsStruct * data)
{
    FUN3(data);
}
void FUN3(twoIntsStruct * data)
{
    if (data != NULL)
    {
        data[0].intOne = 1;
        data[0].intTwo = 1;
        printStructLine(&data[0]);
        free(data);
    }
}

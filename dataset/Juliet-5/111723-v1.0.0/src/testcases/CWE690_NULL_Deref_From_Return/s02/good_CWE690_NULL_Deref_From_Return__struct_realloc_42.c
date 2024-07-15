static twoIntsStruct * FUN0(twoIntsStruct * data)
{
    data = (twoIntsStruct *)realloc(data, 1*sizeof(twoIntsStruct));
    return data;
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL; 
    data = FUN0(data);
    if (data != NULL)
    {
        data[0].intOne = 1;
        data[0].intTwo = 1;
        printStructLine(&data[0]);
        free(data);
    }
}

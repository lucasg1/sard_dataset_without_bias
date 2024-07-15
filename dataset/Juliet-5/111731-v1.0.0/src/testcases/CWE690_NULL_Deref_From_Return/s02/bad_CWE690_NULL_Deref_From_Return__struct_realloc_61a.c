twoIntsStruct * FUN0(twoIntsStruct * data)
{
    data = (twoIntsStruct *)realloc(data, 1*sizeof(twoIntsStruct));
    return data;
}
twoIntsStruct * FUN0(twoIntsStruct * data);
void FUN2()
{
    twoIntsStruct * data;
    data = NULL; 
    data = FUN0(data);
<START>
    data[0].intOne = 1;
    data[0].intTwo = 1;
<END>
    printStructLine(&data[0]);
    free(data);
}

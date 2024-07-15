namespace NAMESPACE0
{
void FUN0(twoIntsStruct * &data)
{
    data = (twoIntsStruct *)malloc(1*sizeof(twoIntsStruct));
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL; 
    FUN0(data);
    if (data != NULL)
    {
        data[0].intOne = 1;
        data[0].intTwo = 1;
        printStructLine(&data[0]);
        free(data);
    }
}
} 

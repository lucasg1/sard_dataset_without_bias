namespace NAMESPACE0
{
void FUN0(twoIntsStruct * &data)
{
    data = (twoIntsStruct *)realloc(data, 1*sizeof(twoIntsStruct));
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL; 
    FUN0(data);
<START>
    data[0].intOne = 1;
    data[0].intTwo = 1;
<END>
    printStructLine(&data[0]);
    free(data);
}
} 

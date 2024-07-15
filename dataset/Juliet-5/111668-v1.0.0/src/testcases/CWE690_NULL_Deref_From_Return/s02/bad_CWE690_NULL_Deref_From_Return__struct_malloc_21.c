static int VAR0 = 0;
void FUN0(twoIntsStruct * data)
{
    if(VAR0)
    {
<START>
        data[0].intOne = 1;
        data[0].intTwo = 1;
<END>
        printStructLine(&data[0]);
        free(data);
    }
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL; 
    data = (twoIntsStruct *)malloc(1*sizeof(twoIntsStruct));
    VAR0 = 1; 
    FUN0(data);
}

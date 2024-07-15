static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    twoIntsStruct * data;
    data = NULL; 
    data = (twoIntsStruct *)calloc(1, sizeof(twoIntsStruct));
    if(FUN0())
    {
<START>
        data[0].intOne = 1;
        data[0].intTwo = 1;
<END>
        printStructLine(&data[0]);
        free(data);
    }
}

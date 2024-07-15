static twoIntsStruct * VAR0;
static twoIntsStruct * VAR1;
void FUN0()
{
    twoIntsStruct * data = VAR0;
    printStructLine(&data[0]);
<START>
    free(data);
<END>
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL; 
    {
        twoIntsStruct * dataBuffer = (twoIntsStruct *)ALLOCA(100*sizeof(twoIntsStruct));
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i].intOne = 1;
                dataBuffer[i].intTwo = 1;
            }
        }
        data = dataBuffer;
    }
    VAR0 = data;
    FUN0();
}

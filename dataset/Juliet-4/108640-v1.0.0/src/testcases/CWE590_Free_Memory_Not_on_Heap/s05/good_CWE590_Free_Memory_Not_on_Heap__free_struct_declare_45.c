static twoIntsStruct * VAR0;
static twoIntsStruct * VAR1;
void FUN0()
{
    twoIntsStruct * data = VAR1;
    printStructLine(&data[0]);
    free(data);
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL; 
    {
        twoIntsStruct * dataBuffer = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (dataBuffer == NULL)
        {
            printLine("malloc() failed");
            exit(1);
        }
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
    VAR1 = data;
    FUN0();
}

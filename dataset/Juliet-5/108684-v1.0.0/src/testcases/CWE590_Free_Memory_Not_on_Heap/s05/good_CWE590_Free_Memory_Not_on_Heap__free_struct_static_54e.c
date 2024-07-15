void FUN0(twoIntsStruct * data);
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
    FUN0(data);
}
void FUN3(twoIntsStruct * data);
void FUN4(twoIntsStruct * data)
{
    FUN3(data);
}
void FUN4(twoIntsStruct * data);
void FUN6(twoIntsStruct * data)
{
    FUN4(data);
}
void FUN6(twoIntsStruct * data);
void FUN0(twoIntsStruct * data)
{
    FUN6(data);
}
void FUN3(twoIntsStruct * data)
{
    printStructLine(&data[0]);
    free(data);
}

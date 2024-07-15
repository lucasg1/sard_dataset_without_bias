void FUN0(twoIntsStruct * dataArray[]);
void FUN1()
{
    twoIntsStruct * data;
    twoIntsStruct * dataArray[5];
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
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(twoIntsStruct * dataArray[])
{
    twoIntsStruct * data = dataArray[2];
    printStructLine(&data[0]);
    free(data);
}

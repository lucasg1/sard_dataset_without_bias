static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    twoIntsStruct * data;
    data = NULL; 
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
    }
    printStructLine(&data[0]);
    free(data);
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL; 
    if(STATIC_CONST_TRUE)
    {
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
    }
    printStructLine(&data[0]);
    free(data);
}

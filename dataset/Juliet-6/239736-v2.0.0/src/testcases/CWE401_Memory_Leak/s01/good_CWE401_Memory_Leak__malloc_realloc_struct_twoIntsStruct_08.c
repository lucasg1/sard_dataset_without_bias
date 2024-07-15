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
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            struct _twoIntsStruct * data = (struct _twoIntsStruct *)malloc(100*sizeof(struct _twoIntsStruct));
            if (data == NULL) {exit(-1);}
            struct _twoIntsStruct * tmpData;
            data[0].intOne = 0;
            data[0].intTwo = 0;
            printStructLine((twoIntsStruct *)&data[0]);
            tmpData = (struct _twoIntsStruct *)realloc(data, (130000)*sizeof(struct _twoIntsStruct));
            if (tmpData != NULL)
            {
                data = tmpData;
                data[0].intOne = 1;
                data[0].intTwo = 1;
                printStructLine((twoIntsStruct *)&data[0]);
            }
            free(data);
        }
    }
}
void FUN3()
{
    if(FUN0())
    {
        {
            struct _twoIntsStruct * data = (struct _twoIntsStruct *)malloc(100*sizeof(struct _twoIntsStruct));
            if (data == NULL) {exit(-1);}
            struct _twoIntsStruct * tmpData;
            data[0].intOne = 0;
            data[0].intTwo = 0;
            printStructLine((twoIntsStruct *)&data[0]);
            tmpData = (struct _twoIntsStruct *)realloc(data, (130000)*sizeof(struct _twoIntsStruct));
            if (tmpData != NULL)
            {
                data = tmpData;
                data[0].intOne = 1;
                data[0].intTwo = 1;
                printStructLine((twoIntsStruct *)&data[0]);
            }
            free(data);
        }
    }
}

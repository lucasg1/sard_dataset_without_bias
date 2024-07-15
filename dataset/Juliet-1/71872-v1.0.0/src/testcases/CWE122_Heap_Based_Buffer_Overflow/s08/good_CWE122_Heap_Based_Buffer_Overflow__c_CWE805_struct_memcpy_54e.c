void FUN0(twoIntsStruct * data);
void FUN1(twoIntsStruct * data)
{
    FUN0(data);
}
void FUN2(twoIntsStruct * data);
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    FUN2(data);
}
void FUN1(twoIntsStruct * data);
void FUN6(twoIntsStruct * data)
{
    FUN1(data);
}
void FUN6(twoIntsStruct * data);
void FUN2(twoIntsStruct * data)
{
    FUN6(data);
}
void FUN0(twoIntsStruct * data)
{
    {
        twoIntsStruct source[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                source[i].intOne = 0;
                source[i].intTwo = 0;
            }
        }
        memcpy(data, source, 100*sizeof(twoIntsStruct));
        printStructLine(&data[0]);
        free(data);
    }
}

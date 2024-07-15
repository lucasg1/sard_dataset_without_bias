twoIntsStruct * VAR0;
twoIntsStruct * VAR1;
void FUN0();
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(50*sizeof(twoIntsStruct));
    VAR0 = data;
    FUN0();
}
extern twoIntsStruct * VAR0;
extern twoIntsStruct * VAR1;
void FUN0()
{
    twoIntsStruct * data = VAR0;
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
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
<START>
                data[i] = source[i];
<END>
            }
            printStructLine(&data[0]);
            free(data);
        }
    }
}

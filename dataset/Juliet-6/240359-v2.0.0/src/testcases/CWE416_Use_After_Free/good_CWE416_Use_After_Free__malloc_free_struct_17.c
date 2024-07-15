void FUN0()
{
    int i,k;
    twoIntsStruct * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
        free(data);
    }
    for(k = 0; k < 1; k++)
    {
        ; 
    }
}
void FUN1()
{
    int h,j;
    twoIntsStruct * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
    }
    for(j = 0; j < 1; j++)
    {
        printStructLine(&data[0]);
    }
}

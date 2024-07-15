void FUN0()
{
    int i,k;
    twoIntsStruct * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = (twoIntsStruct *)realloc(data, 100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine(&data[0]);
    }
    for(k = 0; k < 1; k++)
    {
        free(data);
    }
}
void FUN1()
{
    int h,j;
    twoIntsStruct * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        data = (twoIntsStruct *)ALLOCA(100*sizeof(twoIntsStruct));
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine(&data[0]);
    }
    for(j = 0; j < 1; j++)
    {
        ; 
    }
}

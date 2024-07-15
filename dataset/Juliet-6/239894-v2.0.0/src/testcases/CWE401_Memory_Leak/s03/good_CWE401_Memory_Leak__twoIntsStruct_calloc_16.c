void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    while(1)
    {
        data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine(&data[0]);
        break;
    }
    while(1)
    {
        free(data);
        break;
    }
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    while(1)
    {
        data = (twoIntsStruct *)ALLOCA(100*sizeof(twoIntsStruct));
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine(&data[0]);
        break;
    }
    while(1)
    {
        ; 
        break;
    }
}

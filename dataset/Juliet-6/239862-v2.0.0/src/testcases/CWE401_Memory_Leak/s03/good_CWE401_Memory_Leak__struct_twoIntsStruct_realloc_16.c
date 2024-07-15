void FUN0()
{
    struct _twoIntsStruct * data;
    data = NULL;
    while(1)
    {
        data = (struct _twoIntsStruct *)realloc(data, 100*sizeof(struct _twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
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
    struct _twoIntsStruct * data;
    data = NULL;
    while(1)
    {
        data = (struct _twoIntsStruct *)ALLOCA(100*sizeof(struct _twoIntsStruct));
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
        break;
    }
    while(1)
    {
        ; 
        break;
    }
}

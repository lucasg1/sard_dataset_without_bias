namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    twoIntsStruct * *dataPtr1 = &data;
    twoIntsStruct * *dataPtr2 = &data;
    data = NULL;
    {
        twoIntsStruct * data = *dataPtr1;
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        *dataPtr1 = data;
    }
    {
        twoIntsStruct * data = *dataPtr2;
        free(data);
    }
}
void FUN1()
{
    twoIntsStruct * data;
    twoIntsStruct * *dataPtr1 = &data;
    twoIntsStruct * *dataPtr2 = &data;
    data = NULL;
    {
        twoIntsStruct * data = *dataPtr1;
        data = new twoIntsStruct;
        *dataPtr1 = data;
    }
    {
        twoIntsStruct * data = *dataPtr2;
        delete data;
    }
}
} 

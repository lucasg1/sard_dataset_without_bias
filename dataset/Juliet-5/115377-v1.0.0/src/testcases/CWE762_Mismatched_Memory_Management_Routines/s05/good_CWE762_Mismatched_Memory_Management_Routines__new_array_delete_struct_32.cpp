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
        data = new twoIntsStruct;
        *dataPtr1 = data;
    }
    {
        twoIntsStruct * data = *dataPtr2;
        delete data;
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
        data = new twoIntsStruct[100];
        *dataPtr1 = data;
    }
    {
        twoIntsStruct * data = *dataPtr2;
        delete [] data;
    }
}
} 

namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    TwoIntsClass * *dataPtr1 = &data;
    TwoIntsClass * *dataPtr2 = &data;
    data = NULL;
    {
        TwoIntsClass * data = *dataPtr1;
        data = new TwoIntsClass[100];
        *dataPtr1 = data;
    }
    {
        TwoIntsClass * data = *dataPtr2;
        delete [] data;
    }
}
void FUN1()
{
    TwoIntsClass * data;
    TwoIntsClass * *dataPtr1 = &data;
    TwoIntsClass * *dataPtr2 = &data;
    data = NULL;
    {
        TwoIntsClass * data = *dataPtr1;
        data = new TwoIntsClass[100];
        delete [] data;
        *dataPtr1 = data;
    }
    {
        TwoIntsClass * data = *dataPtr2;
        ; 
    }
}
} 
